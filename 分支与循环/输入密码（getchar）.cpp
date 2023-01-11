#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int ret = 0;
	int chu = 0;
	int i = 0;

	char password[20] = { 0 };
	printf("请输入密码\n");
	scanf("%d",password);

	getchar();
	while ((chu = getchar()) != '\n')
	{
		;
	}//清除缓冲区内容

	printf("请确认Y/N？\n");
	ret = getchar();

	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("取消确认\n");
	}


	//for (i = 0; i <= 10 ;i++)
	//{
	//	printf("%d\t", i);
	//}//for 循环测试

	return 0;
}