#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    for (int i = 0; i < a; i++) {
        cout << 2 * i + 1;
        if (i != a - 1) cout << ", ";
    }
    cout << endl;
    return 0;
}
