#include<iostream>
using namespace std;

int main()
{
	int menu;
	double Deposite,money,total,Withdraw;
	do
	{
	cout<<"1.Register"<<endl;
	cout<<"2.Deposite"<<endl;
	cout<<"3.Withdraw"<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"Enter program : ";
	cin>>menu;
	if(menu==1)
	{
		cout<<"register"<<endl;
		cout<<"enter money : ";
		cin>>money;
		cout<<"You have money "<<money<<endl;
	}
	else if(menu==2)
	{
		cout<<"Deposite : "<<endl;
		cout<<"enter Deposite : ";
		cin>>Deposite;
		total=money+Deposite;
		cout<<"You have money "<<money+Deposite<<endl;
	}
	else if(menu==3)
	{
		cout<<"Withdraw"<<endl;
		cout<<"enter Withdraw : "<<endl;
		cin>>Withdraw;
		if (Withdraw > total)

		total=total-Withdraw;
		cout<<"You have money "<<total<<endl;
	}
	}while(menu!=0);
}