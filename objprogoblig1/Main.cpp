#include <iostream>
#include <string>
#include <vector>
#include "Book.h"
#include "Author.h"

int main(void) {

	std::vector<Author> authors;
	std::vector<std::shared_ptr<Book>> books;
	
	books.emplace_back(std::make_shared<Book>("The Silmarillion", "J. R. R. Tolkien", 365));
	books.emplace_back(std::make_shared < Book>("The Children Of Hurin", "J. R. R. Tolkien", 320));
	books.emplace_back(std::make_shared < Book>("The Fall Of Gondolin", "J. R. R. Tolkien", 304));
	books.emplace_back(std::make_shared < Book>("The Legend Of Sigurd & Gudrun", "J. R. R. Tolkien", 384));
	authors.emplace_back("J. R. R. Tolkien", "bilbobaggins@mail.com", books);

	books.clear();
	books.emplace_back(std::make_shared<Book>("Off To Be The Wizard", "Scott Meyer", 373));
	books.emplace_back(std::make_shared<Book>("Spell Or High Water", "Scott Meyer", 431));
	books.emplace_back(std::make_shared<Book>("An Unwelcome Quest", "Scott Meyer", 434));
	books.emplace_back(std::make_shared<Book>("Fight And Flight", "Scott Meyer", 352));
	authors.emplace_back("Scott Meyer", "meyer@mail.com", books);

	books.clear();
	books.emplace_back(std::make_shared<Book>("The Shining", "Stephen King", 659));
	books.emplace_back(std::make_shared<Book>("Gerald's Game", "Stephen King", 332));
	books.emplace_back(std::make_shared<Book>("1922", "Stephen King", 132));
	books.emplace_back(std::make_shared<Book>("Dreamcatcher", "Stephen King", 620));
	authors.emplace_back("Stephen King", "stephenking@mail.com", books);

	for (auto& author : authors) {
		std::cout << "*******************\n" << std::endl;
		std::cout << "Author: " << author.GetName() << std::endl;
		std::cout << "Email: " << author.GetEmail() << "\n" << std::endl;
		std::cout << "Books:";
		for (auto& book : author.GetBooks()) {
			std::cout << "	Title: " << book->GetTitle() << std::endl;
			std::cout << "	Author: " << book->GetAuthor() << std::endl;
			std::cout << "	Pages: " << book->GetPages() << std::endl;
			std::cout << std::endl;
		}
	}
	
	return 0;
}