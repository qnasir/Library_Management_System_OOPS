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
