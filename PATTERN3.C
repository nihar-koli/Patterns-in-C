//Program to print pattern
//Created by Nihar Anant Koli

#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;

  clrscr();

    printf("\n\n");

    for(i=1;i<=5;i++)
    {
       for(j=5;j>=i;j--)
       {
	  printf(" * ");
       }
       printf("\n");

    }

  getch();
}

