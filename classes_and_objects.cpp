#include<iostream>
using namespace std;

class Employee{
    private: //private variable ko hm sir class m ya class ke koi v function se access kr skte h
        int a,b,c;
    public:  // yeh globally kahi v access hoga
        int d,e,f;

        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
            cout<<"Value of c is "<<c<<endl;
            cout<<"Value of d is "<<d<<endl;
            cout<<"Value of e is "<<e<<endl;
            cout<<"Value of f is "<<f<<endl;
        };
};

void Employee ::setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee emp; //iss line m humne employee class ka object banaya
    emp.d=3;
    emp.e=4;
    emp.f=6;
    emp.setData(1,2,5); //kyuki a , b or c private variables hai to hm inhe sirf employee class k function m hi value pradan kr paa rhe h 
    emp.getData();
    
    return 0;
}