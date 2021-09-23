#include<iostream>
using namespace std;
int main()
{
int a[5],i,n,index;
cout<<"Enter 5 numbers :";
for(i=0;i<5;i++)
cin>>a[i];
cout<<"\nEnter a Number to search :";
cin>>n;
for(i=0;i<5;i++)
{
if(a[i]==n)
{
index = i;
break;
}
}
 cout<<"\nFound at index no."<<index;
 cout<<endl;
 return 0;

}
