#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	const double a = 1.0;
	double x, y;
	double ver, niz, F;

	printf("Введите значение x:\n");
	scanf("%lf", &x);
	printf("Введите значение y:\n");
	scanf("%lf", &y);

	ver = 3 + exp(y - 1.0);
	niz = 1 + x * x * fabs(y - tan(a));
	F = ver / niz;

	printf("F(%.6g, %.6g)=%.6f", x, y, F);

	return 0;
}