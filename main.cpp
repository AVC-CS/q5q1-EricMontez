#include <iostream>
using namespace std;

int main()
{
    int n;
    // TODO: ask user for input
    cin >> n;
    // TODO: outer loop for each row
    for (int i = 0; i < n; i++)
    {
        // TODO: inner loop to print letters for this row
        for (int j = 0; j < n; j++)
        {
            // TODO: print the letter for this column
            cout << char('A' + j);
        }
        // TODO: print newline after each row
        cout << endl;
    }
    return 0;
}
