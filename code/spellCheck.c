#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
	int a;
	int end;
	int time = 0;
	int min = 5;
	int sec = 0;
	printf("����üũ Ÿ�̸� v.0.1\n�����Ϸ��� ����");
	a = getch();
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
		if (end - start == 300000) {
			break;
		}
	}
			
	


}
