#pragma warning(disable:4996)

#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#pragma warning(disable:4996)

void MyStringCopy(char strMain[], char strSub[], int sizeOfStr);

int main()
{
	char arrM[12] = { "hello" };
	char arrSub[12];

	MyStringCopy(arrM, arrSub, strlen(arrM));

	printf("%s\n%s", arrM, arrSub);

	return 0;
}

void MyStringCopy(char strMain[], char strSub[], int sizeOfStr)
{
	for (int i = 0; i <= sizeOfStr; i++)
		strSub[i] = strMain[i];
}
