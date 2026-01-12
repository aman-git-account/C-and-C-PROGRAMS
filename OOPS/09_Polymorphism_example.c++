//      POLYMORPHISM
//      1.Compile Time Polymorphism   2. Run Time Polymorphism
//           |
//           |
//      A.Constructor Overloading

// #include<iostream>
// using namespace std;
// class Individual{
//     public:
//     string name;
//     Individual(){
//         cout<<"non-parameterized"<<endl;
//     }

//     Individual(string name){
//         this->name = name;
//         cout<<"Parameterized"<<endl;
//     }
// };

// B.Function overloading
#include <iostream>
using namespace std;

class Religion
{
public:
    void ReligionName(string First)
    {
        cout << "Hinduism: " << First << endl;
    }

    void ReligionName(int year)
    {
        cout << "AGE: " << year << endl;
    }
};
int main()
{
    Religion R1;

    R1.ReligionName("Hinduism");
    R1.ReligionName(4000);


    return 0;
}