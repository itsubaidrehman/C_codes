#include <stdio.h>
int main () {
	int size = 8;
	for (int i = 1; i <=size; i++) {
		for (int j = 1; j < size - i+1;  j++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) { 
			printf("*");
		}	
		printf("\n");
	}      
        return 0; 
}
