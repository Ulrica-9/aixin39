//#include <stdio.h>
//
//int main()
//
//{
//
//    char ch;
//
//    int i;
//
//    /**********found**********/
//
//    for (i = 1; i <= 10; i++)
//
//    {
//
//        ch = getchar();
//
//        /**********found**********/
//
//        if ((ch >= 'a') && (ch <= 'z'))
//
//        {
//
//            /**********found**********/
//
//            ch = ch - 32;
//
//        }
//
//        putchar(ch);
//
//    }
//
//}
//#include <Stdio.h>
//void main(void)
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-5d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//
///**********found**********/
//
//
//#include<math.h>
//
//int main()
//
//{
//
//	double s = 0;
//
//	int i, m;
//
//	printf("Please input m:");
//
//	scanf_s("%d", &m);
//
//	/**********found**********/
//
//	for (i = 1; i<=m; i++)
//
//	{
//
//		/**********found**********/
//
//		s = s + log((double)i);
//
//	}
//
//	s = sqrt(s);
//
//	printf("%f", s);
//
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	if (a == 1)
//		b = 1;
//	c = 2;
//	else
//		d = 1;
//	printf("%d %d %d %d", a, b, c, d);
//}

//#include <stdio.h>
//int main(void)
//{
//	int x, y, t,z;
//	x = 3;
//	y = 3;
//	z = 3;
//	t = z == x;
//	printf("%d",t);
//}

//#include <stdio.h>
//void sort(int a[], int n)
//{
//	int i, j, t;
//	for (i = 0; i < n - 1; i += 2)
//		for (j = i + 2; j < n; j += 2)
//			if (a[i] < a[j])
//			{
//				t = a[i]; a[i] = a[j]; a[j] = t;
//			}
//}
//void main()
//{
//	int aa[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;
//	sort(aa, 10);
//	for (i = 0; i < 10; i++)
//		printf("%d,", aa[i]);
//	printf("\n");
//}
#include <stdio.h>
void main()
{
	int s = 0, n;
	for (n = 0; n < 4; n++)
	{
		switch (n)
		{
		default: s += 4;
		case 1: s += 1; break;
		case 2: s += 2; break;
		case 3: s += 3;
		}
	}
	printf("%d\n", s);
}