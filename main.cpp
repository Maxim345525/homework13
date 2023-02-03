#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    const uint32_t size = 5;
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << "\t";
    }
    cout << endl;
    int max, min;
    min = max = arr[0];
    for (size_t i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Min--> " << min << ", Max--> " << max << endl;
}