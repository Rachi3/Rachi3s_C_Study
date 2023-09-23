#pragma warning(disable:4996)

#include<stdio.h>

int main(void)
{
	int sec = 0, min = 0, hour = 0, temp = 0, x;

	scanf("%d", &temp);
	x = temp;

	hour = temp / 3600;
	temp %= 3600;

	min = temp / 60;
	sec = temp % 60;

	printf("%d 초는 %d시간 %d분 %d초 입니다\n",x, hour, min, sec);
	return 0;
}