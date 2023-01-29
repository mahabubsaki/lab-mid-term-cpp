#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    vector<int> array;
    for (int i = 0; i < input; i++)
    {
        int item;
        cin >> item;
        array.push_back(item);
    }

    int left = 0, right = input - 1;
    while (left < right)
    {
        swap(array[left], array[right]);
        left++;
        right--;
    }
    for (int i = 0; i < input; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}