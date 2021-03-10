#include <iostream>
using namespace std;

bool czy_pierwsza(int a)
{
    if (a < 2)
        return false;
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}
int main()
{
    int c;
    int MAX;
    cin >> MAX;
    for (int i = 1; i <= MAX; i++)
    {
        cin >> c;
        if (c < 1 || c>10000)
        {
            exit(1);
        }
        if (czy_pierwsza(c) == false) cout << "NIE\n";
        else cout << "TAK\n";
    }
    return 0;
}
