// create int main() that manages Book class and a Library class that manages multiple Book instances

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book	
{
private:	
	string title;
	string author;
	
public:
	
	Book(string book_title, string book_author):title(book_title),author(book_author) {};
	//method to perform getTitle function

	void setTitle(string title) {
	
		this->title = title;	
	}
	
	string getTitle() {

		return this->title;	
	}

	void setAuthor(string author) {

		this->author = author;
	}

	string getAuthor() {

		return this->author;

	}
	
	
};

class Library
{
private:
	vector<Book> books;
	string name;
public:

	Library(string name) {};

	string getName() {

		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
	void addBook(string title, string author) {

		this->books.push_back(Book(title, author));

		cout << "Book Added" << endl;

		cout << "Title: " << this->books[this->books.size() - 1].getTitle() << endl;
		cout << "Author: " << this->books[this->books.size() - 1].getAuthor() << endl;
		cout << endl;


	}
	void removeBook(string title) {

		for (int i = 0; i < this->books.size(); i++) {
			if (this->books[i].getTitle() == title) {
				this->books.erase(this->books.begin() + i);
				cout << "Book Removed" << endl;
				cout << "Title: " << this->books[this->books.size() - 1].getTitle() << endl;
				cout << "Author: " << this->books[this->books.size() - 1].getAuthor() << endl;
				cout << endl;
				break;
			}

		}
	}
	void printallbooks() {

		for (int i = 0; i < this->books.size(); i++) {
			cout << "Title: " << this->books[i].getTitle() << endl;
			cout << "Author: " << this->books[i].getAuthor() << endl;
			cout << endl;

		}
	}
};

	int main() {
		//add book to list	
		Book book1 = Book("has", "abc");
		Book book2 = Book("saf", "def");



		Library library1 = Library("abc");
		library1.addBook(book1.getTitle(), book1.getAuthor());
		library1.addBook(book2.getTitle(), book2.getAuthor());
		library1.printallbooks();
		return 0;


}