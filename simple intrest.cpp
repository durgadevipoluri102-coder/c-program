#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("Enter principal amount(p):");
	scanf("%f",&p);
	printf("Enter time in year(t):");
	scanf("%f",&t);
	printf("Enter rate in percent(r):");
	scanf("%f",&r);
	/*calculating simple intrest*/
	si=(p*t*r)/100.0;
	/*calculating compound intrest*/
	ci=p*(pow(1+r/100,t)-1);
	printf("simple intrest=%0.3f\n",si);
	printf("Compound Intrest=%0.3f",ci);
	return 0;
}
