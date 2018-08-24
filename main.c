#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

int f(char * s) {
	char buf[20]; //buf not set to use SIZE macro

	strncpy(buf, s, SIZE); //wrong: copy may exceed size of buf

	for (int i = 0; i < SIZE; i++) { //wrong: upper limit that is higher than array size
		printf("%c", buf[i]);
	}
}
/*
*/
void main(int argc, char *argv[]) {
system("color a");
 if(argc < 2) {
 printf("Usage: %s <password>\n", argv[0]);
 exit(0);
 }
 int a = f(argv[1]);
}