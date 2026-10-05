#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2)
//	{
//		printf("123");
//	}
//	
//	else
//	{ 
//		printf("奇数");
//	}
//	return 0;
//}
//两数比较大小
//int main()
//{
//	int a, b;
//	scanf("%d %d", & a, & b);
//	if (a > b)
//	{
//		printf("%d", a);
//	}
//	else if(a<b)
//	{
//		printf("%d", b);
//	}
//	else
//	{
//		printf("相等");
//	}
//	return 0;
//}或者可以选择嵌套使用 如下
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a == b)
//	{
//		printf("相等");
//	}
//	else
//	{
//		if (a > b)
//		{
//			printf("%d", a);
//		}
//		else//注意 else后面不跟小括号条件  只有if和else后面才有
//		{
//			printf("%d", b);
//		}
//	}
//	return 0;
//}   当一个if或者else if 或者else 只执行一个printf时 可以把大括号省略 在嵌套里面也可以省略
//  下半部分嵌套内容可以直接写成下面形式
//   if(a>b) printf("%d",a);
//   else  printf("%d",b);
//三数最大值
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a >= b && a >= c)
//	{
//		printf("%d", a);
//	}
//	else if (b >= a && b >= c)
//	{
//		printf("%d", b);
//	}
//	else
//	{
//		printf("%d", c);
//	}
//	return 0;
//}
//常规方法 我的一般
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			printf("%d", a);
//		}
//		else
//		{
//			printf("%d", c);
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			printf("%d", b);
//		}
//		else
//		{
//			printf("%d", c);
//		}
//	}
//	return 0;
//}
//int main()  交换数值的方法
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int c1 = a;
//		a = b, b = c1;
//	}
//	if(a<c)
//	{
//		int c1 = a;
//		a = c, c = c1;
//	}
//	printf("%d", a);
//	return 0;
//}
//找三个数的中间数
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int c1 = a;
//		a = b, b = c1;
//	}
//	if (b < c)
//	{
//		int c1 = b;
//		b = c, c = c1;
//	}
//	printf("%d", b);
//	return 0;
//}
//求绝对值
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 0)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		a = -a;//只有负号可以直接这么写在变量前面 a*=-1 a=a*-1
//		printf("%d", a);
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 3:
//	case 4:
//		printf("34");
//		break;
//	case 7:
//		printf("7");
//		break;
//	default:
//		printf("no347");
//	}
//	return 0;
//}
//解一元二次方程 根的判别式
//int main()
//{
//	double a, b, c;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	double D = b *b- 4*a*c;
//	if (D > 0)
//	{
//		printf("有两个不同根");
//	}
//	else if(D = 0)// fabs(D-0)<=0.00000000001  小数算出来的等于会不准确 要判断一下
//	{
//		printf("有两个相同根");
//	}
//	else
//	{
//		printf("无实根");
//	}
//	return 0;
//}