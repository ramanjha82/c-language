#include<stdio.h>
main()
{
	int i,j,r=2,c=2;

	int a[r][c];
	
	float average,sum=0;
	

	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
		
	}
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=a[i][j]+sum;
		}
	}
	average=sum/(r*c);
	printf("%.2f",average);
}

averageof2D.c
Displaying averageof2D.c.
PR.5 Assortment
Arpit Kansara

Jun 19 (Edited Jun 29)
10 points
1. Write C program to find second largest number in array.
2  WAP to get & print 2D array of N elements  
3  WAP to find length of 2D array.
4. WAP to find average of 2D array
5. WAP to get & print 1D array of N elements.

6. WAP to find length of 1D array.
7. WAP to find average of 1D array.
Class comments

