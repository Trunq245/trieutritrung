#include <stdio.h>
main (){
	int a, b, Tong, Hieu, Tich;
	float Thuong;
	printf ("nhap a:");
	scanf ("%d", &a);
	printf ("nhap b:");
	scanf ("%d", &b);
	Tong = a + b;
	Hieu = a - b;
	Tich = a * b;
	Thuong = (float)a/(float)b;
	printf ("a + b = %d\n", Tong);
	printf ("a - b = %d\n", Hieu);
	printf ("a * b = %d\n", Tich);
	printf ("a / b = %.2f\n", Thuong);
	return 0;
	}
	
