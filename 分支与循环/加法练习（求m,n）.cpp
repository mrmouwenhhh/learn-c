#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
		printf("m = %d\, n = %d\n", m, n);
	case 3:
		switch (n)
		{
		case 1:
			n++;
			printf("m = %d\, n = %d\n", m, n);
		case 2:
			m++; n++;
			break;
		}
		printf("m = %d\, n = %d\n", m, n);
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d\, n = %d\n",m,n);
	return 0;
}