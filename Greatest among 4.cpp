#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	printf("Enter all the numbers:-");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("A is Greatest among all");
	}
	else if(b>c && b>d)
	{
		printf("B is greatest among all");
	}
	else if(c>d)
	{
			printf("C is greatest among all");
	}
	else {
				printf("D is greatest among all");
			}
	getch();
}

