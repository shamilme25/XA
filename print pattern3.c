#include<stdio.h>
void main()
{
	int r,x=1,k,i,j;
    printf("Enter number of rows");
    scanf("%d",&r);
    for(i=0; i<r; i++)
    {
    for(k=1;k<=r-i;k++)
	{
    printf(" ");
	}
	for(j=0;j<=i;j++)
     {
     	printf(" * ");
	}
	printf("\n");
	i+=1;
}
}

