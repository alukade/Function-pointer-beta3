#include<stdio.h>

int add(int ,int);
int sub(int ,int);
int calc(int (*fp)(int, int), int, int);

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int calc(int(*fp)(int, int), int num1, int num2)//*fp就可以调用上面的add和sub函数
{
	return(*fp)(num1,num2);
}

int main()
{
	printf("3+5=%d\n", calc(add, 3, 5));//add就是对应（*fp）
	printf("3-5=%d\n", calc(sub, 3, 5));

	return 0;
}