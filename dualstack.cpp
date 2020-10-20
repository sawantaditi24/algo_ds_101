#include<bits/stdc++.h>
using namespace std;
class stack2
{
	int *arr;
	int top1,top2,size;
	public:
		stack2(int n)
		{
			cout<<"Size of the array:";
			cin>>n;
			size=n;
			top1=-1;
			top2=size;
			arr=new int[n];
		}
		
		void push1(int x)
		{
			if(top1<top2-1)
			{
				top1++;
				arr[top1]=x;
			}
			else
			{
				cout<<"Stack overflow";
				exit(1);
			}
		}
		
		void push2(int x)
		{
			if(top1<top2-1)
			{
				top2--;
				arr[top2]=x;
			}
			
			else
			{
				cout<<"Stack overflow";
				exit(1);
			}
		}
		
		int pop1()
		{
			if(top1>=0)
			{
				int x=arr[top1];
				top1--;
				return x;
			}
			else
			{
				cout<<"Stack underflow";
				exit(1);
			}
		}
		
		
		int pop2()
		{
			if(top2<size)
			{
				int x=arr[top2];
				top2--;
				return x;
			}
			else
			{
				cout<<"Stack underflow";
				exit(1);
			}
		}
		
};

int main()
{
	int i,n,x;
	
	stack2 s(5);
	cout<<"Enter the elements of the stack:";
	for(int i=0;i<n;i++)
	{
		s.push1(x);
		s.push2(x);
	}
//	s.push1(10);
//	s.push1(20);
//	s.push2(30);
//	s.push2(40);
//	s.push2(50);
	
	
	cout<<"Popped element form stack1 is:"<<s.pop1();
	s.push2(60);
	cout<<"Popped element from stack2 is:"<<s.pop2();
	
	return 0;
	
	
}
