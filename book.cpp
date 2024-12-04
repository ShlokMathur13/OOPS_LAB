// create a class book with book id, page, price

#include <iostream>
using namespace std;

class book
{
private:
    int page;
    int price;
    int bookID;

public:
    void setbookID(int id)
    {
        bookID = id;
    }
    void setpage(int pg)
    {
        page = pg;
    }
    void setprice(int pr)
    {
        price = pr;
    }

    int getbookID()
    {
        return bookID;
    }
    int getpage()
    {
        return page;
    }
    int getprice()
    {
        return price;
    }
    void getBookdetails()
    {
        cout << "book ID:" << bookID << endl;
        cout << "page:" << page << endl;
        cout << "price:" << price << endl;
    }
};

int main()
{
    book *bobj1 = new book;
    bobj1->setbookID(1);
    bobj1->setpage(50);
    bobj1->setprice(100);

    book *bobj2 = new book;
    bobj2->setbookID(2);
    bobj2->setpage(250);
    bobj2->setprice(400);
    cout << "Book 1 details:" << endl;
    bobj1->getBookdetails();
    cout << "Book 2 details:" << endl;
    bobj2->getBookdetails();

    if (bobj1->getprice() > bobj2->getprice())
    {
        cout << "book 1 is costlier" << endl;
    }
    else
    {
        cout << "book 2 is costlier" << endl;
    }
}


