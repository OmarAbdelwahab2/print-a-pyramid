#include<stdio.h>
int n;
void main(void)
{
	printf("enter how many rows you want in the pyramid");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2*n-1; j++)
		{
			if (j >= n - (i-1) && j <= n + (i-1))
			{
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");
	}
}