#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//找最大重组数
//int main()
//{
//	int A,a,b;
//	int c, B;
//	scanf("%d", &A);
//	a = A / 100;
//	b = (A - a * 100) / 10;
//	c = A % 10;
//	if (a < b)
//	{
//		int C1 = a;
//		a=b,b=C1;
//	}
//	if (a < c)
//	{
//		int C1 = a;
//		a=c, c = C1;
//	}
//	if (b < c)
//	{
//		int C1 = b;
//		b = c, c = C1;
//	}
//	B = a * 100 + b * 10 + c;
//	printf("%d", B);
//	return 0;
//}
//for循环
/*
for(初始化；循环条件；更新)
{
	循环体；
}
*/
//int main()
//{
//	for (int i = 0;i <= 3;i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
/*
while(循环条件)
{
	循环体；
}
*/
//int main()
//{
//	int a = 5;
//	while (a > 0)
//	{
//		printf("%d\n", a);
//		a -= 1;
//	}
//	return 0;
//}
//dowhile
/*
do
{
	循环体
}while(循环条件);
*/
int main()
{
	int a = -1;
	do
	{
		printf("%d\n", a);
		a--;
	}while(a > 0);
}