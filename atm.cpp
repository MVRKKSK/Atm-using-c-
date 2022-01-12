#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class atm
{
private:

 //MAKE all the elements private for only member accesss

    long int Account_no;
    string Name;
    string Mobile_no;
    long int Pin;
    double Balance;

public:
//create a function where we can get the data of the memebers
    void SetData(long int acc_no, string name, string mobile_no, long int pin, double balance)
    {
        long int Account_no = acc_no;
        string Name = name;
        string Mobile_no = mobile_no;
        long int Pin = pin;
        double Balance = balance;
    }

    long int getAccountNo(){
        return Account_no;
    }

    string getname(){
        return Name;
    }

    string getMobile(){
        return Mobile_no;
    }

    long int getpin(){
        return Pin;
    }

    double getBalance(){
        return Balance;
    }
};


int main(){
    int choice , Accountno;
    int AtmPin;

    system("cls");

    atm user1;
    user1.SetData(12345 , "Kautilya" , "951458148" , 6969 , 1400.00);

    do{
        system("cls");

        cout<<"Welcome to Virtual C++ ATM"<<endl;
        cout<<"Please enter your Account No" <<endl;
        cin>>Accountno>>endl;
        cout<<"Enter your ATM pin"<<endl;
        cin>>AtmPin>>endl;

        if((Accountno == user1.getAccountNo()) && (AtmPin == user1.getpin()) ){
            do{

            }
        }
    }
}
