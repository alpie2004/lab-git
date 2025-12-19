#include <iostream>
using namespace std;

long long silnia(int n) {
    long long wynik = 1;
    for (int i = 2; i <= n; i++)
        wynik *= i;
    return wynik;
}

int main() {
    int x;
    cin >> x;
    cout << silnia(x) << endl;
    if (x < 0) {
        cout << "Liczba nie moze byc ujemna!" << endl;
        return 1;
    }
    cout << x << endl;
    return 0;
}

