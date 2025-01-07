#include "Contact.hpp"

void Contact::setFirstName(std::string input)
{
	Contact::firstName = input;
}

void Contact::setLastName(std::string input)
{
	Contact::lastName = input;
}

void Contact::setNickname(std::string input)
{
	Contact::nickName = input;
}

void Contact::setPhoneNumber(std::string input)
{
	Contact::phoneNumber = input;
}

void Contact::setDarkestSecret(std::string input)
{
	Contact::darkestSecret = input;
}

std::string Contact::getFirstName()
{
	return Contact::firstName;
}

std::string Contact::getLastName()
{
	return Contact::lastName;
}

std::string Contact::getNickname()
{
	return Contact::nickName;
}

std::string Contact::getPhoneNumber()
{
	return Contact::phoneNumber;
}

std::string Contact::getDarkestSecret()
{
	return Contact::darkestSecret;
}


