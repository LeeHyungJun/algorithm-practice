#include <stdio.h>

int factorial(int n) {

	if (n == 0)
		return 1;
	else if (n == 1) {
		return n;
	}
	else
		return n*factorial(n - 1);

}

void main() {
	int n;
	fscanf(stdin, "%d", &n);

	printf("%d", factorial(n));
}