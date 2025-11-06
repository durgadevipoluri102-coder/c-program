#include<stdio.h>
int main()
{
	float u,a,d;
	int t;
	printf("Enter The value of acceleration:");
	scanf("%f",&a);
	printf("Enter the value of intial velocity:");
	scanf("%f",&u);
	printf("Enter the value of Time:");
	scanf("%d",&t);
	d=(u*t)+(a*t*t)/2;
	printf("Distance:%2f",d);
	return 0;
}
