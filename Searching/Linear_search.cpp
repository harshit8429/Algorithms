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
    bool present= false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            present=true;
            break;
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
