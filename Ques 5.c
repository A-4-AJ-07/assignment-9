#include<stdio.h>
int main()
{
	int var;
	printf("Enter the var:");
	scanf("%d",&var);
	
	switch(var)
	{
		case 1:
			printf("good");
			break;
		case 2:
			printf("better");
			break;
		case 3:
			printf("best");
			break;
		default :
			printf("Invalid");
			break;
	}
}