#include <iostream>
#include "System.h"
#include "User.h"

using namespace std;

System::System()
{
	cout << "Running System" << endl;
}

int System::initialMenu()
{
	int option;
	cout << "**********MENU**********" << endl;
	cout << "1. Login" << endl;
	cout << "2. Create Account" << endl;
	cout << "3. Exit" << endl;
	cout << "4. Choose an Option" << endl;
	cout << "************************" << endl;
	cin >> option;
	return option;

}

void System::RunMenu()
{
	int option;
	do {

		option = initialMenu();
		switch (option)
		{
		case 1:
			Login();
			break;
		case 2:
			RegistryUser();
			break;
		case 3:
			Exit();
			break;
		default:
			cout << "Unvalide Operation! \n";
			break;
		}

	} while (option != 4);

}

int User::authedMenu()
{
	int option;
	cout << "**********AUTH MENU**********" << endl;
	cout << "1. Generate Password" << endl;
	cout << "2. Show All Paswords" << endl;
	cout << "3. Log Out" << endl;
	cout << "4. Exit" << endl;
	cout << "5. Choose an Option" << endl;
	cout << "***********authh*************" << endl;
	cin >> option;
	return option;
}

void User::runAuthedMenu()
{
	int option;
	do {

		option = authedMenu();
		switch (option) {
		case 1:
			cout << "Creating Password\n\n";
			break;
		case 2:
			cout << "Showing all passwords\n\n";
			break;
		case 3:
			cout << "log outting\n\n";
			break;
		case 4:
			cout << "Close Console\n\n";
			break;
		}

	} while (option != 5);

}

void System::Login() {
	string name, password;

	cout << "LOGIN VIEW\n\n";
	cout << "\n\nUSER ";
	cin >> name;
	cout << "\n\nPASSWORD ";
	cin >> password;

	for (int i = 0; i < users.size(); i++) {
		if (users[i].getName() == name && users[i].getPassword() == password) {
			cout << "Athenticated User!!!\n\n";
			runAuthedMenu();
		}
		else {
			cout << "Incorreted login datum\n\n";
		}

	}

}

void System::RegistryUser() {


	string name, password;

	cout << "REGISTRY MODULE\n\n";


	cout << "To create a new user, enter a name and a password\n";
	cin >> name;
	cin >> password;

	if (userAvailable(name)) {
		User userTemp(name, password);
		users.push_back(userTemp);
		cout << "User Registred. Total of user registres is: " << users.size() << endl;;
	}
	else {
		cout << "Username unavailable or not allowed!\n\n";
	}
}

bool System::userAvailable(string name) {
	for (int i = 0; i < users.size(); i++) {
		if (users[i].getName() == name) {
			return false;
		}
		else {
			return true;
		}
	}
}

void System::Exit() {
	cout << "Session Finished! \n";
}