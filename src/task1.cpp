#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argv, char ** argc)
{
    uint64_t n = 0;

    cin >> n;

    while(n != 1)
    {
        cout << n << " ";
        n = !(n % 2) ? n / 2 : (n * 3 + 1);
    }

    cout << n;

    return 0;
}