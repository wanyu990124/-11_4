//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//2.ʹ�ú���ʵ���������Ľ�����
//3.ʵ��һ�������ж�year�ǲ������ꡣ
//4.����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//5.ʵ��һ���������ж�һ�����ǲ���������

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j, n;
	printf("��������Ҫ��ӡ��n*n�ھ���\n");
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
	printf("������a,b��ֵ:");
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
	printf("���������:");
	scanf("%d", &year);
	i=leap_year(year);
	if (i==1) {
		printf("%d��������\n", year);
	}
	else {
		printf("%d�겻������\n", year);
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
	printf("���������г�ʼ����\n");
	init(a, n);
	printf("\n");
	printf("��������������\n");
	reverse(a, n);
	printf("\n");
	printf("��������飺\n");
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
	printf("������һ������");
	scanf("%d", &i);
	if (judge_sushu(i)) {
		printf("%d������ ", i);
	}
	else {
		printf("%d��������", i);
	}
	system("pause");
	return 0;
}
