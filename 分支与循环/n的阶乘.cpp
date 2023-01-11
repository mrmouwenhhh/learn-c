#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 10;
	int b = 1;
	int i = 0;
	int num = 0;
	//printf("请输入一个数");
	//scanf("%d", a);

	for (a = 1; a <= 10; a++)
	{
		b = b * a;
		num = num + b;
		printf("第%d次阶乘是%d\n", a, b);// for 计算各阶乘相加。
		printf("第%d次相加是%d\n", a, num);//for计算各阶乘相加。
	}


	//for (i = 1; i < a; i++)
	//{
	//	b = b * i;
	//	num = num + b;
	//	printf("第%d次阶乘是%d\n", i, b);// for 计算各阶乘相加。
	//	printf("第%d次相加是%d\n", i, num);//for计算各阶乘相加。
	//}



	//do
	//{
	//	i++;
	//	b = b * i;
	//	num += b;
	//	printf("第%d次阶乘是%d\n",i, b);
	//} while (i < a);
	//printf("第%d次相加是%d\n", i, num);//do while 计算各阶乘相加。
	


	//while (i < a)
	//{
	//	i++;
	//	b = b * i;
	//	printf("阶乘是%d\n",b);
	//};//while 计算阶乘。



	return 0;
}