#include <iostream>
#include <cstring>

using namespace std;

void findWord(char s[])
{
    int c = 0;
    char* np = NULL;
    const char* delim = " ";
    char* p = strtok_s(s, delim, &np);
    string st;
    while (p != NULL)
    {
        st = p;
        if (st[0] == st[st.length() - 1])
        {
            cout << p << endl;
            c++;
        }
        p = strtok_s(NULL, delim, &np);
    }
    cout << c << " words";
}

int main()
{
    char s[300];
    cout << "Input string:\n";
    gets_s(s);
    findWord(s);
}
