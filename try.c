#include<stdio.h>
#include<stdlib.h>
struct node
{
	int num;
	struct node *next;
}*start;

void create();
void insert();
void display();
void deletenode();

int main()
{
	int choice;
	while(1)
	{
		printf("Enter your choice \n ");
		printf("1.Create \n");
		printf("2.Insert \n");
		printf("3.Delete \n");
		printf("4.Display \n");
	    printf("Enter Your choice");
	    scanf("%d",&choice);
		switch(choice)
		{ 
		case 1:
			   create();
			   break;
		case 2:
		  	   insert();
		       break;
		case 3:deletenode();
			   break;
		case 4:
			   display();
			   break;
		default:
			break;
			
		}			
	}
	
	
}
void create()
{ int num;
  int n;
  int i;
  
  struct node *temp,*fnNode;
  printf("Enter the number of nodes");
  scanf("%d",&n);
  start=(struct node *)malloc(sizeof(struct node));
  if(start==NULL)
  {
  	printf("Memory Full");
  	
  }
  else
  {
  	printf("enter the value for node 1 \n");
  	scanf("%d",&num);
  	start->num=num;
  	start->next=NULL;
  	temp=start;
  	
  }
  
  for (i=2;i<=n;i++)
  {
  	 fnNode =(struct node *)malloc(sizeof(struct node));
  	if(fnNode==NULL)
  	{
  		printf("Memory Full");
  		break;
  		
	  }
	  else
	  {
	  	printf("Enter the value for node %d\n",i);
	  	scanf("%d",&num);
	  	fnNode->num=num;
	  	fnNode->next=NULL;
	  	
	  	temp->next=fnNode;
	  	temp=fnNode;
	  }
  }
	
}
void insert()
{
	int num,pos;
	int i;
	struct node *fnNode,*iter,*nextiter;
	fnNode=(struct node *)malloc(sizeof(struct node));
	if(fnNode==NULL)
	{
		printf("MEMORY FULL");
	}
	else
	{
	  printf("enter the value to insert");
	  scanf("%d",&num);
	  printf("enter the position of insertion");
	  scanf("%d",&pos);
	  if(start==NULL)
	  { printf("no linked list");
	  	
	  }
	  else
	  {
	  	iter=start;
	  	for(i=2;i<pos;i++)
	  	{
	  		iter=iter->next;
	  		
		}
		nextiter=iter->next;
		
		fnNode->num=num;
		fnNode->next=nextiter;
		iter->next=fnNode;
	  	printf("Node Inserted \n");
	 }	
	}
	
}
void display()
{
	struct node *temp;
	int data;
	temp=start;
	while(temp!=NULL)
	{
		data=temp->num;
		printf("Data %d \n",data);
		temp=temp->next;
	}
	
}
void deletenode()
{   int node;
    int data;
    struct node *prev ,*temp;
    int i;
	printf("enter the position of node to be deleted");
	scanf("%d",&node);
	prev=start;
	for(i=1;i<node;i++)
	{
	  prev=prev->next;	
	}
	temp=prev->next;
	data=temp->num;
	prev->next=temp->next;
	temp->next=NULL;
	free(temp);
	printf("Deleted Data %d \n",data);
	
	
	
	
	
}
