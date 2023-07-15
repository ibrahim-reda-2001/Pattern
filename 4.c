#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>



int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n = 5;
	for (int row = 0; row < n; ++row) {
		for (int s = 0; s < n - row - 1; s++) {
			printf(" ");
		}
		for (int col = 0; col < (2 * row + 1); col++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
