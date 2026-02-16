#include <iostream>
#include <numeric>

using namespace std;
int main()
{
    int a, b, x, t;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        int nod = gcd(a, b);
        int nok = a / nod * b;
        if (nok == b) {
            cout << nok * (b/a) << endl;
        }
        else {
            cout << nok << endl;
        }
    }

    return 0;
}