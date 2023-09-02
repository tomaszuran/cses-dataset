#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argv, char ** argc)
{
    uint64_t n;
    cin >> n;

    int64_t prev, current;

    uint64_t total = 0, inc;

    for(uint64_t i = 0; i < n; i++)
    {
        cin >> current;
        if(i == 0)
        {
            prev = current;
            continue;
        }
        else
        {
            if(current < prev)
            {
                inc = prev - current;
                total += inc;
                prev = current + inc;
            }
            else
            {
                prev = current;
            }
        }
    }

    cout << total;

    return 0;
}