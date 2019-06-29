#include <iostream>

using namespace std;

// ensure: a > b
int gcd(int a, int b) {
    int r = a / b;
    // if(r == 0) {return b;}
    // return gcd(b, r);
    while(r != 0) {
        a = b, b = r;
        r = a / b;
    }
    return b;
}

int main() {
    int a, b;
    cout << "Enter a > b: ";
    cin >> a >> b;
    if(!(a > b)) {
        cout << "a not greater than b";
        return 1;
    }
    cout << gcd(a, b) << endl;
    return 0;
}