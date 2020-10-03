#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int secret() {
	uid_t uid = geteuid();
	setresuid(uid, uid, uid);
	gid_t gid = getegid();
	setresgid(gid, gid, gid);
	return system("/bin/bash");
}

int overflow() {
	printf("\nDo you want the root password?");
	char buffer[500];
	int userinput;
	userinput = gets(buffer);
	printf("\nYou didn't convince me!");
	printf("\nMaybe you should write me a *very long* reason why I should give you the password\n");
	return 0;
}

int main() {
	overflow();
	return 0;
}
