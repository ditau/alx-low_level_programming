#include <stdio.h>

int add(int a, int b) 
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Not Divisible By zero\n");
		return 0;
	}
	return a / b;
}

int mol(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Not  Divisible by Zero\n");
		return 0;
	}
	return a % b;
}
