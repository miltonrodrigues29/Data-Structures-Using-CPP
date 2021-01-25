#include <stdio.h>
#include <stdlib.h>

struct node
{
	int num;
	struct node *next;
} *start;

void createlist(int n);
void display();

int main()
{
	int n;
	printf("enter the number of nodes");
	scanf("%d",&n);
	createlist(n);
	printf("enter list numbers are");
	display();
	return 0;
	
}
void createlist(int n)
{
	struct node *tmp, *fnNode;
	int num;
	int i;
	start= (struct node *)malloc(sizeof(struct node));
	if(start==NULL)
	{
		printf(" Memory can not be allocated.");
                
	}
	else
	{
		printf("enter the value for node 1");
		scanf("%d",&num);
		start->num=num;
		start->next=NULL;
		
		tmp=start;
		
	}
	for(i=2;i<=n;i++)
	{
		fnNode=(struct node *)malloc(sizeof(struct node));
		if (fnNode==NULL)
		{
			printf("Memory Full");
			break;
		}
		else
		{
			printf("enter the value for node %d",i);
			scanf("%d",&num);
			fnNode->num=num;
			fnNode->next=NULL;
			
			tmp->next=fnNode;
			tmp=tmp->next;
			
			
		}
		
	}

	}
	void display()
	{
		struct node *tmp;
		if(start==NULL)
		{
		  printf("List is Empty");	
		}
		else
		{   
			tmp=start;
			while(tmp!=NULL)
			{
			printf("Data= %d\n",tmp->num);
			tmp=tmp->next;
			}
		
		}
	}