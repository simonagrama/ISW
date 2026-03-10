#include <iostream>

using namespace std;

int main()
{
    int n, d = 2, p;
    cout << "Va rugam sa intoduceti un numar natural pozitiv: ";
    cin >> n;
    while(n > 1)
    {
        if(n % d == 0)
        {
            p = 0;
            while(n % d == 0)
            {
                p++;
                n = n / d;
            }
            cout << d << " ^ " << p << endl; //60 = 2^2 * 3^1 * 5^1; 75 = 3^1 * 5^2
        }
        d++;

    }

    return 0;
}
