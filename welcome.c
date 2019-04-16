#include<stdio.h>
void test_function();
int get_increment(int x);

int main()
{
	printf("Welcome to C language\n");
	test_function();
	int value = get_increment(99);
	printf("Incremented value is %d\n", value);
}
void test_function()
{
	printf("This is a test function\n");
}

int get_increment(int x)
{
	return x + 1;
}
