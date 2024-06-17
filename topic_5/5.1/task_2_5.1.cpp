#include<stdio.h>

main()
{
	float a;
	
	printf("enter a any number =");
	scanf("%f",&a);
	
	if(a<0)
	{
		printf("this number is negative");
 	
	}	
	else if (a==0)
	{
		printf("this number is neutral");
	}
	else
	{
		printf("this number is positive");
	}
}
