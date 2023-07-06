#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	
	fp=fopen("om.text","w");
	
	if (fp==NULL)
	{
		printf("not created" );
		
	}
	else
	{
		printf("found");
	}
}
