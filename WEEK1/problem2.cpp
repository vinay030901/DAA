#include<bits/stdc++.h>
using namespace std;
void binarySearch(int arr[],int l,int r,int k)
{
    int mid,i=1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]==k)
            {cout<<"present "<<i<<"\n";
            return;}
        if(arr[mid]<k)
            l=mid+1;
        else
            r=mid-1;
        i++;
    }
    cout<<"Not present "<<r+1<<"\n";
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        binarySearch(arr,0,n,k);
    }
}