-----
# FoxHole
-----

In this repo you'll find both the source code and the compiled versions of the Linux Pwn challenge found in my vulnhub box, FoxHole.

The binary was originally compiled with the following command:
```bash
gcc GiveMeRootPlz.c -o GiveMeRootPlz -fno-stack-protector -z execstack -m32
```

It was compliled on Ubuntu 20.04, 64-bit.

[Get the Vulnhub box here!](http://vulnhub.com/entry/foxhole-101,566/)

[Write up explaining the solution](https://purpl3f0xsec.tech/2020/10/02/Vulnhub_foxhole.html)
