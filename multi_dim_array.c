#include<stdio.h>
void display_numbers(int num[2][2]);

int main()
{
	int num[2][2], i, j;
	printf("Enter 4 number:\n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			printf("Enter for position num[%d][%d]\n", i, j);
			scanf("%d", &num[i][j]);
		}
	printf("------------------------------\n");
	display_numbers(num);
	return 0;
}

void display_numbers(int num[2][2])
{
	int i, j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t", num[i][j]);
		}
		printf("\n");
	}
}
