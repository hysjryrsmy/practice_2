//打印1000年到2000年之间的闰年
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() 
//{
//	int year = 0;
//	int count = 0; //判断闰年的个数
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//			printf("%d  ", year);
//			count++;
//		}	
//	}
//	printf("\ncount = %d\n", count);//打印闰年的个数
//	return 0;
//}


//打印100~200之间的素数
/*
int main() {
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否是素数
		//素数判断的规则
		//1.试除法
		//产生2->i-1
		for (j = 2; j < i; ++j) {
			if (i % j == 0) {
				break;
			}
		}
		if (j == i) {
			count++;  //输出素数个数
			printf("%d  ", i);  //输出素数
		}		
	}
	printf("\ncount = %d\n", count);
	return 0;
}
*/
//将上面的代码优化
/*
#include <math.h>
int main() {
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//sqrt - 开平方的数学库函数
		for (j = 2; j <= sqrt(i); ++j) { //2到开平方之间可以整除就不是素数，减少试除次数；也可以采用i/2
			if (i % j == 0) {
				break;
			}
		}
		if (j > sqrt(i)) {
			count++;  //输出素数个数
			printf("%d  ", i);  //输出素数
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}
*/
//继续优化
/*
#include <math.h>
int main() {
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2) //根据偶数肯定不是素数
	{
		//sqrt - 开平方的数学库函数
		for (j = 2; j <= sqrt(i); ++j) { //2到开平方之间可以整除就不是素数，减少试除次数；也可以采用i/2
			if (i % j == 0) {
				break;
			}
		}
		if (j > sqrt(i)) {
			count++;  //输出素数个数
			printf("%d  ", i);  //输出素数
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}
*/
