#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

void TaskBase()
{
    cout << "\nTask base level\n ";
    /*В заданной строке посчитать количество круглых и квадратных скобок*/
    string str = "((dqqda[[[JJXCZdffb";
    printf("Intput any string $ ");
    //getline(cin, str);
    cout << endl << "The first string:" << str << endl;
    unsigned int counter = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']')
            counter++;
    }
    cout << "Counter '(', ')', '[', ']' is " << counter << endl;
}

void TaskMidle()
{
    cout << "Midle task level \n";
    cout << "\nВ заданной строке удалить последний символ « » (пробел), который найдется в строке\n";
    cout << "\n+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+\n";
    string str = "sdg sdgh sdga hrf aqhr";
    cout << str << endl;
    int _lastspaceindex = str.find_last_of(' ');
    string _str_begin_lastspace;
    _str_begin_lastspace.append(str, _lastspaceindex + 1);
    cout << endl << _str_begin_lastspace << endl;
    str.erase(_lastspaceindex);
    str.append(_str_begin_lastspace);
    cout << str;

}

void TaskSenior()
{
    cout << "\nTask senior level\n";
    std::string str = "test! string!";
    char symbol = '!';
    std::stringstream ss;
    for (int i = 0; i < str.length(); i++) {
        if (str.at(i) == symbol)
            ss << i;
        else
            ss << str.at(i);
    }
    str = ss.str();

    cout << str << endl;
}
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    TaskBase();
    TaskMidle();
    TaskSenior();



}

