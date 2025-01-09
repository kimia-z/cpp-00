#include "PhoneBook.hpp"

//need to know
PhoneBook::PhoneBook() : ContactIndex(0) {}

void PhoneBook::addContact(){
	Contact newContact;
	std::string input;

	do{
		std::cout << "Enter First Name: ";
		std::getline(std::cin, input);
		if (input.empty()){
			std::cout << "Field cannot be empty. Please enter a valid First Name." << std::endl;
		}
	} while (input.empty());
	newContact.setFirstName(input);

	do{
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, input);
	if (input.empty()){
		std::cout << "Field cannot be empty. Please enter a valid Last Name." << std::endl;
	}
	} while (input.empty());
	newContact.setLastName(input);

	do{
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, input);
	if (input.empty()){
		std::cout << "Field cannot be empty. Please enter a valid Nickname." << std::endl;
	}
	} while (input.empty());
	newContact.setNickname(input);

	do{
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, input);
	if (input.empty()){
		std::cout << "Field cannot be empty. Please enter a valid Phone Number." << std::endl;
	}
	} while (input.empty());
	newContact.setPhoneNumber(input);

	do{
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, input);
	if (input.empty()){
		std::cout << "Field cannot be empty. Please enter a valid Darkest Secret." << std::endl;
	}
	} while (input.empty());
	newContact.setDarkestSecret(input);

	contacts[ContactIndex] = newContact;
	ContactIndex = (ContactIndex + 1) % 8;
}

void PhoneBook::searchContact() const{
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; i++){
		if (!contacts[i].getFirstName().empty()){
			std::cout << std::setw(10) << i <<"|"
					  << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0,9) + "." : contacts[i].getFirstName()) << "|"
					  << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0,9) + "." : contacts[i].getLastName()) << "|"
					  << std::setw(10) << (contacts[i].getNickname().length() > 10 ? contacts[i].getNickname().substr(0,9) + "." : contacts[i].getNickname())  << std::endl;
		}
	}
	std::cout << "Enter the index of the contact to view details: ";
	int index;
	std::cin >> index;
	std::cin.ignore();
	if (index >= 0 && index <= 8 && !contacts[index].getFirstName().empty())
		displayContact(index);
	else
		std::cout << "Invalid Index!" << std::endl;
}

void PhoneBook::displayContact(int index) const{
	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}