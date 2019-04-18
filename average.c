#include<stdio.h>
float get_average(int marks[], int n);

int main()
{
	int marks[10];
	int n, sum = 0;
	float average;
	printf("Entere the value of n:");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("Enter number %d: ", i+1);
		scanf("%d", &marks[i]);
	}

	printf("Average is - %f\n", get_average(marks, n));

	return 0;
}

float get_average(int marks[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += marks[i];
	}
	return  sum/(float)n;
}
