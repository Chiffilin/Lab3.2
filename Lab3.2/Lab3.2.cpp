#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(0, "rus");
    string str;
    cout << "Введите массив из символов: ";
    getline(cin, str);
    for (size_t i = str.find("<i>"); i != string::npos; i = str.find("<i>", i))
    {
        str.insert(i + 1, "/");
        i += 4;
       
    }
    cout << "После замены: " << str<< endl;
    return 0;
}