#include <bits/stdc++.h>
using namespace std;
int largestNum(vector<int> array, int large, int index)
{
    if (index == array.size())
    {
        return large;
    }
    if (array[index] > large)
    {
        large = array[index];
    }
    return largestNum(array, large, index + 1);
};
int main()
{
    int size;
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int item;
        cin >> item;
        arr.push_back(item);
    }

    int largest = largestNum(arr, arr[0], 1);
    cout << largest;
    return 0;
}