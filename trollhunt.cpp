#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <ctype.h>
#include <queue>
#include <map>
#include <set>
#include <unordered_set>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
using namespace std;

void pySplit(string & splitString, char seperator, vector<string> & seperated)
{
	int endIndex = 0;
	seperated.clear();
	seperated.push_back("");
	for (unsigned int i = 0; i < splitString.size(); i++)
	{
		if (splitString[i] == seperator)
		{
			endIndex++;
			seperated.push_back("");
		}
		else
		{
			seperated[endIndex] += splitString[i];
		}
	}
}

int main()
{
	ll i, j, k;
	ll a, b, c;
	double perDay;
	cin >> a >> b >> c;
	a -= 1;
	perDay = b / c;
	cout << ceil(a / perDay) << "\n";
	return 0;
}
