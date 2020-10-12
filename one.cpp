#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin>>p;
    while(p--)
    {
    int n;
    cin>>n;
    int arr[n];
    int lmax[n],rmax[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    lmax[0]=arr[0];
    int storage=0;
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],arr[i]);
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        storage=storage+(min(lmax[i],rmax[i])-arr[i]);
    }

    cout<<storage<<endl;

}
}
