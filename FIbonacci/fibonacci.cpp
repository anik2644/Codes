#include<iostream>
using namespace std;
int main()
{
    int i,j,number,count=0,temp,sum=0;
    int dp[99999]={0};
    dp[1]=1;
    cin>>number;
       
    for(i=2;i<=number;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
       // for(int j=0;j<)
    }

   for(i=0;i<=number;i++)
    {
        cout<<dp[i]<<" ";
    }

    return 0;
}