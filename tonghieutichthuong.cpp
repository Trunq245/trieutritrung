#include <stdio.h>
main (){

	float a, b, Tong, Hieu, Tich, Thuong;
	printf ("nhap a:");
	scanf ("%f", &a);
	printf ("nhap b:");
	scanf ("%f", &b);
	Tong = (float)a + (float)b;
	Hieu = (float)a - (float)b;
	Tich = (float)a * (float)b;
	Thuong = (float)a / (float)b;
	printf ("a + b = %.2f\n", Tong);
	printf ("a - b = %.2f\n", Hieu);
	printf ("a * b = %.2f\n", Tich);
	printf ("a / b = %.2f\n", Thuong);
	return 0;
	}
	
