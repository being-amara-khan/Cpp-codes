#include <iostream>
using namespace std;

int main()
{
    int rows = 5, cols = 10; // You can adjust the number of rows and columns

    // Loop through each row
    for (int i = 0; i < rows; i++)
    {
        // Loop through each column
        for (int j = 0; j < cols; j++)
        {
            // Condition to print '*' at the borders
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " "; // Print space inside the rectangle
            }
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
