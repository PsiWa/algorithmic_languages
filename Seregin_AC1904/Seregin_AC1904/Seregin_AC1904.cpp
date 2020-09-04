#include <iostream>
using namespace std;

int f1(int x) { // Для проверки шага с заходом/обходом
    return 10 / x;
}

int main()
{
    int x;
    for (int i = 0; i < 10; i++) { // Для проверки условия breakpoint
        cout << "Hello World!" << endl;
    }
    cin >> x;
    x = f1(x);
    cout << x;
    return 0;
}


