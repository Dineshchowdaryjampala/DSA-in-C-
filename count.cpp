#include <bits/stdc++.h>
using namespace std;
int countdigit(long long n)
{
    if(n==0)
    return 1;
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int main(void)
{
    long long n=12345;
    cout<<"number of digits: "<<countdigit(n);
    return 0;
}