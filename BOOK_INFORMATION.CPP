#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class book
{
  private:
      int book_id;
      char book_name[20];
      float book_price;
  public:
     void get_book_info()
     {
      cout<<"\nEnter a book ID";
      cin>>book_id;
      cout<<"\nEnter a book Name";
      cin>>book_name;
      cout<<"\nEnter a book price";
      cin>>book_price;
     }
     void display_book_info()
     {
    cout<<"\nEnter a book ID ="<<book_id;
    cout<<"\nEnter a book Name ="<<book_name;
    cout<<"\nEnter a book price ="<<book_price;
    }
};

void main()
{
  clrscr();
  book b1,b2;
  b1.get_book_info();
  b2.get_book_info();
  b2.display_book_info();
   b1.display_book_info();
  getch();

}