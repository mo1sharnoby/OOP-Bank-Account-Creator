#include<string>
#include<iostream>
#pragma once

using namespace std;

class ATM_user
{
private:
	string name;
	double balance;
	int day,month,year;
	int password;
public:
				//////user_name//////
	void set_name() { 
		cout << "Welcome To Our Program!" << endl;
		cout<< "Enter Your Full Name In English..."<<endl;
		getline(cin, name);
		 }
	string get_name() { return name; }
				//////balance//////
	void set_balance() { 
		cout << "Enter Your Balance In English..." << endl;
		cin >> balance; }
	double get_balance() { return balance; }
				///////user_birth//////
	void set_birth()
	{
		cout << "Enter the date of your birthday!" << endl;
		do {
			cout << "Enter the day then press enter,if this sentance appear more than once you may entered a wrong date..." << endl;
			cin >> day;
		} while (day <= 0 || day > 31);
		do {
			cout << "Enter the month then press enter,if this sentance appear more than once you may entered a wrong date..." << endl;
			cin >> month;
		} while (month > 12 || month <= 0);
		do {
			cout << "Enter the year then press enter,if this sentance appear more than once you may entered a wrong date..." << endl;
			cin >> year;
		} while (year < 1900 || year>2015);
	}
	void set_password() {
		int pass;
		do {
			cout << "Enter Your Password!" << endl;
			cin >> password;
			cout << "confirm your password!" << endl;
			cin >> pass;
		} while (pass!=password);
	}
	void print_data() {
		cout << "Your name is " << name << endl;
		cout << "Your balance is " << balance << endl;
		cout << "Your birthday is " << day <<"/"<< month<<"/"<<year<< endl;
		cout << "Your password is " << password << endl;
	}
	void edit_data() {
		
		while (1) {
			int flag;
			cout << "Press 1 to edit your name!"<<endl;
			cout << "Press 2 to edit your balance!" << endl;
			cout << "Press 3 to edit your Birthday!" << endl;
			cout << "Press 4 to edit your password!" << endl;
			//cout << "Press 5 to add new ATM User!" << endl;
			cout << "Press 5 to close the program!" << endl;
			cin >> flag;
			if (flag == 1)
				set_name();
			else if (flag == 2)
				set_balance();
			else if (flag == 3)
				set_birth();
			else if (flag == 4)
				set_password();
			else if (flag == 5)
				break;
			print_data();
		}

	}
	ATM_user();
	~ATM_user();
};

