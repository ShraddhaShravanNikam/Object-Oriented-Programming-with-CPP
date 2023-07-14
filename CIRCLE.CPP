#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
  float r,c,a;
  clrscr();
  cout<<"\nEnter a Radius =";
  cin>>r;
  a=3.14*r*r;
  c=2*3.14*r;
  cout<<"\nArea of circle ="<<a;
  cout<<"\nCircumference of circle ="<<c;
  getch();
}