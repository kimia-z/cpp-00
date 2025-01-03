#include "PhoneBook.hpp"

//need to know
PhoneBook::PhoneBook() : ContactIndex(0) {}

void PhoneBook::addContact(){
	Contact newContact;
	std::string input;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, input);
	newContact.setLastName(input);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, input);
	newContact.setNickname(input);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);

	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);

	contacts[ContactIndex] = newContact;
	ContactIndex = (ContactIndex + 1) % 8;
}

void PhoneBook::searchContact() const{
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
	std::cout << "Enter the index of the contact to view details: ";
	int index;
	std::cin >> index;
}

void PhoneBook::displayContact(int index) const{
	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}