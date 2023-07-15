#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>



int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n = 5;

	int ncol = 3;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < ncol; col++) {
			if ((row == 0) || (row == n - 1) || (col == 0) || (col == ncol - 1)) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
