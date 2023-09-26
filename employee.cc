#include<iostream>
using namespace std;
int main()
{
class Employee
{
private:
    string name;
    string idNumber;
    string department;
    string position;
    int worked;


public:
    Employee(string n, string idNum, string depart, string pos, int yrsWrkd)
    {
        name = n;
        idNumber = idNum;
        department = depart;
        position = pos;
        worked = yrsWrkd;
    }


    void setName(string n)
    {
        name = n;
    }
    void setId(string idNum)
    {
        idNumber = idNum;
    }
    void setDepartment(string depart)
    {
        department = depart;
    }
    void setPosition(string pos)
    {
        position = pos;
    }


    string const getName()
    {
        return name;
    }
    string const getID()
    {
        return idNumber;
    }
    string const getDepartment()
    {
        return department;
    }
    string const getPosition()
    {
        return position;
    }
    int const getYears()
    {
        return worked;
    }
};
} 
