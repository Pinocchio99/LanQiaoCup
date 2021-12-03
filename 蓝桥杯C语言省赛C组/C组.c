#define _CRT_SECURE_NO_ WARNINGS 1
#include<stdio.h>
#include<math.h>

////隔行变色
//int main()
//{
//	int i = 21,count=0;
//	for (i = 21; i <= 50; i++)
//	{
//		if (i % 2 == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

////立方尾不变
//int Num(int i)
//{
//	int count = 0;
//	while (i)
//	{
//		count++;
//		i /= 10;
//	}
//	return count;
//}
//int main()
//{
//	int j;
//	long long  i = 1,count=0;
//	long long a;
//	for (i = 1; i <= 10000; i++)
//	{
//		long long d = 1;
//		int num = Num(i);//计算i的位数
//		long long a = i * i * i;
//		for (j = num; j > 0; j--)
//		{
//			d *= 10;
//		}
//		if (a % d == i)
//			count++;
//	}
//	printf("%lld",count );
//	return 0;
//}

//int f(char s[], int begin, int end) 
//{
//	int mid;
//	if (end - begin == 1) return s[begin] - '0';
//	mid = (end + begin) / 2;
//	return f(s, begin, mid) + f(s, mid, end); //递归将字符串分离为一个一个的
//}
//int main()
//{
//	char s[] = "368";
//	printf("%d\n", f(s, 0, strlen(s)));
//	return 0;
//}

////
//int flag = 0;
//int arr[] = { 0,2,3,4,5,6,7,8,9 };
//void Swap(int a, int b)
//{
//    int temp = 0;
//    temp = arr[a];
//    arr[a] = arr[b];
//    arr[b] = temp;
//}
//void Quan(int num)
//{
//    if (num == 8) //产生一种全排列
//    {
//        if ((arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3]) + (1000 + arr[4] * 100 + arr[5] * 10 + arr[1]) == 10000 + arr[4] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[6])
//        {
//            int i;
//            for (i = 0; i < 10; i++)
//            {
//                printf("%d ", arr[i]);
//            }
//            printf("\n");
//            //flag = 1;//答案唯一，所以找到就停止
//        }
//        return;
//    }
//    int i = 0;
//    for (i = num; i <= 8; i++)
//    {
//        Swap(i, num);
//        Quan(num + 1);
//       // if (flag == 1)
//       // {
//       //     return;
//       // }
//        Swap(i, num);
//    }
//}
//    int main(void)
//    {
//        Quan(0);
//        return 0;
//    }