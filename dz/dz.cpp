#include <iostream>
#include <fstream>
#include <map>
#include <string>
 using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
   

    string s;
    ifstream in("D:\\file.txt");

    map<string, int> word;

    while (in >> s)
        word[s]++;
    in.close();

    map <string, int>::iterator it;
    ofstream res("result.txt");
    for (it = word.begin(); it != word.end(); it++)
        res << it->first << ": " << it->second << endl;
    return 0;
    //Просто нереальная скорость выполнения программы
}