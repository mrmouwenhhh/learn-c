#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 10;
	int b = 1;
	int i = 0;
	int num = 0;
	//printf("������һ����");
	//scanf("%d", a);

	for (a = 1; a <= 10; a++)
	{
		b = b * a;
		num = num + b;
		printf("��%d�ν׳���%d\n", a, b);// for ������׳���ӡ�
		printf("��%d�������%d\n", a, num);//for������׳���ӡ�
	}


	//for (i = 1; i < a; i++)
	//{
	//	b = b * i;
	//	num = num + b;
	//	printf("��%d�ν׳���%d\n", i, b);// for ������׳���ӡ�
	//	printf("��%d�������%d\n", i, num);//for������׳���ӡ�
	//}



	//do
	//{
	//	i++;
	//	b = b * i;
	//	num += b;
	//	printf("��%d�ν׳���%d\n",i, b);
	//} while (i < a);
	//printf("��%d�������%d\n", i, num);//do while ������׳���ӡ�
	


	//while (i < a)
	//{
	//	i++;
	//	b = b * i;
	//	printf("�׳���%d\n",b);
	//};//while ����׳ˡ�



	return 0;
}