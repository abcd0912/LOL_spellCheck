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
	printf("스펠체크 타이머 v.0.2\n시작하려면 엔터");
	a = getch();
	a = 1;
	// 점멸 점화 회복 방어막 유체화 정화 탈진 텔포
	while (1) {
		system("cls");
		gotoxy(1, 1);
		printf("점멸 점화 회복 방어막 유체화 정화 탈진 텔레포트");
		gotoxy(1, 3);
		printf("왼쪽이동:a, 오른쪽이동:d, 시작:s \n(텔레포트는 레벨에 비례해 쿨타임이 줄어드므로 다음 패치에서 수정)");
		if (a == 1) {
			gotoxy(1, 2);
			printf("ㅅ");
		}
		else if (a == 2) {
			gotoxy(6, 2);
			printf("ㅅ");
		}
		else if (a == 3) {
			gotoxy(11, 2);
			printf("ㅅ");
		}
		else if (a == 4) {
			gotoxy(16, 2);
			printf("ㅅ");
		}
		else if (a == 5) {
			gotoxy(23, 2);
			printf("ㅅ");
		}
		else if (a == 6) {
			gotoxy(30, 2);
			printf("ㅅ");
		}
		else if (a == 7) {
			gotoxy(35, 2);
			printf("ㅅ");
		}
		else if (a == 8) {
			gotoxy(40, 2);
			printf("ㅅ");
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