#include<iostream>
using namespace std;
int menu;
int total1,total2;
int ac1,ac2;
int idmenu2,idmenu3,idmenu4,trans;
double Deposite1,Deposite2;
double Withdraw1,Withdraw2,transfer1,transfer2;
void Register();
void Deposite();
void withdraw();
void transfer();
void balance();
int main()
{
	do
	{
	cout<< "Net Banking / ATM" << endl;
	cout<<"1.Register"<<endl;
	cout<<"2.Deposite"<<endl;
	cout<<"3.Withdraw"<<endl;
	cout<<"4.Transfer"<<endl;
	cout<<"5.show Balance"<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"Enter Menu : ";
	cin>>menu;
	Register();
	Deposite();
	withdraw();
	transfer();
	balance();
	}while(menu!=0);
}
void Register()
{
	if(menu==1)
	{
		cout<<"Register"<<endl;
		cout<<"Enter Account 1 ID : ";
		cin>>ac1;
		cout<<"Enter money for Account 1 :";
		cin>>total1;
		cout<<"Enter Account 2 ID : ";
		cin>>ac2;
		cout<<"Enter money for Account 2 :";
		cin>>total2;
		cout<<"Balance of Account 1 : "<<total1<<endl;
		cout<<"Balance of Account 2 : "<<total2<<endl;
	}
}
void Deposite()
{
	if(menu==2)
	{
		cout<<"Deposite : "<<endl;
		cout<<"Enter Account ID for Deposite :";
		cin>>idmenu2;
		if(idmenu2==ac1){
		cout<<"Account 1 : Enter Deposite : ";
		cin>>Deposite1;
		total1=total1+Deposite1;
		cout<<"Account 1 have money :"<<total1<<endl;}
		else if(idmenu2==ac2){
		cout<<"Account 2 : Enter Deposite : ";
		cin>>Deposite2;
		total2=total2+Deposite2;
		cout<<"Account 2 have money : "<<total2<<endl;}

	}
}
void withdraw()
{
	if(menu==3)
	{
		cout<<"Withdraw"<<endl;
		cout<<"Enter Account ID for Withdraw : ";
		cin>>idmenu3;
		if(idmenu3==ac1)
		{
			cout<<"Account 1 : Enter Withdraw : ";
			cin>>Withdraw1;
		if(Withdraw1>total1)
		{
			cout<<"!! Your money not enough !!";
		}
		else
			total1=total1-Withdraw1;
			cout<<endl<<"Account 1 Now You have money = "<<total1<<endl;
		}
		else if(idmenu3==ac2)
		{
			cout<<"Account 2 : Enter Withdraw : ";
			cin>>Withdraw2;
		if(Withdraw2>total2)
		{
			cout<<"!! Your money not enough !!";
		}
		else
			total2=total2-Withdraw2;
			cout<<endl<<"Account 2 Now You have money = "<<total2<<endl;
		}
	}
}
void transfer()
{
	if (menu==4)
	{
		cout<<"Transfer"<<endl;
		cout<<"Enter Details of transfering Account ";
		cin>>idmenu4;
		trans = trans + idmenu4;
		if(trans==ac1)
		{
			cout<<"Enter Details of receiving Account : ";
			cin>>idmenu4;
			if (idmenu4==ac2)
			{
				cout<<"Enter amount of money to transfer : ";
				cin>>transfer1;
				total2 = total2 + transfer1;
				total1 = total1 - transfer1;
			}
		else
			cout<<endl<<"Account 1 Transfer to Account 2 already "<< endl;
			cout<<endl<<"Account 1 Now You have money = "<<total1<<endl;
		}
		else if(idmenu4==ac2)
		{
			cout<<"Enter Details of receiving Account : ";
			cin>>idmenu4;
			if (idmenu4==ac1)
			{
				cout<<"Enter amount of money to transfer : ";
				cin>>transfer2;
				total1 = total1 + transfer2;
				total2 = total2 - transfer2;
			}
		else
			cout<<endl<<"Account 2 Transfer to Account 1 already "<< endl;
			cout<<endl<<"Account 2 Now You have money = "<<total2<<endl;
		}
	}
}
void balance()
{
	if(menu==5)
	{
		cout<<"ID 1 : "<<total1<<endl;
		cout<<"ID 2 : "<<total2<<endl;
	}
}