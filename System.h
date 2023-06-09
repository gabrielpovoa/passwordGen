#include <vector>
#include "User.h"

class System
{
public:
	System();
	void RunMenu();
private:
	int initialMenu();
	void Login();
	void RegistryUser();
	void Exit();
	bool userAvailable(string name);
	vector<User> users;
};