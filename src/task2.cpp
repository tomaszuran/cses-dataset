#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argv, char ** argc)
{
    uint64_t n = 0;

    cin >> n;

    uint64_t * checklist = new uint64_t[n+1];

    for(uint64_t i = 0; i < (n+1); i++)
        checklist[i] = 0;

    
    for(uint64_t i = 1; i <= (n-1); i++)
    {
        uint64_t aux = 0;
        cin >> aux;
        checklist[aux] = 1;
    }

    for(uint64_t i = 1; i <= n; i++)
    {
        if(checklist[i] == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << "Caca" << endl;

    return 0;
}