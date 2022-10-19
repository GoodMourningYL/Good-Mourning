#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c,sum;
	
	float ave = 0;

	a = 0;b = 0;c = 0;
	sum = a + b + c;
	ave = sum / 3.0;

	scanf("%d%d%d", &a, &b, &c);

	printf("%.2f\n", ave);
    


	return 0;

}