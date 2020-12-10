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
    static void getCount(void){ // this can only access static variables
        cout<<"the count is: "<<count<<endl;
    }
};
int Employee::count; //count will be accessable from every function
int main()
{
    Employee Raja, shiv, dey;
    Raja.setData();
    Raja.getData();
    Employee::getCount();
    shiv.setData();
    shiv.getData();
    Employee::getCount();
    dey.setData();
    dey.getData();
    Employee::getCount();

    return 0;
}