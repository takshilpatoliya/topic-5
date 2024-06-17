#include<stdio.h>

main()
{
	float a ,b ;
	
	printf("enter your value A =");
	scanf("%f",&a);
	
	printf("ente ryour value B =");
	scanf("%f",&b);
	
	if(a<b)
	{
		printf("%.2f is minimum",a);
	}
	else
	{
		printf("%.2f is minimum",b);
	}
}