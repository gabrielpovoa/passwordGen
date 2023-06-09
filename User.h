#include "System.h"

using namespace std;

class User
{
public:
	User();
	User(string name, string password);
	void setName(string name);
	void setPassword(string password);
	string getName();
	string getPassword();
	void runAuthedMenu();

private:
	string name;
	string password;
	int authedMenu();
};