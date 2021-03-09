#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int myNum[4] = {a, b, c, d};
    int max = myNum[0];
    for (int i = 1; i < 4; i++){
        if (myNum[i] > max){
            max = myNum[i];
        }
    }
    cout << max;
    
    return 0;
}
