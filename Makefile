all: xcmd

xcmd:
	/usr/bin/gcc -o xcmd xcmd.c

clean:
	rm -f xcmd
