#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define M_PI 3.14159265358979323846
#define e 2.71828182846
main()
{
	setlocale(LC_CTYPE, "RUS");
	const double t = 0.5;
	double x;
	double y;
	printf("Введите через запятую значения x и y\n");
	scanf("%lf,%lf", &x, &y);
	double a = sin(x);
	double b = 2 * y + 3 * x;
	double lnb = log(b);
	double c = pow(t, e);
	double korx = sqrt(x);
	double sumznam = c + korx;
	double F = (double)(pow(sin(x), 3) + log(2*y+3*x)) / (pow(t,e)+sqrt(x));

	printf("Функция F(%f, %.7lf)=%.8lf", x, y, F);
	return 0;
}