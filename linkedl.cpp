#include<iostream>
using namespace std;

class node{
	int data;
	node *next;
};

class linked:public node{
	public:
	node *first,*last;
	linked()
	{
		first=NULL;
		last=NULL;
	}
	void create();
	void insert();
	void delet();
	void display();
	void search();
};

void linked::create()
{
	node *temp;
	int n;
	temp=NULL;
	cout<<"Enter the element obe stored in link list:";
	cin>>n;
	temp->data=n;
	if(temp==NULL)
	{
		first=temp;
		last=first;
	}
	else
	{
		last->next=temp;
		last=temp;
	}
	
}

void linked::insert()
{
	node *prev,*cur;
	int pos;
	int ch;
	prev=NULL;
	cur=first;
	last=cur;
	node *temp;
	int n;
	temp=NULL;
	cout<<"Enter the element to be stored in link list:";
	cin>>n; 
	temp->data=n;
	cout<<"Where do you wish to insert the element:";
	cout<<"\n1.Satrting 2.Ending 3.In between\n";
	cout<<"Enter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
			temp->next=first;
			first=temp;
			break;
			
			case 2:
				temp->next=last;
				last=temp;
				break;
				
				case 3:
					cout<<"Enter the position you want to enter the element:";
					cin>>pos;
					while(cur!=last)
					{
						prev=cur;
						cur=cur->next;
						count++;
					}
					if(count==pos)
					{
						
					}
			
				
	}
	
	
}

void linked::delet()
{
	node *temp;
	node *prev,*cur;
	int pos;
	int ch;
	prev=NULL;
	cur=first;
	cout<<"Enter the data:";
	cin>>n;
	temp->data=n;
	temp->next=NULL;
	cout<<"Where do you wish to delete the element:";
	cout<<"\n1.Starting 2.Ending 3.In between\n";
	cout<<"Enter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"First element deleted";
			cout<<"Deleted element is:"<<first->data;
			first=first->next;
			break;
			
			case 2:
				while(cur!=last)
				{
					prev=cur;
					cur=cur->next;
					
				}
				if(cur==last)
				{
					cout<<"Element deleted is:"<<cur->data;
					prev->next=NULL;
					last=prev;
				}
				else
				{
					cout<<"Not able to delete";
				}
				break;
				case 3:
					
	}
}
