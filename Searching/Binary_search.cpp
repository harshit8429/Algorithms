#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    //Binary Search-->O(logN)
    bool present= false;
    int l=0,r=n-1;
    //[0,n-1]
    //[l,r]-->in which search is to be performed
    while(l<=r)
    {
    	//int range->[INT_MIN,INT_MAX]
    	int mid=l+(r-l)/2;//to avoid overflow
    	//if element is true
    	if(a[mid]==x)
    	{
    		present=true;
    		break;
		}
		//a[x]-->[l,l+1,l+2+...+mid-1]
		else if(a[mid]>x)
		{
			r=mid-1;
		}
			//a[x]-->[mid+1,mid+2,mid+3,...r]
		else if(a[mid]<x)
		{
			l=mid+1;
			
		}
	}
    
    if(present)
    {
        cout<<x<<" is present in the array"<<endl;
    }
    else
    {
        cout<<x<<" is not present in the array"<<endl;
        
    }
}
