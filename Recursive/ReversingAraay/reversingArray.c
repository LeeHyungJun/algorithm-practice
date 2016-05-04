#include <stdio.h>

void swap(int a[], int f, int r) {
	int temp;
	temp = a[r];
	a[r] = a[f];
	a[f] = temp;
}

int reverseArray(int a[], int front, int rear) {
	if (front >= rear)
		return a;
	else {
		swap(a, front, rear);
		reverseArray(a, front + 1, rear - 1);
	}
}

int main() {
	int i;
	int a[] = { 5,7,1,3,4,9,2,0,8,6 };
	reverseArray(a, 0, 9);
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
}