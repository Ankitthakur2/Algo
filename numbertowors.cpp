#include<bits/stdc++.h>
using namespace std;
char m[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};


void convert(int n)
{
    
    if(n==0)
    return;
    convert(n/10);
    cout<<m[n%10]<<" ";
}


int main()
{
int n;
cin>>n;

convert(n);
    return 0;
}