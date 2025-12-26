#include <iostream>
using namespace std;
class Teacher
{
public:
    string name;
    string dept;
    string subject;
    int age;

private:
    int salary;
};

void changeDept(string newdept)
{
    string dept = newdept;
}

int main()
{
    Teacher t1;

    t1.name = "Shweta singh";
    t1.dept = "C dept";
    t1.subject = "Computer engineering";
    t1.age = 28;

    Teacher t2;
    

    return 0;
}