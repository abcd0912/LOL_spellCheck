#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y);

int main() {
	char m = NULL;
	int a;
	int end;
	int time = 0;
	int min = 5;
	int sec = 0;
	printf("����üũ Ÿ�̸� v.0.2\n�����Ϸ��� ����");
	a = getch();
	a = 1;
	// ���� ��ȭ ȸ�� �� ��üȭ ��ȭ Ż�� ����
	while (1) {
		system("cls");
		gotoxy(1, 1);
		printf("���� ��ȭ ȸ�� �� ��üȭ ��ȭ Ż�� �ڷ���Ʈ");
		gotoxy(1, 3);
		printf("�����̵�:a, �������̵�:d, ����:s \n(�ڷ���Ʈ�� ������ ����� ��Ÿ���� �پ��Ƿ� ���� ��ġ���� ����)");
		if (a == 1) {
			gotoxy(1, 2);
			printf("��");
		}
		else if (a == 2) {
			gotoxy(6, 2);
			printf("��");
		}
		else if (a == 3) {
			gotoxy(11, 2);
			printf("��");
		}
		else if (a == 4) {
			gotoxy(16, 2);
			printf("��");
		}
		else if (a == 5) {
			gotoxy(23, 2);
			printf("��");
		}
		else if (a == 6) {
			gotoxy(30, 2);
			printf("��");
		}
		else if (a == 7) {
			gotoxy(35, 2);
			printf("��");
		}
		else if (a == 8) {
			gotoxy(40, 2);
			printf("��");
		}
		m = getch();
		if (m == 'a') {
			if (a != 1) {
				a--;
			}
		}
		else if (m == 'd') {
			if (a != 8) {
				a++;
			}
		}
		else if (m == 's') {
			break;
		}

		
	}
	if (a == 1) {
		//flash
		min = 5;
		sec = 0;
	}
	else if (a == 2) {
		//ignite
		min = 3;
		sec = 0;
	}
	else if (a == 3) {
		//heal
		min = 4;
		sec = 0;
	}
	else if (a == 4) {
		//barrior
		min = 3;
		sec = 0;
	}
	else if (a == 5) {
		//ghost
		min = 3;
		sec = 30;
	}
	else if (a == 6) {
		//cleanse
		min = 3;
		sec = 30;
	}
	else if (a == 7) {
		//exhaust
		min = 3;
		sec = 30;
	}
	int start = clock();
	while (1) {
		time = clock();
		while (1) {
			end = clock();
			if (end - time == 1000) {
				break;
			}
			
		}
		
		if (sec > 0) {
			sec--;
		}
		else {
			min--;
			sec = 59;
		}
		system("cls");
		printf("%d : %d", min, sec);
		if (min == 0 && sec == 0) {
			break;
		}
	}
	system("cls");
	printf("on");
			
	


}
void gotoxy(int x, int y) {
	x--;
	y--;
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}