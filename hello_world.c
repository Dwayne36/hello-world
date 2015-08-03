#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int number;
#define HW_STRING "hello world\n"

int main(int argc, char **argv) {
        char *string;
	        number=7;
		string = malloc(strlen(HW_STRING));
				        
		printf("String 2 virtual address %lX\n", (unsigned long) string);
						      
		strcpy(string, HW_STRING);
		printf("%s %i\n", string, number);
		 return 0;
 } 
