#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int i;

    cin >> s >> i;

    cout << s[i - 1] << '\n';

    return 0;
}

// endl -> '\n'