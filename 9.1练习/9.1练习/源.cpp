#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//for循环和while语句的巩固
	//while语句的练习
	int a = 1;
	while (a <= 10)
	{
		printf("%d\n", a);
		a++;
	}
	//for语句的练习
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}

	//break和continue在for循环中的作用
	int b = 0;
	for (b = 1; b <= 10; b++)
	{
		if (b == 5)
			break;
		printf("%d", b);
	}

	int c = 0;
	for (c = 1; c <= 10; c++)
	{
		if (c == 5)
			continue;
		printf("%d", c);
	}


	return 0;
}