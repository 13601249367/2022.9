#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//forѭ���ı���1��ʡ��  => ��ѭ��
	for (;;)
	{
		printf("���\n");
	}


	//forѭ���ı���2��for�����for
	int a = 0;
	int b = 0;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			printf("�Һ�\n");
		}
	}

	//forѭ���ı���3��ʡ�Գ�ʼ����
	int c = 0;
	int d = 0;
	for (; c < 10; c++)
	{
		for (; d < 10; d++)
		{
			printf("����\n");
		}
	}

	//forѭ���ı���3��ʹ�ö���һ����������ѭ��
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("����");
	}
	return 0;
}