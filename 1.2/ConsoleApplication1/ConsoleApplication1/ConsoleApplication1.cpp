#include <iostream>
#include <array>
const int ArSize = 10;
int main()
{
    using namespace std;
    //double arr[ArSize];
    array<double, ArSize> arr;
    cout << "число #1: ";
    int i = 0;
    while (i < ArSize && cin >> arr[i])
    {
        if (++i < ArSize)
            cout << "число #" << i + 1 << ": ";
    }

    if (cin.fail())
        cout << "ошибка";
    else
    {
        int sum = 0.0;
        for (int j = 0; j < ArSize; ++j)
            sum += arr[j];
        double average = sum / ArSize;
        cout << "ср знач = " << average << endl;
        cout << "знач выше ср";
        for (int j = 0; j < ArSize; ++j)
            if (arr[j] > average)
            {
                cout << "Value #" << j + 1 << ": ";
                cout << arr[j] << endl;
            }
    }
}