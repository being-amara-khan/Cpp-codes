#include <iostream>
using namespace std;

int main()
{

    int n = 4, num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}