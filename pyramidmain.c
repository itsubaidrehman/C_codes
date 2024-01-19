#include <stdio.h>


int main () {
	int size = 8;
	for (int i = 1; i <=size; i++) {
		for (int j = 1; j < size - i+1; j++) {//What will happen if the loop is at 1 and the condition is the one that is already false like j > 8;

			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) { 
			printf("*");
		}	
		printf("\n");
	}      
        return 0; 
}
