//������������Ϸ

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("*** 1.play  0.exit ***\n");
	printf("**********************\n");
}

//��Ϸ�������㷨ʵ��
void game()
{
	//��Ҫ�������������������߳���������Ϣ
	char board[ROW][COL] = { 0 }; //���ȴ�ӡ��������ȫ�ǿո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
}
//      |   |
//   ---|---|---
//	    |   |
//   ---|---|---
//      |   |
//  ϣ����ӡ������



void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:-->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}