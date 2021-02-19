#pragma once

#include <string>

class Book {

public:
	Book(std::string Title, std::string Author, unsigned int Pages);

	std::string GetTitle();
	std::string GetAuthor();
	unsigned int GetPages();

private:
	std::string Title;
	std::string Author;
	unsigned int Pages;
};

