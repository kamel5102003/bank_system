#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//class validtion

class validations {
public:
static	bool Valid_Name(string name) {
		if (name.length() < 5 || name.length() > 20)
			       return false;
		for (int i = 0; i < name.length(); i++) {
			if (!isalpha(name[i]))
				return false;
		}
		return true;
	}
static	bool Valid_Password(string password) {
	if (password.length() < 8 || password.length() > 20) {
		return false;
	  }
	return true;
}
static	bool Valid_Balance(double balance) {
	if (balance<1500) {
		return false;
	}
	return true;
}
static	bool Valid_Salary(double salary) {
	if (salary < 5000) {
		return false;
	}
	return true;
}

};
