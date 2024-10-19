#include <iostream>
#include <vector>
using namespace std;

class Book {
private:
    string bookTitle;
    string author;
    bool available;

public:

    // Accessor (Getter) for bookTitle
    string getBookTitle() const {
        return bookTitle;
    }

    // Mutator (Setter) for bookTitle
    void setBookTitle(const string& title) {
        bookTitle = title;
    }

    // Accessor (Getter) for author
    string getAuthor() const {
        return author;
    }

    // Mutator (Setter) for author
    void setAuthor(const string& authorName) {
        author = authorName;
    }

    // Accessor (Getter) for availability
    bool isAvailable() const {
        return available;
    }

    // Mutator (Setter) for availability
    void setAvailability(bool status) {
        available = status;
    }

};

class Library {
private:
    vector<Book> books;  // Collection of books in the library

public:

    // Add a new book to the library
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book '" << book.getBookTitle() << "' added to the library.\n";
    }

    // Find a book in the library by title
    void findBook(const string& title) {
        for (const Book& book : books) {
            if (book.getBookTitle() == title) {
                cout << "Book found: " << book.getBookTitle() << " by " << book.getAuthor() << endl;
                cout << "Availability: " << (book.isAvailable() ? "Available" : "Not Available") << endl;
                return;
            }
        }
        cout << "Book '" << title << "' not found in the library.\n";
    }

    // Remove a book from the library
    void removeBook(const string& title) {
        for (size_t i = 0; i < books.size(); i++) {
            if (books[i].getBookTitle() == title) {
                books.erase(books.begin() + i);
                cout << "Book '" << title << "' removed from the library.\n";
                return;
            }
        }
        cout << "Book '" << title << "' not found, so cannot be removed.\n";
    }


};

