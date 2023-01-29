#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string wd, int left, int right)
{
    if (left >= right)
    {
        return true;
    }
    else if (wd[left] != wd[right])
    {
        return false;
    }
    return isPalindrome(wd, left + 1, right - 1);
}
int main()
{
    string word;
    cin >> word;
    bool check = isPalindrome(word, 0, word.length() - 1);
    if (check)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}