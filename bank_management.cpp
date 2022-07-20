#include <bits/stdc++.h>
#include <conio.h>
using namespace std;


class bankofIndia
{
    private:
    char name[100];
    char add[100];
    char y;
    int balance;
    public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_acoount();
};

void bankofIndia :: open_account() 
{
    cout<<"enter your full name :: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"enter your address:: ";
    cin.ignore();
    cin.getline(add,100);
    cout<<"what tye of account you want to open saving(s) or cureent(c) ";
    cin>>y;
    cout<<"enter amount for deposit:: ";
    cin>>balance;
    cout<<"Account successfully created"<<endl;
}
void bankofIndia :: deposit_money()
{
    int a;
    cout<<"enter how much amount you want to deposit :: ";
    cin>>a;
    balance+=a;
    cout<<"\n total amount after deposition ::\t"<<balance;
}
void bankofIndia :: display_acoount()
{
    cout<<"Full Name ::\t"<<name<<endl;
    cout<<"Address ::\t"<<add<<endl;
    cout<<"Type of account :: \t"<<y<<endl;
    cout<<"Total amount :: \t"<<balance<<endl;
}
void bankofIndia :: withdraw_money()
{
    float amount;
    cout<<endl;
    cout<<"\n withdraw :: ";
    cout<<"\n enter amount to withdraw :: ";
    cin>>amount;
    balance-=amount;
    cout<<"total amount left :: "<<balance;
}


int main(){
    int ch,x;
    bankofIndia obj;
    do
    {
    cout<<"\n1) open account"<<endl;
    cout<<"2) deposit money"<<endl;
    cout<<"3) withdarw money"<<endl;
    cout<<"4) display acccount"<<endl;
    cout<<"5) exit"<<endl;
    cout<<"select the above option \n";
    cin>>ch;

    switch(ch)
    {
        case 1: "1)open account \n";
        obj.open_account();
        break;
        case 2: "2)deposit money \n";
        obj.deposit_money();
        break;
        case 3:"3)withdraw money \n";
        obj.withdraw_money();
        break;
        case 4: "4)display account \n";
        obj.display_acoount();
        break;
        case 5:
        if(ch==5){
            exit(1);
        }
        
        default:
        cout <<"Invalid\n";
        cout<<"please try again\n";

    }
    cout<<"\nTo select next option press :: y \n";
    cout<<"To exit press :: N ";
    x=getch();
    if(x=='n'||x=='N')
    exit(0);
    }
    while(x=='y'||x=='Y');
    getch();
    return 0;
}
