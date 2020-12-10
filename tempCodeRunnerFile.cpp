#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is: " << id << " with employee number " << count << endl;
    }
};
int Employee::count;
int main()
{
    Employee Raja, shiv, dey;
    Raja.setData();
    Raja.getData();
    shiv.setData();
    shiv.getData();
    dey.setData();
    dey.getData();

    return 0;
}