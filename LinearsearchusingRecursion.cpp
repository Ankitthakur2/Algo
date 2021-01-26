#include<bits/stdc++.h>
using namespace std;
int count1=0;
int search(int * arr,int n,int key)
{
    if(n==0)
    return -1;
    if(arr[0]==key)
    return count1;
    count1++;
    search(arr+1,n-1,key);
   
}


int main()
{
    cout<<"enter the number of elments \n";
    int n;
    cin>>n;
     cout<<"enter the elements of array \n";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"enter the number you want to find the index \n";
    int key;
    cin>>key;
   
    
    int pos=search(arr,n,key);
    if(pos==-1)
    cout<<"key does not exits \n";
    else
    cout<<"position of key is \n"<<pos;
    return 0;
}