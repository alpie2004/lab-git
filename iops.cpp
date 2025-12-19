#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < 0) {
        cout << "Liczba nie moze byc ujemna!" << endl;
        return 1;
    }
    cout << x << endl;
    return 0;
}

