#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
	string name;
	string author;
	int year;
	string publishing;
	int count_book;

public:
	Library(const string& name, const string& author, int year, const string& publishing, int count_book ) {
		this->name = name;
		this->author = author;
		this->year = year;
		this->publishing = publishing;
		this->count_book = count_book;
	}

	//overloading operators to change count of book
	Library& operator+(int add_book) {
		if (add_book >= 0) {
			count_book += add_book;
		}
		return *this;
	}

	Library& operator-(int minus_book) {
		if (minus_book >= 0 && minus_book <= count_book) {
			count_book -= minus_book;
		}
		return *this;
	}

	//method for searching a book by author
	bool SearchByAuthor(const string& author) const{
		return (author == author);
	}
	//method for searching a book by name
	bool SearchByName(const string& name) const{
		return (name == name);
	}
	//method for searching a book by publishing
	bool SearchByPublishing(const string& publishing) const{
		return (publishing == publishing);
	}
	//method for searching a book by year
	bool SearchByYear(int year) const{
		return (year == year);
	}

	friend ostream& operator<<(ostream& output, Library& mylibrary)
	{
		output << "Name: " << mylibrary.name << endl;
		output << "Author: " << mylibrary.author << endl;
		output << "Year: " << mylibrary.year << endl;
		output << "Publishing: " << mylibrary.publishing << endl;
		output << "Number of books: " << mylibrary.count_book << endl;
		return output;
	}
};