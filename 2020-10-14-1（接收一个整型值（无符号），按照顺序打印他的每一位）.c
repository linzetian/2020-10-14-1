//接收一个整型值（无符号），按照顺序打印他的每一位，例如输入：1234，输出1 2 3 4
//用函数递归的方式求（print），对递归过程的了解
#include<stdio.h>
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}
int main()
{
	unsigned int a = 0;
	printf("请输入一个整数（无符号）");
	scanf("%d",&a);
	print(a);
}