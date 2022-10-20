#include <iostream>
#include <string>
using namespace std;
class publication                     
{
   public:
   string title;
   float price;
   public:
   void getdata()
   {
      cout << "\nEnter Title: "; cin >> title;
      cout << "Enter price: "; cin >> price;
   }
   void putdata() const
   {
      cout << "\nTitle: " << title;
      cout << "\nPrice: " << price;
   }
};
class book : public publication      
{
   public:
   int pages;
   public:
   void getdata()
   {
      publication::getdata();
      cout << "Enter number of pages: "; cin >> pages;
   }
   void putdata() const
   {
      publication::putdata();
      cout << "\nPages: " << pages;
   }
};
class Tape : public publication     
{
   public:
   float time;
   public:
   void getdata()
   {
      publication::getdata();
      cout << "Enter playing time: "; cin >> time;
   }
   void putdata() const
   {
      publication::putdata();
      cout << "\nPlaying time: " << time;
   }
};
int main()
{
   book book1;                        
   Tape Tape1;
   book1.getdata();                   
   Tape1.getdata();
   book1.putdata();                   
   Tape1.putdata();
   cout << endl;
   return 0;
}