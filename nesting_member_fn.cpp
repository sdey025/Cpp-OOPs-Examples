#include <iostream>
#include <string>
using namespace std;
class test
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void once(void);
    void display(void);
};
void test ::read(void)
{
    cout << "Enter a binary number ";
    cin >> s;
}
void test ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << s << " is not an binary number !!!" << endl;
            exit(0);
        }
    }
}
void test :: once(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else 
        {
            s.at(i) = '0';
        }
    }
}
void test ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    test t;
    t.read();
    t.chk_bin();
    t.once();
    t.display();
    return 0;
}