#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>



int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n = 6;


	for (int row = 0; row < 2 * n; row++) {
		if (row > n) {
			for (int s = 0; s < n - (2 * n - row); s++) {
				printf(" ");
			}
			for (int col = 0; col < 2 * n - row; col++) {
				printf("* ");
			}

		}
		else {

			int col = row;
			for (int s = 0; s < n - col; s++) {
				printf(" ");
			}
			for (int col = 0; col < row; col++) {
				printf("* ");
			}

		}
		printf("\n");
	}
	return 0;
}
