#include <iostream>
#include <ostream>
#include <string>

using namespace std;


unsigned short ReadPersonAge() 
{
    unsigned short age;

    cout << "input age \n";
    cin >> age;
    return age;
}

string ReadPersonName() 
{
    string name;
    cout << "input name \n";
    cin >> name;
    return name;
}

unsigned short Height;

void ReadPersonHeight() 
{
    cout << "input height \n";
    cin >> Height;
}

void ReadPersonWeight(unsigned short& weight)
{
    cout << "input weight \n";
    cin >> weight;
}

void ReadPersonSalary(double* sal) 
{
    cout << "input salary \n";
    cin >> *sal;
}


void ReadPersonData(string& name, unsigned short& age, double& salary)
{
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& high, unsigned short& weight)

{
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    high = Height;
    ReadPersonWeight(weight);

}

string sale;

void WritePersonData(const string& name, const unsigned short* age,
    const string& height = "", const string& weight = "")
{
    cout << "\nname :  " << name
        << "\nage:  " << *age
        << "\nheight: " << height
        << "\nweight: " << weight
        << "\nsalary  " << sale << "Rub.";
}


#ifndef DO_NOT_DEFINE_MAIN
int main()
{
    //setlocale(0, "");
    string name;
    unsigned short age, high, weight;
    double sal;
    ReadPersonData(name, age, sal);
    ReadPersonData(name, age, high, weight);
    sale = to_string(sal);
    WritePersonData(name, &age, to_string(high), to_string(weight));
}
#endif