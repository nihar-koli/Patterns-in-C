#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;

  clrscr();

    printf("\n\n");

    for(i=1;i<=5;i++)
    {
      if(i%2 == 0)
      {
	for(j=5;j>=i;j--)
	 {
	   printf(" %d ",j);
	 }
      }
      if(i%2 == 1)
      {
	 for(j=5;j>=i;j--)
	  {
	    printf(" %d ",j);
	  }

      }
       printf("\n");

    }

  getch();
}

