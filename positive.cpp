#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	printf("enter the number to check wheather it is positive or negative or zero");
	scanf("%d",&i);
	if(i>0)
	printf("positive number");
	else
	if(i<0)
	printf("negative number");
	else
	printf("zero");
getch();
}
