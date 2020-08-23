#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float  a = 0;
	float  b = 0;
	float  c = 0;
	float  d = 0;
	char  e;
	char  r;
	do
	{
		printf("Please key Number1 (+,-,*,/) Number2 : ");
		scanf("%f %c %f", &a, &e, &b);
		switch (e)
		{
		case'+':
			c = a + b;
			break;
		case'-':
			c = a - b;
			break;
		case'*':
			c = a * b;
			break;
		case'/':
			c = a / b;
			break;
		default:
			;
		}
		printf("Answer : \t  %.2f\n", c);
		scanf("%c", &r);
	} while (r != 'q');
}