#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
void add();
void sub();
void mul();
void div();
void sqr();
void srt();
int main()
{
   int ope;
   do{
    cout<< "select any operation from the calsi"
    "\n1=Addition"
    "\n2=Subtraction"
    "\n3=Multiplication"
    "\n4=Division"
    "\n5=Square "
    "\n6=Square Root"
    "\n \n Select any number to perform the operation: ";
    cin>>ope;
    switch (ope)
    {
 case 1 : add();
 break;
 case 2 : sub();
 break;
  case 3 : div();
 break;
  case 4 : mul();
 break;
  case 5 : sqr();
 break;
  case 6 : srt();
 break;
 default:
 cout<< "Invalid operator";
 break;
    }
    cout<<"\n--------------------------------\n";

   }
   while (ope !=6); 
   getch();
}
void add()
{
    int n,sum=0,i,num;
    cout<< "How many numbers do you want to add:";
    cin>>n;
    cout<<"Please enter the number one by one:\n";
    for (i=1;i<=n;i++)
    {
        cin >> num ;
        sum=sum+num ;
     }
     cout << "\n Sum of the numbers= "<< sum;
}
void sub()
{
int num1,num2,res;
    cout<< "\n Enter the first number:";
    cin>>num1;
    cout<<"\n Enter the second number:" ;
    cin>>num2;
    res=num1-num2;
    cout<<"\n Subtraction of the number ="<<res;

}
void mul()
{
int num1,num2,result;
    cout<< "\n Enter the first number:";
    cin>>num1;
    cout<<"\n Enter the second number:" ;
    cin>>num2;
    result=num1*num2;
    cout<<"\n Multiplication of the number ="<<result;
}
void div()
{
    int num1,num2,d=0;
    cout<< "\n Enter the first number:";
    cin>>num1;
    cout<<"\n Enter the second number:" ;
    cin>>num2;
    while(num2==0)
    {
        cout<<"\n Please enter divisor onace again:";
        cin>>num2;
    }
    d=num1/num2;
    cout<<"\n Division of the number ="<<d;
}
void sqr ()
{
int num1;
float sq;
cout<<"\n Enter a number to find a square: ";
cin>> num1;
sq=num1*num1;
cout<< "\n square of << num1 << is: "<<sq;
}
void srt()
{
    float q;
    int num1;
    cout<<"\n Enter a number to find Square Root:";
    cin>> num1;
    q=sqrt(num1);
    cout<<"\n Square Root of " << num1<< " is :"<<q;

}


