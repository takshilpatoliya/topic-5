#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter value A =");
	scanf("%d",&a);
	
	printf("enter value B =");
	scanf("%d",&b);
	
	printf("enter value C =");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("A is minimum");
		}
		else
		{
			printf("C is minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is minimum");
		}
		else
		{
			printf("C is minimum");
		}
	}
}
