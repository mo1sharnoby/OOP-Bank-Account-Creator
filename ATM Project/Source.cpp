#include<iostream>
#include<string>
#include "ATM_user.h"
using namespace std;

int main() {
	ATM_user Mostafa;
	Mostafa.set_name();
	Mostafa.set_balance();
	Mostafa.set_birth();
	Mostafa.set_password();
	cout << "Congratulations "<< Mostafa.get_name() <<" you just Have made a new account! <3"<<endl;
	cout << "your data will be shwon in the sdcreen!" <<endl ;
	Mostafa.print_data();
	Mostafa.edit_data();
	return 0;
}