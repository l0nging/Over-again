#include <iostream>

using namespace std;
class Book {
    public:
        string title;
        string author;
        int pages;
};
int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout << book1.author;
    cout << book1.pages;
    cout << book1.title;

    Book book2;
    book2.title = "Emma";
    book2.author = "Jane Austen";
    book2.pages = 400;

    return 0;
}
