#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n,int k)
{
    for(int low=0,high=n-1;low<=n/2+1;low++,high--)
    {
        if(arr[low]==k)
            return true;
        if(arr[high]==k)
            return true;
    }
    return false;
}
int main()
{
    int n,k;
    cout<<"enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter the element to search: ";
    cin>>k;
    if(linearSearch(arr,n,k))
        cout<<"element is present in the array";
    else
        cout<<"element is not present in the array";
}