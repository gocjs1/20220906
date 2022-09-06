#include<stdio.h>

int main() {

	int input = 0;

	scanf_s("%d", &input);

	for (int i = 0; i < input; i++)
	{
		for(int j = input - i; j > 0; j--)
			printf("*");
		for (int k = i; k > 0; k--)
			printf(" ");
		for (int k = i; k > 0; k--)
			printf(" ");
		for (int j = input - i; j > 0; j--)
			printf("*");		

		printf("\n");
	}

	for (int i = 0; i < input; i++)
	{
		for (int j = i + 1; j > 0; j--)
			printf("*");
		for (int k = input - (i+1) ; k > 0; k--)
			printf(" ");
		for (int k = input - (i + 1); k > 0; k--)
			printf(" ");
		for (int j = i + 1; j > 0; j--)
			printf("*");

		printf("\n");
	}
	    
	return 0;
}