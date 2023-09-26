#pragma warning(disable:4996)

#include <stdio.h>

int main()
{
	int arr[5][5] = { 0 };
	int x = 0, y = 0, isRun = 1, arrSize = 5, N = 0;//배열 x,y축 컨트롤할 변수와 while문의 조건이 될 변수 선언 isRun은 flag의 역할
	int flag = 0;
	while (isRun)
	{
		N++;//조건 검사없이 항상 시행해야하는일
		arr[y][x] = N;
		switch (flag)
		{
		case 0:

			if (x >= (arrSize-1) || arr[y][x + 1] != 0)//우선 배열의 크기안에서 검사해야하기에 size부터 검사 그 다음에 다음 배열 블록이 0이 아닌지 검사
			{
				y++, flag++;
				break;
			}

			x++;
			break;
		case 1:

			if (y >=(arrSize-1) || arr[y + 1][x] != 0)
			{
				flag++, x--;
				break;
			}
		
			y++;
			break;
		case 2:

			if (x <= 0 || arr[y][x - 1] != 0)
			{
				flag++, y--;
				break;
			}

			x--;
			break;
		case 3:

			if (y <= 0 || arr[y - 1][x] != 0)
			{
				flag = 0, x++;
				break;
			}

			y--;
			break;
		default:
			break;
		}
		//end 조건
		//달팽이 조건이니 가운데 값이 채워지면 종료
		//추후 동적할당으로도 처리가능할듯
		if (N == (sizeof(arr)/sizeof(int)))
			isRun = 0;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}