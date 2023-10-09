#include <iostream>

using namespace std;

int main()
{
    long long i;
    int score = 1;
    cin >> i;
    if (i < 0)
        i = -i;
    while (i != 0)
    {
        if (i % 10 != 0 && i % 2 == 0)
        {
            score *= i % 10;
        }
        i /= 10;
    }
    if (score == 1)
    {
        cout << 0;
        return 0;
    }
    cout << score;

    return 0;
}
