//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//2.使用函数实现两个数的交换。
//3.实现一个函数判断year是不是润年。
//4.创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//5.实现一个函数，判断一个数是不是素数。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j, n;
	printf("请输入需要打印的n*n口诀表\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void swap(int* x,int* y) {
	int temp = *x;;
	*x = *y;
	*y = temp;
}
int main() {
	int a = 0;
	int b = 0;
	printf("请输入a,b的值:");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("a=%d b=%d\n", a,b);
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int leap_year(int year) {
	if ((year % 4 == 0 && year / 100 != 0) || (year % 400 == 0)) {
		return 1;
	} 
	else {
		return 0; 
	}
}
int main() {
	int year;
	int i = 0;
	printf("请输入年份:");
	scanf("%d", &year);
	i=leap_year(year);
	if (i==1) {
		printf("%d年是闰年\n", year);
	}
	else {
		printf("%d年不是闰年\n", year);
	}
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void init(int a[], int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		a[i] = i;
		printf("%d ", a[i]);
	}
}
void empty(int a[], int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		a[i] = 0;
		printf("%d ", a[i]);
	}
}
void reverse(int a[], int n) {
	int i = 0;
	int left = 0;
	int right = n - 1;
	for (i = 0; i < n; i++) {
		while (left < right) {
			int tmp = a[left];
			a[left] = a[right];
			a[right] = tmp;
			left++;
			right--;
		}
		printf("%d ", a[i]);
	}
}
int main() {
	int a[5];
	int n = sizeof(a) / sizeof(a[0]);
	printf("请对数组进行初始化：\n");
	init(a, n);
	printf("\n");
	printf("请对数组进行逆序：\n");
	reverse(a, n);
	printf("\n");
	printf("请清空数组：\n");
	empty(a, n);
	printf("\n");
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int judge_sushu(int n) {
	int j = 0;
	for (j = 2; j <= sqrt(n); j++) {
		if (n%j == 0) {
			return 0;
		}
		else {
			return 1;
		}
	}
}
int main()
{
	int i = 0;
	printf("请输入一个数：");
	scanf("%d", &i);
	if (judge_sushu(i)) {
		printf("%d是素数 ", i);
	}
	else {
		printf("%d不是素数", i);
	}
	system("pause");
	return 0;
}
