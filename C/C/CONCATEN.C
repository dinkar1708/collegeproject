#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	clrscr();
	printf("Concatenate the Strings:-\n");
	puts("Enter the first string:-\n");
	gets(str1);
	puts("Enter the second string:-\n");
	gets(str2);
	strcat(str1,str2);
	puts("String has been concatenated.");
	puts(str1);
	getch();
}