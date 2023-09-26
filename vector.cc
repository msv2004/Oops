#include<iostream>
#define max 100 
using namespace std;

class Vector
{
private:
    float arr[max];
    int n;
public:
    void create();
    void modify();
    void multiply();
    void display();
};

void Vector::create()
{
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void Vector::modify()
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 30)
        {
            arr[i] = 45;
            return; 
        }
    }
}

void Vector::multiply()
{
    int scalar;
    cout << "Enter scalar value: ";
    cin >> scalar;
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * scalar; 
    }
}

void Vector::display()
{
    cout << "("; 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
        {
            cout << ", ";
        }
    }
    cout << ")" << endl;
}

int main()
{
    Vector v;
    v.create();
    v.modify();
    v.multiply();
    v.display();
    return 0;
}

