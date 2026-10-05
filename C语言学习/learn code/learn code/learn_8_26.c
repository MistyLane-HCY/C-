#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
//int main()
//{
//	int a;
//	double b;
//	scanf("%d%lf",&a,&b);
//	printf("%d  %lf\n", a, b);
//	return 0;
//}
//变量char 1✔️  short 2   int✔️  long 4  long long 8 float 4 double✔️ 8 long double 8
//变量名称只能是 数字字母下划线而且数字不能放在开头
//常量const int  常量定义之后后续是不能再改变的 再改变会报错
// 宏定义： #define+别称+原来的名字 这个可以给一个东西起个别称 比如 #define A int  后续我输入A就代表int
//也能给一个变量定义一个值 比如#define pai 3.1415 同时也可以这样 double pai=3.1415 平时害怕不小心被改变更推荐在第二种前面加const
//scanf("%d",&变量名字); 把用户输入的内容按指定格式存入变量中 读取变量 前面必须加上& 
//%d是整数 f是浮点数 lf是double浮点 c是单个字符 s是字符串 zu是size_t (这个是用来看数据大小的)
//int main()
//{
//	int a, b;
//	double c;
//	scanf("%d%d%lf", &a, &b, &c);
//	printf("%d 123\n%d 123\n%lf\n", a, b, c);
//	return 0;
//}
// 避免歧义发生常常用%% 来输出一个% \\来输出一个\  \" 来表示在字符串中输出一个“
//int main()
//{
//	printf("123\n345\"\n\\\n");
//	return 0;
//}
//%.4lf 的意思是保留四位小数 可以换成其他数字  
//%5d 的意思是 整数但是占5个字符 右对齐  %-5d 是左对齐  %05d 的意思是 五个字符位置处输入数字的占位其他空位补成0 也可以换
//%8.2lf  占8个字符 保留两位小数 
//int main()
//{
//	int a = 4, b = 3;
//	double c = 9.9;
//	printf("%5d\n%05d\n%8.2lf", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 3, b = 4;
//	int c = a * b;
//	printf("%d\n", c);
//	return 0;
//}
//==相等 !=不等于 >= <=
// 类型转换char->int->longlong->float->double  当一个double和int运算时 int直接被变成double
//int main()
//{
//	printf("Hello,World!");
//	return 0;
//}
//int main()
//{
//	printf("%s%s","Hello,","World!");    "”
//	return 0;
//}
//int main()  计算长方形的周长和面积
//{
//	double h, g;
//	printf("请输入长方形的长和宽（小数）：");
//	scanf("%lf %lf", &h, &g);
//	double ar = h * g;
//	double pr = (h + g) * 2;
//	printf("area=%lf perimeter=%lf", ar, pr);
//	return 0;
//}
//#define pi 3.1415926  计算圆的面积和周长
//int main()
//{
//	double r;
//	printf("请输入圆的半径：");
//	scanf("%lf", &r);
//	double pr = 2 * pi * r;
//	double ar = pi * r * r;
//	printf("area=%.2lf perimeter=%.2lf", ar, pr);
//	return 0;
//}
//int main()  把两个数字交换
//{
//	double a, b;
//	printf("请输入两个数字：");
//	scanf("%lf %lf", &a, &b);
//	printf("交换 %lf %lf", b, a);
//	return 0;
//}
//int main()   将总秒数换成几时几分几秒
//{
//	printf("请输入总秒数：");
//	int a,b,c,d;
//	scanf("%d", &a);
//	b = a / 3600;
//	c =(a % 3600) / 60;
//	d =(a % 3600) % 60;
//	printf("%d:%d:%d", b, c, d);
//	return 0;
//}
//int main()  计算一个三位数百位十位个位数字之和
//{
//	printf("请输入一个三位数：");
//	int a,b,c,d,H;
//	scanf("%d", &a);
//	b = a / 100;
//	c = (a % 100) / 10;
//	d = (a % 100) % 10;//也可以直接写成 d=a%10
//	H = b + c + d;
//	printf("%d", H);
//    return 0;
//}
//int main()      三位数反转
//{
//	printf("请输入一个三位数：");
//	int a,b,c,d;
//	scanf("%d", &a);
//	b = a / 100;
//	c = (a % 100) / 10;
//	d = (a % 100) % 10;//也可以直接写成 d=a%10
//	printf("%d%d%d",d,c,b );
//    return 0;
//}
//int main()  计算三个数的平均数  也可以存数为int  直接除以3.0 
//{
//	printf("请输入三个整数：");
//	double a, b, c;
//	scanf("%lf %lf %lf",&a, &b, &c);
//	double average;
//	average = (a + b + c) / 3;
//	printf("%.2lf", average);
//	return 0;
//}
//  'c'一个字符 用单引号括起来 每个字符都有其对应的ASCII值 只用记忆A65在a前面 差值为32
//  强制转化一个变量的类型 在其前面加上（要转变的类型）比如：（double）a
//int main()  关于写出一个字符的ASCII值
//{
//	char aa = 'A';
//	int b = aa;
//	printf("%c %d", aa, b);
//	return 0;
//}
// math.h 这个头文件里面常用的 fabs(a,b)计算浮点型的绝对值  log2(3)  pow(2,5)是二的五次幂 而且是double类型的
//int main()   可以说math.h这个头文件里面的值都是double类型的 记住
//{
//	double A = pow(2, 3);
//	printf("%lf", A);
//	return 0;
//}
//int main()
//{
//	printf("%lf", pow(2, 3));
//	return 0;
//}
//int main() 字母大小写转化  也可以直接small=big+32 单个字符存在电脑里的就是数字 所以可以直接这样更标准
//{
//	printf("请输入一个大写英文字母：");
//	char big,small;
//	scanf("%c",&big);
//	int one = big;
//	int two = one + 32;
//	small = two;
//	printf("%c", small);
//	return 0;
//}
//int main()     不用取绝对值 负数平方后也是正数
//{
//	printf("请输入四个数字表示两个坐标：");
//	double x1, x2, x3, x4,a,b,dis;
//	scanf("%lf %lf %lf %lf",&x1,&x2,&x3,&x4);
//	a = fabs(x1 - x3);
//	b = fabs(x2 - x4);
//	dis = sqrt(pow(a, 2) + pow(b, 2));
//	printf("%.2lf", dis);
//	return 0;
//}
//浮点型在计算时会出现精度损失 在计算机数轴上 浮点型是不连续的 double或者float都是有范围的  超出这个精度范围就会精度损失
//比如0.1+0.2并不等于0.3  0.1和0.2在计算机二进制中都是无限循环的小数 得到的结果在double里不能精确 只能等于其附近的数字
//越靠近0约密集 越远离0越松散 所以一般输出的时候都会在前面写上保留多少位小数 这样比较好
//unsigned只能对整数使用 浮点型天生带正负号没法去掉对其不能用
//int main()
//{
//	printf("请输入一个非负实数：");
//	double a;
//	scanf("%lf",&a);
//	printf("%.2lf %.2lf", pow(a,2), sqrt(a));
//	return 0;
//}
