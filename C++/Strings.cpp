#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    int len_a = a.size();
    int len_b = b.size();
    char chr_a = a[0];
    char chr_b = b[0];
    string concatenation = a + b;
    cout << len_a << " " << len_b << endl;
    cout << concatenation << endl;
    a[0] = chr_b;
    b[0] = chr_a;
    cout << a << " " << b << endl;

    return 0;
}

