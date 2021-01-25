#include<stdio.h>

void sort(int a[], int n)
{
	int i;
	int temp;
	int j;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
		 a[j+1]=a[j];
		 j--;
		}
		a[j+1]=temp;
	}
}
void main()
{   int i;
    int n=5;
    int a[n];
    printf("Enter the array of %d length",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("array elements are");
	for (i=0;i<n;i++);
	{
		printf("%d",a[i]);
	}
    

}
