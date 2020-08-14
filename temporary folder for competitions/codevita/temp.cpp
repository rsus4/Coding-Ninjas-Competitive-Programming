#include <algorithm>
#include <iostream>
#include <utility>
#include <string>
#include <iterator>
#include <limits.h>
#include <math.h>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <map>
#include <set>
#include <unordered_set>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl '\n'
#define ll long long int
#define uint unsigned long long int
using namespace std;
int mod=1000000007;
ll fact(ll n)
{
    if (n == 0)
        return 1;
    else
    {
        return (n%mod) * (fact(n - 1)%mod);
    }
}
int main()
{
    fast;
    int n;
    cin >> n;

    ll ans = fact(n-1);
    int temp = n - 1;
    while (temp-1)
    {
        ans = (ans%mod + (ans/temp)%mod)%mod;
        temp--;
    }
    cout<<ans<<endl;
}