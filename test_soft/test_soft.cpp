#include <iostream>
using namespace std;

int test(int a, int b) {
    return a + b;
}

void salut() {
    cout << "Ce mai faci?";
}

void lareverdere() {
    cout << "La revedere";
}
int main() {
    int x,y;
    cin >> x >> y;
    cout << test(x,y) << endl;

    salut();
    return 0;
}