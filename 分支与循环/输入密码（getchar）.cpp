#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int ret = 0;
	int chu = 0;
	int i = 0;

	char password[20] = { 0 };
	printf("����������\n");
	scanf("%d",password);

	getchar();
	while ((chu = getchar()) != '\n')
	{
		;
	}//�������������

	printf("��ȷ��Y/N��\n");
	ret = getchar();

	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȡ��ȷ��\n");
	}


	//for (i = 0; i <= 10 ;i++)
	//{
	//	printf("%d\t", i);
	//}//for ѭ������

	return 0;
}