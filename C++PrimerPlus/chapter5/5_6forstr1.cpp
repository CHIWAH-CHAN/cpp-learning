//在字符串中使用for
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    //以相反的方向显示字符串
    for (int i = word.size()-1; i >= 0; i --)
        cout << word[i];
    cout << "\nBye\n";
    return 0;
}