#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_CTYPE, "RUS");
	double x;
	double y;
	int r = 6; 
	printf("¬ведите через зап€тую координаты точки (x, y)\n");
	scanf("%lf,%lf", &x, &y);
	if ((pow(x, 2)+pow(y, 2)<=pow(r, 2))&&((x<0)||(y<0)))
		printf("“очка с координатами (%.1lf,%.1lf) принадлежит заданной области", x, y);
	else printf("“очка с координатами (%.1lf,%.1lf) не принадлежит заданной области", x, y);

}

