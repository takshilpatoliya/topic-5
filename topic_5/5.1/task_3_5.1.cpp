#include<stdio.h>

main()
{
	int a,b,c;
	float d;
	
	printf("enter maths marks=");
	scanf("%d", &a);
	
	printf("enter english marks=");
	scanf("%d",&b);
	
	printf("enter science marks=");
	scanf("%d",&c);
	
	d=a+b+c;
	
	
	printf("average mark=%.2f",d/3);
	
}
