#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Bankaccount{
    char D_name[20];
    int Account_number;
    char Account_type[5];
    float amount;

    public:
    void initial(){
        cout<<"Enter Depositer Name:"<<endl;
        cin>> D_name;
        cout<<"Enter Account Number:"<<endl;
        cin>>Account_number;
        cout<<"Enter Type Of Account:"<<endl;
        cin>>Account_type;
        cout<<"Enter Ammount"<<endl;
        cin>>amount;
    }

    void deposit(){
        float dep;
        cout<<"Enter a Amount to Deposit:"<<endl;
        cin>>dep;
        amount = amount+dep;
        cout<<"Amount Balance After Deposit:"<<amount<<endl;
    }

    void withdraw(){
        float witd;
        cout<<"Enter a Amount to Withdraw:";
        cin>>witd;
        if(amount==0){
            cout<<"You Cant Withdraw";
        }

        else{
            witd = amount-witd;
            cout<<"Withdraw Amount:"<<witd<<endl;
        }
    }

    void displaybalance(){
        cout<<"Name of the Depositor:"<<D_name<<endl;
        cout<<"balance Amount:"<<amount<<endl;
    }
    

};


int main(){
    
    Bankaccount aa;
    
    aa.initial();
    int choice;
    
    while(true){
        cout<<"1-Deposit\n";
        cout<<"2-Withdraw\n";
        cout<<"3-Display Balance\n";
        cout<<"4-Exit\n";

        cout<<"Enter Your Choice:";
        cin>>choice;

        switch (choice){
            case 1:
            aa.deposit();
            break;


            case 2:
            aa.withdraw();
            break;

            case 3:
            aa.displaybalance();
            break;

            case 4:
            cout<<"Exiting the Program";
            exit(0);
            break;


            default:
            cout<<"Wrong Input";
            break;
        }
    }


}
