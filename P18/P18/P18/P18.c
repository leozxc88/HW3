#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char st1[60] = "Welcome";
	char st2[60];
	
	int len;

	strcpy_s(st2,60,st1);
	printf("string2=%s\n", st2);

	len = strlen(st2);
	printf("¦r¦êªø«×¬°%d\n", len);

	system("pause");
	return 0;
}