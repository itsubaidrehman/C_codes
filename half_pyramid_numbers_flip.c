#include <stdio.h>
int main( ) {
	int i; int j; int size = 8;
	for (i = size; i > 0; i--) {
		for (j=1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");	
	}
	return 0;
}
