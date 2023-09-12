#pragma once

#include <string>

using std::string;

class Ejercicio02
{
public:
	bool isPalindrome(string &s);
};

bool    Ejercicio02::isPalindrome(string& pa)
{
    int a = 0;
    int aa = pa.length() - 1;

    int con = 0;
    for (int i = 0; i < pa.length();i++)
    {
        for (int x = 0;x < pa.size();x++)
        {
            if (pa[a] == pa[aa])
            {
                a++;
                aa--;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}