#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//forѭ����while���Ĺ���
	//while������ϰ
	int a = 1;
	while (a <= 10)
	{
		printf("%d\n", a);
		a++;
	}
	//for������ϰ
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}

	//break��continue��forѭ���е�����
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