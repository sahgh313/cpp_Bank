#include <iostream>
using namespace std;


int balance;
int phoneNumber;
string firstName;
string lastName;


class Bank {
    

    public:
    void Create(){
        string firstName;
        cout << "enter your first name" << endl;
        cin >> firstName;

        string lastName;
        cout << "enter your last name" << endl;
        cin >> lastName;

        int phoneNumber;
        cout << "enter your phoneNumber" << endl;
        cin >> phoneNumber;

        float balance;
        cout << "enter your balance" << endl;
        cin >> balance;

        cout << "you have successfully signed up" << endl;
    }

    void Add(){
        cout << "How much do you want to add?" << endl;
        int toAdd = 0;
        cin >> toAdd;
        balance += toAdd;
        cout<< "<< balance updated >> " << "current balance : " << balance << endl;

    }

    void Subtract(){
        cout << "How much do you want to subtract?" << endl;
        int subFrom = 0;
        cin >> subFrom;
        balance -= subFrom;
        cout<< "<< balance updated>> " << "current balance : " << balance << endl;
    }
    
    void Info (){
        cout<< firstName << lastName << phoneNumber << balance << endl; 
    }

};

int main(){

    while(true){
        cout<< "Hi wellcome \n" << "press1 to create an account\n " << "press 2 to add to your balance \n " << "press 3 to remove from your balance \n " << "press 4 to show your account info \n" << endl;
        int chooser;
        cin >> chooser;
        Bank customer;

        switch(chooser){
            case 1: 
                
                customer.Create();
            break;

            case 2:
                
                customer.Add();
            break;

            case 3:
                
                customer.Subtract();
            break;

            case 4: 
                
                customer.Info();
            break;

            default:
                cout << "Exitting..." << endl;
            break;

        }
        
    }
    return 0;
}
