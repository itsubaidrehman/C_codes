#include <stdio.h>
int main () {
	int size = 8;
	for (int i = size; i > 0; i--) {
		for (int j = 8; j > i;  j--) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) { 
			printf("*");
		}	
		printf("\n");
	}      
        return 0; 
}
