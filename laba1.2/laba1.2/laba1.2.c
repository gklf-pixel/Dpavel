#include <stdio.h>
int main ()
{
	float a, b, c, d;
	printf("enter the value of a = ");
	scanf_s("%f", &a);
	printf("enter the value of b = ");
	scanf_s("%f", &b);
	printf("enter the value of c = ");
	scanf_s("%f", &c);
	if (a >= b && a >= c) {
		d = a;
		printf("d = %f ", d);
		return 0;
	}
	if (b >= a && b >= c) {
		d = b;
		printf("d = %f", d);
		return 0;
	}
	if (c >= a && c >= b) {
		d = c;
		printf("d = %f", d);
		return 0;
	}
	return 0;
}