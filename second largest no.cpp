#include<stdio.h>
main()
{
	int arr[50],i,size;
	int first,second;
	printf("\n please enter the number of elements in an array:");
	scanf("%d",&size);
	printf("\n please enter %d elements of an array \n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",& arr[i]);	
	}
	
	for (i=0;i<size;i++)
	{
		if(arr[i]>first)
		{
			second=first;
			first=arr[i];
			
		}
		else if (arr[i]> second && arr[i]<first)
		{
			second=arr[i];
			
		}
	}
	printf("\n the largest number in the array= %d",first);
	printf("\n the second largest number in this array =%d",second);
 return 0;
}

