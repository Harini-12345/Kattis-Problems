#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <ctype.h>
#include <queue>
#include <map>
#include <set>

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ll i, j, k;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int total = 1;
    int prevNum = 0;
    ll nums;
    ll num;
    cin >> nums;

    for(i = 0; i < nums; i++)
    {
    	cin >> num;
    	if(prevNum > num)
    	{
    		total += 1;
    	}
    	prevNum = num;

    }
    cout << total << "\n";
    return 0;
}
