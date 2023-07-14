#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
char m;
class hostel
{
public:
char email[50],rno;
char name[50],gen;
char ds[10];

void accept()
{
cout<<"\n Enter your Name:";
cin>>name;
cout<<"\n Enter Your Email:";
cin>>email;
cout<<"\n Enter your Gender(M/F)";
cin>>gen;
cout<<"\nYour Hostel fee is 2500!!";
//cin>>ds;
}

void display()
{
cout<<"\n Name="<<name;
cout<<"\n mobile="<<mobile;
cout<<"\n Gender="<<gen;
cout<<"\n Hostel fee is=2500";
}
};

class second:public hostel
{
public:

void accept1()
{
cout<<"\n First Floor =";
cout<<"\n from 1-8  ";
cout<<"\n Annual Rent of room = 2000";
cout<<"\nMaximum 6 girls in Room...";
cout<<"\n***********";
cout<<"\n Second Floor=";
cout<<"\n from 8-16";
cout<<"\n Annual Rent of Room = 2000";
cout<<"\nMaximum 5 girls in Room...";
cout<<"\n************";
cout<<"\nThird Floor";
cout<<"\n from 16-24";
cout<<"\n Annual Rent of Room =2000";
cout<<"\nMaximum 4 girls in Room...";
cout<<"\n************";
cout<<"\n Fourth Floor";
cout<<"\n from 25-32";
cout<<"\n Annual Rent of Room =5000";
cout<<"\nMaximum 3 girls in Room...";
}
};

void main()
{
second s;
int ch,a[10],n,i,b,flag=0,acc,c,p;
char ch1,ch2,ch3;
do
{
clrscr();
cout<<"****************************************";
cout<<"\n \n \t \t \t Chandrabhaga Hostel ";
cout<<"\n Main Menu: ";
cout<<"\n  1.Room Details ";
cout<<"\n  2.Allocated Room.";
cout<<"\n  3.Edit Records.";
cout<<"\n  4.Hostel Admission Canceling.";
cout<<"\n  5.Exit.";
cout<<"\n****************************************";
cout<<"\n Enter your Choice";
cin>>ch;

switch(ch)
{
case 1:cout<<"\n****************************";
       cout<<"\n \t \t\t ---Room Details---";
       cout<<"\n****************************";
       s.accept1();
       break;
case 2:
       cout<<"\n*************************************";
       cout<<"\n \t \t \t Hostel Allocated  Room: ";
       cout<<"\n \t Your Allocated Room:";
       //cin>>n;
       n=1;
       cout<<n;
       s.rno=1;
       for(i=0;i<n;i++)
       {
	s.accept();
	s.display();
       cout<<"\n \t \t  ---Your Room is Allocated---";
       cout<<"\n**********************************";

       cout<<"\n Room No is:"<<s.rno;
       s.rno++;
       p=s.rno;
       if(s.mobile<=10||s.mobile>1)
	 cout<<"\n \t \t ---Your Room is Allocated---";
    cout<<"\n*************************************";
       }
       break;
case 3:
      cout<<"\n*************************************";
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
       cout<<"\n *Wrong Room Number*";
       s.rno--;
	    }
       cout<<"\n***************************************";
       break;
case 4:
       cout<<"\n*************************************";
       cout<<"\n \t \t \t Hostel Admission cancel: ";
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
       cout<<"\n --your Payment Transfer directly in  your bank account.--";
       }
       else
       {
       cout<<"\n *Wrong Room Number*";
       p--;
       }
    cout<<"\n***************************************";
       break;
case 5:
       exit(0);
}
cout<<"\n Do you want to enter another Choice(y/n)";
ch3=getche();
}while(ch3=='y');
getch();
}