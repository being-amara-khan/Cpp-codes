
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    char o = 'A'; // Number of rows

    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Print the numbers
        for (int k = 0; k < n - i; k++)
        {
            cout << char(o + i);
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
