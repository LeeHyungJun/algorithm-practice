#include <stdio.h>

int count = 0;

void swap(int a[], int f, int r) {
	int temp;
	temp = a[r];
	a[r] = a[f];
	a[f] = temp;
}

int palindrome(char a[], int front, int rear) {

	if (front >= rear)
		return 1;

	if (a[front] == a[rear])
		return palindrome(a, front + 1, rear - 1);
	else
		return 0;
}

int main() {
	int i;
	char a[10];
	//fgets를 하면 배열 마지막에 엔터가 들어간다.
	fgets(a, sizeof(a), stdin);

	//글자 수(count) 세기
	for (i = 0; i < 10; i++) {
		if (a[i] == '\n')
			break;
		count++;
	}
	printf("%d", palindrome(a, 0, count - 1));

}