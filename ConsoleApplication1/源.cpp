#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include<conio.h>
int test(int number)
{
	int counter = 0;
	int answer = 0;
	int result = 0;
	int m = 0;
	int n = 0;
	char op = 0;

	while (number--)
	{
		m = rand() % 10;
		n = rand() % 10;
		op = rand() % 4;

		switch (op)
		{
		case 0:
			op = '+';
			answer = m + n;
			break;
		case 1:
			op = '-';
			answer = m - n;
			break;
		case 2:
			op = '*';
			answer = m*n;
			break;
		case 3:
			++n;
			op = '/';
			answer = m / n;
			break;
		default:
			break;
		}

		printf("��Ŀ��");
		printf("%d %c %d = ", m, op, n);
		while (scanf("%d", &result) != 1)
			fflush(stdin);
		if (answer == result)
			++counter;
	}

	return counter;
}

int main()
{
	int number;
	srand(time(NULL));

	printf("��ʼ����\n");
	printf("��������Ŀ����");
	while (scanf("%d", &number) != 1)
		fflush(stdin);
	printf("����������ܹ����%d����Ŀ\n", test(number));
	return 0;

//	_getch();
}

