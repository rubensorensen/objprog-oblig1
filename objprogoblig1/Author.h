#pragma once

#include <string>
#include <vector>
#include <memory>
#include "Book.h"

class Author {

public:

	Author(std::string Name, std::string Email, std::vector<std::shared_ptr<Book>> Books);

	std::string GetName();
	std::string GetEmail();
	std::vector<std::shared_ptr<Book>> GetBooks();

private:

	std::string Name;
	std::string Email;
	std::vector<std::shared_ptr<Book>> Books;
	
};

