#include <iostream>
using namespace std;

int main()
{
    int num;

    // TODO: ask user for input
    cin >> num;

    // outer loop for each row
    for (int i = 0; i < num; i++)
    {
        // print letters from A to the i-th letter
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
            if (j < i)
                cout << " ";
        }

        // newline after each row
        cout << endl;
    }
    return 0;
}
