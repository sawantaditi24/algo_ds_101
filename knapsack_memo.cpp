#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int W,int n)
{
	int static t[1002][102];
	memset(t,-1,sizeof(t));
	if(t[n][W]!=-1)
	{
		return t[n][W];
	}
	if(wt[n-1]<=W)
	{
		 return t[n][W] = max(val[n-1]+knapsack(wt,val,W-val[n-1],n-1),knapsack(wt,val,W,n-1));
	}
	else if(wt[n-1]>W)
	{
		 return t[n][W] = knapsack(wt,val,W,n-1);
	}
}

int main()
{
	cout<<"-------KNAPSACK 1/0 PROGRAM-------";
	int wt[10],val[10],n,W;
	int static t[102][1002];
	memset(t,-1,sizeof(t));
	cout<<"Enter the capacity of the knapsack bag: ";
	cin>>W;
	cout<<"Enter the limit of the number of comodities:";
	cin>>n;
	cout<<"Enter the value of the knapsack bag: ";
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	cout<<"Enter the weight ofthe comodities: ";
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	cout<<"Maximum profit is:"<<knapsack(wt,val,W,n);
	
	return 0;
	
	




}

