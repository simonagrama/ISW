#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Va rugam sa intoduceti un nr natural pozitiv: ";
    cin >> n;

    int a = 0, b = 1, c = 1, d;
    cout << a << " " << b << " " << c << " ";
    for(int i = 2; i <= n; i++)
    {
        d = b + c;
        b = c;
        c = d;

        cout << d << " ";
    }
    return 0;
}
