//Created by Nihar Anant Koli
//Program to print patterns in c

#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;

  clrscr();

    printf("\n\n");

    for(i=5;i>=1;i--)
    {
       for(j=1;j<=i;j++)
       {
	  printf(" %d ",j);
       }
       printf("\n");

    }

  getch();
}

