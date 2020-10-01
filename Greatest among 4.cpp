#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	printf("Enter all the numbers:-");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("A is greater than all");
	}
	else if(b>c && b>d)
	{
		printf("B is greater than all");
	}
	else if(c>d)
	{
			printf("C is greater than all");
	}
	else {
				printf("D is greater than all");
			}
	getch();
}

