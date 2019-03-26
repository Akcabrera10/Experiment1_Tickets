#include<iostream>
#include <iomanip>
#include<conio.h>

using namespace std;

int main()
{
	double box, side, premium, genAd, total;
	cout<<"Ticket Prices\n" << endl;
	cout<<"Type:\t\t\tPrice" << endl;
	cout<<"Box\t\t\t250$" << endl;
	cout<<"Sideline\t\t100$"<< endl;
	cout<<"Premium\t\t\t50$"<< endl;
	cout<<"GenAd\t\t\t25$"<< endl;
	
	
	cout<<"\nTicket Sales\n";
	cout<<"\nPlease input number of tickets" << endl;
	cout<<"Box (250$): ";
	cin >> box;

	cout<<"Sideline (100$): ";
	cin>> side;

	cout<<"Premium (50$): ";
	cin>> premium;

	cout<<"Gen Ad (25$): ";
	cin>> genAd;
	
	cout<< "\nTotal Sold (in $) \n\n";
	cout<<"Box (250 X " << box << "): " << 250*box << "$" << endl;
	cout<<"Sideline (100$ X " << side << "): " << 100*side << "$" << endl;
	cout<<"Premium (50$ X " << premium << "): " << 50*premium << "$" << endl;
	cout<<"GenAd (25$ X " << genAd << "): " << 25*genAd << "$" << endl;

	
	total= (box*250)+(side*100)+(premium*50)+(genAd*25);
	cout<<"\nGrand total: "<<total << "$" <<endl;
	
	getch();
	return 0;	
}
