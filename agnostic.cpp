#include<iostream>
using namespace std;
int main()
{
	int element,mid,start,end,arr[15],n;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"\nEnter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search: ";
	cin>>element;
	start = 0;
	end = n-1;
	
	if(arr[0]<arr[1])
	{
	
	while(start<=end)
	{
		mid = (start+end)/2;
		if(element==arr[mid])
		{
			cout<<"Element found at location "<<mid+1<<endl;
			break;
		}
		else if(element<arr[mid])
		{
			end = mid-1;
		}
		else
		{
			start = mid+1;
		}
		
	}
		if(start>end)
		{
			cout<<"Entered element is not present in the array...";
		}
	
	}
	
	else if(arr[0]>arr[1])
	{
		while(start<=end)
		{
			mid = (start+end)/2;
			if(element==arr[mid])
			{
				cout<<"Entered element found at location "<<mid+1<<endl;
				break;
			}
			else if(element<arr[mid])
			{
				start = mid+1;
			}
			else
			{
				end = mid-1;
			}
		
		}
		if(start>end)
		{
			cout<<"Entered element is not present in the array...";
		}
	
	}
	
	else 
	{
		cout<<"Only one element present in the array...";
	}
	
	
	
	return 0;
	
	
}
