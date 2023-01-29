#include <bits/stdc++.h>
using namespace std;

vector<int> quick(vector<int> arr)
{
    if (arr.size() <= 1)
        return arr;
    int pivot = rand() % (arr.size());
    vector<int> smaller;
    vector<int> higher;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == pivot)
        {
            continue;
        }
        else if (arr[i] >= arr[pivot])
        {
            higher.push_back(arr[i]);
        }
        else
        {
            smaller.push_back(arr[i]);
        }
    }
    vector<int> sorted_smaller = quick(smaller);
    vector<int> sorted_higher = quick(higher);
    vector<int> sorted_all;
    for (int i = 0; i < sorted_smaller.size(); i++)
    {

        sorted_all.push_back(sorted_smaller[i]);
    }
    sorted_all.push_back(arr[pivot]);
    for (int i = 0; i < sorted_higher.size(); i++)
    {

        sorted_all.push_back(sorted_higher[i]);
    }
    return sorted_all;
}

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
    vector<int> result = quick(array);
    int left = 0;
    for (int i = 0; i < result.size(); i++)
    {
        if (result[left] != result[i])
        {
            left++;
            result[left] = result[i];
        }
    }

    for (int i = 0; i <= left; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}