#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		 bool flag=false;
		for(int j=0;j<n-i-1;j++)
		{
			//swaping j and j+1
			//5 1 4 3 2
			// 1 4 3 2 5
			//O(n^2) worst case
			//O(n) best case
			flag=true;
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==false)
		{
			break;
		}
		
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//sort(a,a+n);
		//bubble sort
	///maximum element of current array
	//before sorting
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	bubble_sort(a,n);
	//after sorting

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
