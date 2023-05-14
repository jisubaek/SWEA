#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int test_case, test_count;

	setbuf(stdout, NULL);
	scanf_s("%d", &test_count);
	for (test_case = 1; test_case <= test_count; test_case++) {
		int count = 0;
		long long int N;
		int* array;
		int an = 0;
		long long int x, y, min = 0;
		scanf_s("%lld", &N);
		for (int i = 1; i <= sqrt(N) + 1; i++) {
			if (N % i == 0) count++;
		}
		array = malloc(count * sizeof(int));
		for (int i = 1; i <= sqrt(N) + 1; i++) {
			if (N % i == 0) {
				array[an] = i;
				an++;
			}
		}
		min = N;

		y = array[count - 1];
		x = N / y;
		min = x + y - 2;

		printf("#%d %lld\n", test_case, min);
		free(array);

	}


	return 0;
}