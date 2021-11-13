#include <iostream>
using namespace std;

int main() {
    int n=0, a=1, b=1, c=0;
    cout << "Inserisci n" << endl;
    cin >> n;
    cout << a << endl;
    cout << b << endl;

    for (int i=1; i<=(n-2); i++) {
        c = a+b;
        a=b;
        b=c;
        if (c<=n) {
            cout << c << endl;
        } else {
            return 0;
        }
    }
}


