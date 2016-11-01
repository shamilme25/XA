#include<stdio.h>
void main()
{
	int i,j=1,r,k;
	printf("Enter the number of rows");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(k=1;k<=r-i;k++)
		 {
          printf(" ");
          k++; 
		 } 	 
	printf("%d \n",j);
	j*=11;	
	}
	}
