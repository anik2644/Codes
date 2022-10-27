#include <iostream>
using namespace std;



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
    else
    {
        return fib(num-1)+fib(num-2);
    }
}




int main()
{

    int i, j, number, count = 0, temp, sum = 0;
    int dp[99999] = {0};
    dp[1] = 1;
    cin >> number;

    for (i = 2; i <= number; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout<<fib(number)<<endl;

    return 0;
}