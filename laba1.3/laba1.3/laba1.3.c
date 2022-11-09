#include<stdio.h>
int main()
{
	float x1=0, y1=0, x2=0, y2=0, x3=0, y3=0, l1, l2, l3;
	printf("enter the value for A, \nx1 =  ");
	scanf_s("%f", &x1);
	printf("y1 = ");
	scanf_s("%f", &y1);
	printf("enter the value for B, \nx2 =  ");
	scanf_s("%f", &x2);
	printf("y2 = ");
	scanf_s("%f", &y2);
	printf("enter the value for C, \nx3 =  ");
	scanf_s("%f", &x3);
	printf("y3 = ");
	scanf_s("%f", &y3);
	l1 = x1 * x1 + y1 * y1;
	l2 = x2 * x2 + y2 * y2;
	l3 = x3 * x3 + y3 * y3;
	if (l1 <= l2 && l1 <= l3) {
		printf("the closest is A\n");
		
	}
	if (l2 <= l1 && l2 <= l3) {
		printf("the closest is B\n");
		
	}
	if (l3 <= l1 && l3 <= l2) {
		printf("the closest is C\n");
		
	}
	return 0;
}