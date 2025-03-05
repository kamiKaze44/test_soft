#include <iostream>
using namespace std;

int test(int a, int b) {
    return a + b;
}


int main() {
    int x,y;
    cin >> x >> y;
    cout << test(x,y) << endl;
    return 0;
}