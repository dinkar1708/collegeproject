#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	printf("Displaying pattern:-\n");
	for(i=1;i<6;i++)
	{
		for(j=6;j>i;j--)
		{
		printf("*");
		}
		printf("\n");
	}
	getch();
}