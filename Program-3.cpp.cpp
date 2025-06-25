#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    if (a % 2 == 0) a--; // adjust for even

    for (int i = 1, count = 0; count < a; i += 2) {
        cout << i;
        count++;
        if (count < a) cout << ", ";
    }

    cout << endl;
    return 0;
}
