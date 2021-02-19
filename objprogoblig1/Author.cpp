#include "Author.h"

Author::Author(std::string Name, std::string Email, std::vector<std::shared_ptr<Book>> Books) {
	this->Name = Name;
	this->Email = Email;
	this->Books = Books;
}

std::string Author::GetName() {
	return this->Name;
}

std::string Author::GetEmail() {
	return this->Email;
}

std::vector<std::shared_ptr<Book>> Author::GetBooks() {
	return this->Books;
}



