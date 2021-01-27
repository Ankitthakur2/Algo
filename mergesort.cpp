#include<bits/stdc++.h>
using namespace std;
 void merge(int arr[],int start,int end)
{
int arr2[10];
int mid=(end+start)/2;
int i=start;
int j=mid+1;
int k=start;

while(i<=mid && j<=end)
{
    if(arr[i]<arr[j])
    {
        arr2[k++]=arr[i++];
    }
    else
    {
        arr2[k++]=arr[j++];
    }
}

while(i<=mid)
{
    arr2[k++]=arr[i++];
}
while(j<=end)
{
    arr2[k++]=arr[j++];
}

for(int i=start;i<=end;i++)
{
    arr[i]=arr2[i];
}
}

void mergesort(int arr[],int start,int end)
{

if(start>=end)
return;
int mid=(start+end)/2;
mergesort(arr,start,mid);
mergesort(arr,mid+1,end);
merge(arr,start,end);


}


int main()
{
  int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    mergesort(arr,0,n-1);

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

    return 0;
}
