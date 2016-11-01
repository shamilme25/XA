#include <stdio.h>
void main()
{
    int rows,x=1,k,i,j;
    printf("Enter number of rows");
    scanf("%d",&rows);
    for(i=0; i<rows; i++)
    {
    for(k=1;k<=rows-i;k++)
    printf("  ");
     for(j=0;j<=i;j++)
     {
      if (j==0||i==0){
      1;  
  }
      else
      x=x*(i-j+1)/j;
      printf("%4d",x);
      }
        printf("\n");
    }
}

