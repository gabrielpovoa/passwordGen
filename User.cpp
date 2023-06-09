#include <iostream>
#include "User.h"

using namespace std;

User::User() {};

User::User(string name, string password)
{
	this->name = name;
	this->password = password;
}

void User::setName(string name) {
	this->name = name;

}

void User::setPassword(string password) {
	this->password = password;

}

string User::getName() {
	return name;
}

string User::getPassword() {
	return password;
}