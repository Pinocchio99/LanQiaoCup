#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

////奖券数目
//int test4(int n)
//{
//	while (n)
//	{
//		if (n%10==4)
//		{
//			return 1;//1代表有4
//		}
//		n /= 10;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0,count=0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断一个数中是否有4
//		int ret=test4(i);
//		if (!ret)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
////方法二
//int main()
//{
//	int num = 0;
//	for (int i = 10000; i <= 99999; i++)
//	{
//		int x = i;
//		while (x)
//		{
//			if (x % 10 == 4)
//			{
//				num++;
//				break;
//			}
//			x /= 10;
//		}
//	}
//	printf("%d\n", 90000 - num);
//	return 0;
//}

////星系炸弹
//int Is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return 1;//返回1，代笔是闰年
//	else
//	{
//		return 0;
//	}
//}
//int month_day(int year, int month)
//{
//	switch (month)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		return 31;
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		return 30;
//		break;
//	case 2:
//		if (Is_leap_year(year))
//			return 29;
//		else
//			return 28;
//		break;
//	}
//}
//void test(int year, int month, int day, int time)
//{
//	int i = 0;
//	//计算当前年份剩余多少天
//
//	//判断是否是闰年
//	Is_leap_year(year);
//	//判断当月天数
//	month_day(year, month);
//
//	for (i = month; i <= 12; i++)
//	{
//		if (i == month)
//		{
//			if ((time -= month_day(year, month) - day) <= 0)
//				break;
//		}
//		else
//		{
//			if ((time -= month_day(year, i)) <= 0)
//				break;
//		}
//	}
//	//用time减去剩余时间，不够的将年份后推
//	if (time > 0)
//	{
//		while (i)
//		{
//			year++;
//			for (i = 1; i <= 12; i++)
//			{
//
//				if ((time -= month_day(year, i)) <= 0)
//					goto again;
//			}
//		}
//	again:
//		printf("%d-%d-%d", year, i, month_day(year, i) + time);
//	}
//	else
//		if (time == 0)
//			printf("%d-%d-%d", year, 12, 31);
//		else
//			printf("%d-%d-%d", year, i, month_day(year, i) + time);
//	//time和当年时间差为负数，开始推算月份（与月份的差为负数）
//}
//int main()
//{
//	int year = 0, month = 0, day = 0, time = 0;
//	printf("输入放置时间：");
//	scanf("%d-%d-%d", &year, &month, &day);
//	printf("输入定时天数：");
//	scanf("%d", &time);
//	test(year, month, day, time);
//}


////格子中输出
//void StringInGrid(int width, int height, const char* s)//也用到了const放修改
//{
//	int i, k;
//	char buf[1000];
//	strcpy(buf, s);
//	if (strlen(s) > width - 2) 
//		buf[width - 2] = 0;
//
//	printf("+");
//	for (i = 0; i < width - 2; i++) 
//		printf("-");
//	printf("+\n");
//
//	for (k = 1; k < (height - 1) / 2; k++) {
//		printf("|");
//		for (i = 0; i < width - 2; i++) printf(" ");
//		printf("|\n");
//	}
//
//	printf("|");
//
//	printf("%*s%s%*s", (width - strlen(buf) - 2) / 2, "", buf, (width - strlen(buf) - 1) / 2, "");  //填空
//	//亮点在：1.居中的方式 2.空格的输出
//	printf("|\n");
//
//	for (k = (height - 1) / 2 + 1; k < height - 1; k++) {
//		printf("|");
//		for (i = 0; i < width - 2; i++) printf(" ");
//		printf("|\n");
//	}
//
//	printf("+");
//	for (i = 0; i < width - 2; i++) printf("-");
//	printf("+\n");
//}
//
//int main()
//{
//	StringInGrid(20, 6, "abcd123456789123456789");
//	return 0;
//}


////九数组分数
//void test(int x[])
//{
//	int a = x[0] * 1000 + x[1] * 100 + x[2] * 10 + x[3];
//	int b = x[4] * 10000 + x[5] * 1000 + x[6] * 100 + x[7] * 10 + x[8];
//
//	if (a * 3 == b) printf("%d / %d\n", a, b);
//}
//
//void f(int x[], int k)
//{
//	int i, t;
//	if (k >= 9) {
//		test(x);
//		return;
//	}
//
//	for (i = k; i < 9; i++) 
//	{
//		{t = x[k]; x[k] = x[i]; x[i] = t; }
//		f(x, k + 1);
//		{t = x[k]; x[k] = x[i]; x[i] = t; }// 填空处
		//同一语句在中间没有操作语句的情况下，出现两次就相当于没有做任何操作
//	}
//}
//
//int main()
//{
//	int x[] = { 1,2,3,4,5,6,7,8,9 };
//	f(x, 0);
//	return 0;
//}


////加法变乘法
//void test(int a)
//{
//	int i, j, k;
//	for (i = 1; i <= 46; i++)
//	{
//		
//		for (j = i + 2; j <= 48; j++)
//		{
//			int p1 = 0;
//			int p2 = 0;
//			p1 = i * (i + 1) + j * (j + 1);
//			for (k = 1; k <= 49; k++)
//			{
//				if (k != i && k != (i + 1) && k != j && k != (j + 1))
//					p1 +=  k;
//				if ((j==48||k==49)&&p1 == 2015)
//				{
//					printf("%d*%d+%d*%d\n", i,i+1,j,j+1);
//				}
//			}
//		}
//
//	}
//}
//int main()
//{
//	int a = 2015;
//	test(2015);
//	return 0;
//}
//方法二
//int main()
//{
//    for (int i = 1; i < 49; i++)
//        for (int j = i + 1; j < 49; j++)
//        {
//            if (1225 - 2 * i - 1 - 2 * j - 1 + i * (i + 1) + j * (j + 1) == 2015)
//                printf("%d %d\n", i, j);
//        }
//    return 0;
//}



//移动距离
void test(int w,int num, int* cow, int* col)
{
	//确定行数
	if (num % w)
		*cow = num / w + 1;
	else
		*cow = num / w;
	//确定列数
	if (*cow % 2)
		if (*col % w == 0)
			*col = w;
		else
			*col = num % w;
	else
	{
		if (*col % w == 0)
			*col = 1;
		else
			*col = w + 1 - num % w;
	}
		
		
}
int main()
{
	int w, m, n;
	int cow1, col1;
	int cow2, col2;
	int p1, p2;
	scanf("%d%d%d", &w, &m, &n);
	test(w,m, &cow1, &col1);
	test(w, n, &cow2, &col2);
	if (cow1 <= cow2)
		p1 = cow2 - cow1;
	else
		p1 = cow1 - cow2;
	if (col1 <= col2)
		p2 = col2 - col1;
	else
		p2 = col1 - col2;
	printf("%d", p1 + p2);
	return 0;
}