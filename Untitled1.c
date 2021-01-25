#include<stdio.h>
void sort(int a[],int n)
{
	int i,k,temp;
	for(k=0;k<n-1;k++)
	{
		for(i=0;i<n-2;i++)
		{
			if(a[i]>=a[i+1])
			{
				 temp=a[i+1];
				 a[i+1]=a[i];
				a[i]=temp;
			}
			
		}
	}
}
void main()
{
	int a[5],i;
	int n=5;
	for (i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	
    sort(a,n);
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
