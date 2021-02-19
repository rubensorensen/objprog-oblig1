#include "Book.h"

Book::Book(std::string Title, std::string Author, unsigned Pages) {
	this->Title = Title;
	this->Author = Author;
	this->Pages = Pages;
}

std::string Book::GetTitle() {
	return this->Title;
}

std::string Book::GetAuthor() {
	return this->Author;
}

unsigned int Book::GetPages() {
	return this->Pages;
}



