#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int k)
{
    int i;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
            return i;
    }
    return i;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,f=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                cout<<"Present "<<i+1<<"\n";
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"not present "<<n<<"\n";
    }
}