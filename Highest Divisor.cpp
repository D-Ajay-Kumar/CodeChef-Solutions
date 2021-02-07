// https://www.codechef.com/FEB21C/problems/HDIVISR

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    int num;

    for(int i=10; i>=1; i--)
    {
        if(n%i == 0)
        {
            num = i;
            break;
        }
    }

    cout << num << "\n";
}
