#include<stdio.h>

main()
{
	int choice ;
	
	printf("press 1 for English\n");
	printf("press 2 for Hindi\n");
	printf("press 3 for Gujarati\n\n");
	
	printf("Enter your choice =");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
				printf("press 1 for Internet Recharge\n");
				printf("press 2 for Top-up Recharge\n");
				printf("press 3 for Special Recharge\n\n");
				printf("Enter your choice =");
				scanf("%d",&choice);
			    switch(choice)
			    {
			    	case 1:
							printf("You have successfully done a Internet Recharge.");
							break;
					case 2:
							printf("You have successfully done a Top-up Recharge.");
							break;
					case 3:
							printf("You have successfully done a Special Recharge.");
							break;
				}
				break;
		case 2:
				printf("Internet Recharge ke liya 1 dabaiye \n");
				printf("Top-up Recharge ke liya 2 dabaiye \n");
				printf("Special Recharge ke liya 3 dabaiye \n\n");
				printf("Enter your choice =");
				scanf("%d",&choice);
			    switch(choice)
			    {
			    	case 1:
							printf("aapne safaltapurvak Internet Recharge kar liya he.");
							break;
					case 2:
							printf("aapne safaltapurvak Top-up Recharge kar liya he.");
							break;
					case 3:
							printf("aapne safaltapurvak Special Recharge kar liya he.");
							break;
				}
				break;
		case 3:
				printf("Internet Recharge mate 1 dabavo\n");
				printf("Top-up Recharge mate 2 dabavo\n");
				printf("Special Recharge mate 3 dabavo\n\n");
				printf("Enter your choice =");
				scanf("%d",&choice);
			    switch(choice)
			    {
			    	case 1:
							printf("aapne safaltapurvak Internet Recharge kar liya he.");
							break;
					case 2:
							printf("aapne safaltapurvak Top-up Recharge kar liya he.");
							break;
					case 3:
							printf("aapne safaltapurvak Special Recharge kar liya he.");
							break;
		   		}
		   		break;
		default:
				break;
	}
}