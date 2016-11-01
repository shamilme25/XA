#include<stdio.h>
void main()
{
	int i,j,r,k;
	printf("Enter the number of rows \n");
	scanf("%d",&r);

	for(i=0;i<=r;i++)
	{
		for(j=0;j<=i;j++)
		{
		 for(k=0;k<i+1;k++)
		 {
          printf(" ");
          k++;
		 } 
		printf("*");			
		}  
		printf("\n");
		i=i+1;
	}
}
