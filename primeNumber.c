#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {

	int n, count, c;
	int i = 3;

	printf("Enter the number of prime numbers required\n");
	scanf("%d", &n);
	
	if(n >= 1){
		printf("First %d prime numbers are : \n", n);
		printf("2\n");
	}
	for (count = 2; count <= n;) {
		for (c = 2; c <= i - 1; c++) {
			if (i%c == 0)
			break;
		}
		if (c == i)
		{
			printf("%d\n", i);
			count++;
		}
		i++;
	}
	system("pause");
	return 0;
}