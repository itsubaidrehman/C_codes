#include <stdio.h>
int main () {
	int i; int j; int size = 8;
	//for (i = 0; i < size; i++) {
	//	for (int j=0; j <= i; j++) {
	//		printf("*");
//}
//		printf("\n");	
//}
	for (i = 1; i <= size; i++) {
		for (j=1; j <= i; j++) {
			printf("*");
		}
		//printf("\n");
	}
	return 0;
}
