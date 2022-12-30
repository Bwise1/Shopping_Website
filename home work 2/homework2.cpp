#include <iostream>
#include <cstdlib>
   using namespace std;

 struct node *header;
struct node{int data;struct node *next;
};


int is_empty( struct node * header);
struct node * newnode(int d);

struct node * insertFront(struct node *header, int d);
struct node * insertBack(struct node *header, int d);
void insertAfter(struct node *afterNode, int d);

struct node * deleteFront(struct node *header);
struct node * deleteBack(struct node *header);
void deleteAfter(struct node *afterNode);

void DisplayList(struct node *);
//my function
int countlist (struct node *header);
struct node *array2list (struct node *header,int a[],int arraysize);
struct node *insertn(struct node *header,int n,int x);
int multlist (struct node *header);
void updatenth (struct node * header, int n);

int main(void)
{
    struct node *header=NULL;
    int option,x;
    int i;
    int a[6]={2,4,7,8,6,3};
    for(i=0;i<=6;i++){
            
            header=insertFront(header,a[i]);
            }
   //int option,x;
   
     cout<<"\n****** MENU ******\n";
      cout<<"1. Count"<<endl;
      cout<<"2 quite"<<endl;
     
      while(option!=2){
     cout<<"Enter your choice: ";
      cin>>x;
      
      if(option==1)
      {
           cout<<countlist(header);
           cout<<"fuck";
           break;
            //DisplayList(header);
        }
         else if(option == 2){
                        cout<<"out"<<endl;
                        }
                        
                        }
      system ("PAUSE");
      return 0;
}



int countlist(struct node*header)
{
	int cnt=0;
	struct node*headertemp;
	headertemp=header;
	while(headertemp!=NULL)
	{
		cnt++;
		headertemp=headertemp->next;
	}
	return cnt;
}

struct node *array2list(struct node *header,int a[],int size)
{
       int i;
       struct node *headertemp;
       headertemp=header;
       for(i=0;i<size;i++)
       {
               headertemp->data=a[i];
               headertemp=headertemp->next;
       }
}

struct node*insertn(struct node*header; int n; int x;)
{
	int i;
	struct node*headertemp;
	headertemp=header;
	for(int i=0; i<n-2; i++)
	
		headertemp=headertemp->next;
		insert(headertemp;x);
		return header;

}

int multlist(struct node*header)
{
	int m=1;
	struct node*headertemp;
	headertemp=header;
	while(headertemp!=NULL)
	{
		m*=headertemp->data;
		headertemp=headertemp->next;
	}
	return m;
}

int multlist(struct node*header)
{
	if(header==NULL)
	return 1;
	else
	return header->data*multlist(header->next);
}

void updatenth (struct node * header, int n)
{
	struct node*headertemp;
	int i;
	if(header==NULL)
	return -1;
	headertemp=header;
	for(i=0;i<n-1;i++)
	{
		if(headertemp==NULL)
		return -1;
		headertemp=headertemp->next;
	}
	retun headertemp->data*5;
}

struct node * newnode(int d)
{
	struct node *temp;
	temp=(struct node *) malloc(sizeof(struct node));
	temp->data =d;
	temp->next=NULL;
return temp;
}


struct node * insertFront(struct node *header, int d)
{
	struct node *temp;
	temp=newnode(d);
	temp->next =header;
header=temp;
return header;
}


struct node * insertBack(struct node *header, int d)
{
	struct node *temp, *headertemp;
	temp=newnode(d);
if(header==NULL)
{
header=temp;
return header;
		}
		headertemp=header;
		while(headertemp->next!=NULL)
headertemp =headertemp->next;
headertemp->next=temp;
		return header;
}


void insertAfter(struct node *afterNode, int d)
{
	struct node *temp;
	temp=newnode(d);
		temp->next=afterNode->next;
		afterNode->next=temp;
}


struct node * deleteFront(struct node *header)
{
	struct node *temp;
if(header==NULL)
	return header;
temp=header;
	header= header->next;
free(temp);
return header;
}

struct node * deleteBack(struct node *header)
{
	struct node *temp, *headertemp;
if(header==NULL)
return header;
		headertemp=header;
		while(headertemp->next->next!=NULL)
headertemp =headertemp->next;
		temp=headertemp->next;
headertemp->next=NULL;
free(temp);
		return header;
}


void deleteAfter(struct node *afterNode)
{
	struct node *temp;
	if(afterNode->next==NULL || afterNode==NULL)
		return;
		temp =afterNode->next;
		afterNode->next=temp->next;
		free(temp);
}
   


   
