#include<stdio.h>
#include<stdlib.h>

int maximun(int x, int y, int z);

int main(void)
{
	int n1, n2, n3;
	printf("enter three integers:");
	scanf_s("%d %d %d", &n1, &n2,&n3);
	printf("maximun is : %d", maximun(n1, n2, n3));
	system("pause");
	return 0;
}

int maximun(int x, int y, int z)
{
	int max = x;
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}