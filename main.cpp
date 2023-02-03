#include <iostream>
using namespace std;
int main()
{
    int r1, r2, start, end;
    const int size = 12;
    int arr[size];
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter pribil:" << endl;
        cin >> arr[i];
    }
    cout << "Input start diapazon";
    cin >> start;
    cout << "Input end diapazon";
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        cout << " " << arr[i];
        if (arr[i] >= max)
            max = arr[i];
        if (arr[i] <= min)
            min = arr[i];
    }
    while (arr[i] != -858993460);
    cout << endl;
    i = 0;
    do 
    {
        cout << arr[i] << '\t';
        i++;
    } while (arr[i] != -858993460);
    cout << endl;
    cout << "Minimum in diapazon-->" << min << endl;
    cout << "Maximum in diapazon--> " << max << endl;
    system("pause");
    return 0;
}