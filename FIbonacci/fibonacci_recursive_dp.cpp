#include <iostream>
#include <string.h>
using namespace std;

int dp[10005];
int fib(int num)
{

    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }

    if(dp[num]!=-1) return dp[num];
    else
    {
        dp[num]=fib(num-1)+fib(num-2);
        return dp[num];
    }
}

int dp_fib(int num)
{

    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        dp[num]=fib(num-1)+fib(num-2);
        return dp[num];
    }
}




int main()
{
    int number;

    memset(dp,-1,sizeof(dp));
    
    dp[0]=0;
    dp[1]=1;

     cin>>number;

     cout<<dp_fib(number)<<endl;
     
   for(int i=0;i<=number;i++)
    {
        cout<<dp[i]<<" ";
    }


    return 0;
}