#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>



int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n = 5;
	for (int row = 1; row <= n; row++) {
		for (int s = 1; s <= n - row; s++) {
			printf(" ");
		}
		for (int col = row; col > 0; col--) {
			printf("%d", col);
		}
		for (int col = 2; col <= row; col++) {
			printf("%d", col);
		}
		printf("\n");
	}


	return 0;
}
