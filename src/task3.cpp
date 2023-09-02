#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argv, char ** argc)
{
    string adn;
    cin >> adn;

    char prev = 0;
    uint64_t max  = 0, current = 0;

    for(char c : adn)
    {
        if(c == prev)
        {
            current++;
        }
        else
        {
            if(current > max)
                max = current;
            
            prev = c;
            current = 1;
        }
    }

    if(current > max)
        max = current;

    cout << max;

    return 0;
}