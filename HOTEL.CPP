#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>

class hotel
{
public:
long int mobile,rno;
char name[10],gen;
char bs[10];

void accept()
{
cout<<"\n Enter your Name:";
cin>>name;
cout<<"\n Enter Your Mobile Number:";
cin>>mobile;
cout<<"\n Enter your Gender(M/F)";
cin>>gen;
cout<<"\n Enter a Type Of Room:";
cin>>bs;
cout<<"\n Enter Room Rate =:3000";

}

void display()
{
cout<<"\n Name="<<name;
cout<<"\n mobile="<<mobile;
cout<<"\n Gender="<<gen;
cout<<"\n Type of Room="<<bs;
}
};

class second:public hotel
{
public:

void accept1()
{
cout<<"\n Ac Rooms";
cout<<"\n from 1-10";
cout<<"\n Starting from Rooms 10000rs";
cout<<"\n*****************************";
cout<<"\n Non-Ac Rooms";
cout<<"\n from 10-20";
cout<<"\n Starting from Rooms 5000rs";

}
};

void main()
{
second s;
int ch,a[10],n,i,b,flag=0,acc,c,p;
char ch3;
do
{
clrscr();
cout<<"\n \n \t \t \t Taj Hotel";
cout<<"\n Main Menu:";
cout<<"\n  1.Room Details";
cout<<"\n  2.Booking A Room.";
cout<<"\n  3.Edit Records.";
cout<<"\n  4.Room Canceling.";
cout<<"\n  5.Exit.";
cout<<"\n Enter your Choice";
cin>>ch;

switch(ch)
{
case 1:
       cout<<"\n \t \t\t ---Room Details---";
       s.accept1();
       break;
case 2:
       cout<<"n \t \t \t Booking a Room: ";
       cout<<"\n \t Enter Number of Rooms To Reserve:";
       cin>>n;
       s.rno=1;
       for(i=0;i<n;i++)
       {
	s.accept();
	s.display();
       cout<<"\n \t \t  ---Your Room is Booked---";

       cout<<"\n Room No is:"<<s.rno;
       s.rno++;

       p=s.rno;
       if(s.mobile<=10||s.mobile>=60)
	 cout<<"\n \t \t ---Your Room is Booked---";
	 }
       break;
case 3:
       cout<<"\n \t \t \t Change your Rooms details:";
       cout<<"\n Enter Your Room Number";
       cin>>c;
       s.rno--;
       for(i=0;i<n;i++)
       {
       if(s.rno==c)
       {
       flag=1;
       }
       else
       {
       flag=0;
       s.rno--;
       }
       }
       if(flag==1)
       {
       s.accept();
       cout<<"\n \t \t \t Your Room Information Has been Changed.";
       s.display();
       }
       else
       {
       cout<<"\n **Wrong Room Number**";
       s.rno--;
       }
       break;
case 4:
       cout<<"\n \t \t \t Room cancel: ";
       cout<<"\n Enter Your Room Number";
       cin>>b;
       p--;
       for(i=0;i<n;i++)
       {
       if(p==b)
       {
       flag=1;
       }
       else
       {
       flag=0;
       p--;
       }
       }
       if(flag==1)
       {
       cout<<"\n Your Room is Cancel.";
       cout<<"\n Enter Your Bank Account Number:";
       cin>>acc;
       cout<<"\n your Payment Transfer directly in  your bank account.";
       }
       else
       {
       cout<<"\n **Wrong Room Number**";
       p--;
       }
       break;
case 5:
       exit(0);
}
cout<<"\n Do you want to enter another Choice(y/n)";
ch3=getch();
}while(ch3=='y');
}