#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;

    while (true)
    {
        cin >> A >> B;
        
        if (cin.eof())
        {
            break;
        }

        cout << A + B << '\n';
    }

    return 0;
}

// endl -> '\n'