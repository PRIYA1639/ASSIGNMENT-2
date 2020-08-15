#include<stdio.h>
using namespace std;
class account
{
private:
int accountbalance;
public:aAccount(int balance)
{
if(balance>0)
accountbalance=balance;
}
else
{
cout<<"balance can’t be negative.. setting it to zero\n";
balance=0;
accountbalance=balance;
}
}
void credit(int amount)
{
accountbalance +=amount;
}
void debit (int amount)
{
int  temp = accountbalance-amount;
if (temp>0)
{
accountbalance-=amount;
}
else
{
    cout<<"debit amount exceeded account balance. \n”;
}
}
int getbalance()
{
return accountbalance;
}
}
int main(void)
{
int openbalance;
cout<<"enter the amount you want to start somya account with? \n";
cin>> openbalance;
account somya(openbalance);
int paisa;
cout<<"enter the amount you want to add in somya account? \n";
cin>>paisa;
somya.credit(paisa) ;
cout<<somya.getbalance()<<"\n";
double paisa1;
cout<<"enter the amount you want to remove from somya’s account?\n";
c in>>paisa1;
somya.debit(paisa1);
cout<<somya.getbalance()<<"\n";
cout<<"enter the amount you want to add in harsh account with?\n”;
cin>>openbalance;
account harsh(openbalance);
cout<<"enter the amount you want to add in harsh’s account?\n";
cin>>paisa;
harsh.credit(paisa);
cout<<harsh.getbalance()<<"\n";
cout<<"enter the amount you want to remove form harsh’s account?\n";
cin>>paisa1;
harsh.debit(paisa1);
cout<<harsh.getbalance()<<"\n";
}
