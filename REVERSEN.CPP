// Reverse a number

#include <iostream.h>
#include <conio.h>

void main()
{
	int num,rem,rev=0,temp;
	clrscr();
	cout<<"Enter a number to be reversed : ";
	cin>>num;
	temp=num;

	while(num>0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	cout<<temp<<" Reverse is "<<rev ;
	getch();

}