#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
int minmum(int x, int y) {
	int min;
	if (x < y) {
		min = x;
	}
	else {
		min = y;
	}
	return min;

}


int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n = 2;
	for (int row = 0; row <= 2 * n - 2; row++) {
		for (int col = 0; col <= 2 * n - 2; col++) {
			int x = n - minmum(minmum(2 * n - row - 2, 2 * n - col - 2), minmum(row, col));
			printf("%d ", x);
		}
		printf("\n");
	}
	return 0;
}
