#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int a[100],i,j,n,pos;	
 cout<<"enter the size of array "<<endl;
 cin>>n;
 cout<<"enter the array "<<endl;
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<n-1;i++)
 {
   pos=i;
   for(j=i+1;j<n;j++)
   {
   	if(a[pos]>a[j])
   pos=j;	
   }
   if(pos!=i)
   {
   	int t;
   	t=a[i];
   	a[i]=a[pos];
   	a[pos]=t;
   }
 }
 cout<<"after sorted ..."<<endl;
 for(i=0;i<n;i++)
  { 
  cout<<a[i]<<" ";
  }
 getch();
 return 0;
 
}

