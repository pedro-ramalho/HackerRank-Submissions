
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n, i;
    cin >> n;
    vector<int> vec(n, 0);
    for(i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    for(i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    return 0;
}
