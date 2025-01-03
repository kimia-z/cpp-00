#ifndef Contact_HPP
#define Contact_HPP
#include <iostream>

class Contact
{
private:
	
public:
	void setFirstName(std::string input);
	void setLastName(std::string input);
	void setNickname(std::string input);
	void setPhoneNumber(std::string input);
	void setDarkestSecret(std::string input);
	void getFirstName();
	void getLastName();
	void getNickname();
	void getPhoneNumber();
	void getDarkestSecret();
};

Contact::Contact(/* args */)
{
}


#endif