#pragma warning(disable:4996)

#include <stdio.h>

int main()
{
	int arr[5][5] = { 0 };
	int x = 0, y = 0, isRun = 1, arrSize = 5, N = 0;//�迭 x,y�� ��Ʈ���� ������ while���� ������ �� ���� ���� isRun�� flag�� ����
	int flag = 0;
	while (isRun)
	{
		N++;//���� �˻���� �׻� �����ؾ��ϴ���
		arr[y][x] = N;
		switch (flag)
		{
		case 0:

			if (x >= (arrSize-1) || arr[y][x + 1] != 0)//�켱 �迭�� ũ��ȿ��� �˻��ؾ��ϱ⿡ size���� �˻� �� ������ ���� �迭 ����� 0�� �ƴ��� �˻�
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
		//end ����
		//������ �����̴� ��� ���� ä������ ����
		//���� �����Ҵ����ε� ó�������ҵ�
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