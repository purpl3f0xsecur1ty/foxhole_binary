#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int secret() {
	//Make sure bash isn't dropping permissions
	uid_t uid = geteuid(); 
	setresuid(uid, uid, uid);
	gid_t gid = getegid();
	setresgid(gid, gid, gid);
	//Execute bash
	return system("/bin/bash");
}

int overflow() {
	printf("\nDo you want the root password?");
	//Making a buffer of 500 bytes
	char buffer[500]; 
	int userinput;
	//Use a vulnerable function to overflow the "buffer" variable
	//Gets() doesn't do bounds checking, and doesn't terminate on a null byte (\x00)
	userinput = gets(buffer); 
	printf("\nYou didn't convince me!");
	printf("\nMaybe you should write me a *very long* reason why I should give you the password\n");
	return 0;
}

int main() {
	overflow();
	return 0;
}
