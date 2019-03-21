#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, i, sum;
	printf("Perfect numbers are: ");
	//Limitation between 1 and 10000
	for (n = 1; n <= 10000; n++) {
		i = 1;
		sum = 0;
		while (i < n) {
			if (n%i == 0)
				sum = sum + i;
			i++;
		}
		//This fuction does work with 6,28,496,and 8128
		if (sum == n)
			printf("%d ", n);
		//If the fuction don't find, go back to for loop :)
	}
	system("pause");
	return 0;
}