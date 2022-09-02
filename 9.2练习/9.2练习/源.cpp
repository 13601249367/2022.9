#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//for循环的变种1：省略  => 死循环
	for (;;)
	{
		printf("你好\n");
	}


	//for循环的变种2：for里带个for
	int a = 0;
	int b = 0;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			printf("我好\n");
		}
	}

	//for循环的变种3：省略初始部分
	int c = 0;
	int d = 0;
	for (; c < 10; c++)
	{
		for (; d < 10; d++)
		{
			printf("他好\n");
		}
	}

	//for循环的变种3：使用多余一个变量控制循环
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("她好");
	}
	return 0;
}