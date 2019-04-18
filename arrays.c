#include<stdio.h>

int main()
{
	int marks[5] = {67, 79, 87, 56, 83};
	for(int i=0;i<5; i++)
	{
		printf("%d\n", marks[i]);
	}
	scanf("%d", &marks[2]);
	printf("---------------------------------------------\n");
	for(int i=0;i<5; i++)
	{
		printf("%d\n", marks[i]);
	}
}
