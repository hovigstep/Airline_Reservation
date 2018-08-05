#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

void main()
{
	int Choice;
	int MaxChoices;
	char Username[10];

	int PlaneCh;
	int Class;

	//Airbus seats  ********************
	struct Airbus {
		int i;
		int AB1c[20] = { NULL };

	};
	Airbus * Firstclass;
	Firstclass = 0;

	/*bool AB1c[20] = { false };*/

	struct Airbusines {
		int i;
		int ABbc[36] = { NULL };
	};
	Airbusines * busin;
	busin = 0;
	/*bool ABbc[36] = { false };*/
	struct AirEconomy {
		int i;
		int ABec[230] = { NULL };
	};
	AirEconomy * Econom;
	Econom = 0;
	/*bool ABec[230] = { false };*/




	//BOEIng seats **********************

	struct Boi1clas {
		int i;
		int Bo1c[40] = { NULL };
	};
	Boi1clas * boi1c;
	boi1c = 0;
	/*bool Bo1c[40] = { false };*/

	struct BoiBusines {
		int i;
		int Bobc[36] = { NULL };
	};
	BoiBusines * boibus;
	boibus = 0;
	/*bool Bobc[36] = { false };*/
	struct BoiEconomy {
		int i;
		int Boec[330] = { NULL };
	};
	BoiEconomy * boieco;
	boieco = 0;
	/*bool Boec[330] = { false };*/

	int i = 0;


	// set up your Maximum Choice here 
	MaxChoices = 10;
	// It creates a menu with 10 items
	Choice = 0;
	cout <<"Please Enter your First and Last Name:"<<endl;
	cin>> Username;
	while (Choice < MaxChoices)
	{

		cout <<"Welcome to Flight booking"<<endl;
		cout << Username<<endl;
		cout <<"************** MAIN MENU ****************"<<endl;
		cout <<"Please Enter one of the following Choices"<<endl;
		cout <<"************** MAIN MENU ****************"<<endl;
		cout <<"1 - Reservation"<<endl;
		cout <<"2 - Cancellation" << endl;
		cout <<"3 - View Seat Availability" << endl;

		cout <<"10: Exit Flight Booking";

		// Print Your choices here
		cin >> Choice;
		switch (Choice)
		{
		case 1:

			cout << "Reservation" << endl;
			cout << "************** MENU ****************" << endl;
			cout << "Please Enter The Airplane Of Choice:" << endl;
			cout << "1 - Airbus 300A " << endl;
			cout << "2 - Boeing 747 " << endl;
			cin >> PlaneCh;

			switch (PlaneCh)
			{
			case 1:

				cout << "Thank You for choosing The Airbus 300A" << endl;
				cout << "Please Enter The Class of your choice" << endl;
				cout << "1 - First Class " << endl;
				cout << "2 - Business Class " << endl;
				cout << "3 - Economy Class " << endl;
				cin >> Class;

				switch (Class)
				{
				case 1:
					cout << "Thank You for choosing First Class" << endl;
					cout << "Please Enter The Seat of your choice From Numbers 1-20" << endl;

					cin >> Firstclass->i;



					//printing

						if (Firstclass->i > 20 || Firstclass->i < 1)
						{
							cout << "Wrong Number Try Again !" << endl;
						}
						else
						{
							Firstclass->AB1c[i] = 1;
							cout << Username << " You have now been assigned seat " << Firstclass->i << endl;
						}

					
					break;






				case 2:
					cout << "Thank You for choosing Business Class" << endl;
					cout << "Please Enter The Seat of your choice From Numbers 21-56" << endl;
					cin >> busin->i;

					//printing
					if (busin->i > 56 || busin->i < 21)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						busin->ABbc[i] = 1;
						cout << Username <<" You have now been assigned seat " << busin->i <<endl;

						break;

				case 3:
					cout << "Thank You for choosing Economy Class" << endl;
					cout << "Please Enter The Seat of your choice From Numbers 56-286" << endl;
					cin >> Econom->i;

					//printing
					if (Econom->i > 56 || Econom->i < 286)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						Econom->ABec[i] = 1;
						cout << Username<< " You have now been assigned seat "<< Econom->i << endl;

					break;
				}


				break;

			case 2:

				cout << "Thank You for choosing The Boeing 747 " << endl;
				cout << "Please Enter The Class of your choice" << endl;
				cout << "1 - First Class " << endl;
				cout << "2 - Business Class " << endl;
				cout << "3 - Economy Class " << endl;
				cin >> Class;
				switch (Class)
				{
				case 1:
					cout << "Thank You for choosing First Class" << endl;
					cout << "Please Enter The Seat of your choice From Numbers 1-40" << endl;
					cin >> boi1c->i;

					//printing
					if (boi1c->i > 40 || boi1c->i < 1)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						boi1c->Bo1c[i] = 1;
						cout << Username<< " You have now been assigned seat "<< boi1c->i << endl;


					break;

				case 2:
					cout << "Thank You for choosing Business Class" << endl;
					cout << "Please Enter The Seat of your choice From Numbers 40-76" << endl;
					cin >> boibus->i;

					//printing
					if (boibus->i > 40 || boibus->i < 76)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						boibus->Bobc[i] = 1;
						cout << Username<< " You have now been assigned seat "<< boibus->i << endl;

					break;

				case 3:
					cout << "Thank You for choosing Economy Class" << endl;
					cout << "Please Enter The Seat of your choice From Numbers 76-406" << endl;
					cin >> boieco->i;

					//printing
					if (boieco->i > 76 || boieco->i < 406)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						boieco->Boec[i] = 1;
						cout << Username<<" You have now been assigned seat "<< boieco->i << endl;

					break;
				}


				break;
			}
			break;


			//CANCELLATION  CANCELLATION  CANCELLATION  CANCELLATION  CANCELLATION 
			//CANCELLATION  CANCELLATION  CANCELLATION  CANCELLATION  CANCELLATION 

		case 2:

			cout << "Cancellation" << endl;
			cout << "************** MENU ****************" << endl;
			cout << "Please Enter Airoplane Number" << endl;
			cout << "1 - Airbus 300A " << endl;
			cout << "2 - Boeing 747 " << endl;
			cin >> PlaneCh;

			switch (PlaneCh)
			{
			case 1:

				cout << "Please Enter The Class of your choice" << endl;
				cout << "1 - First Class " << endl;
				cout << "2 - Business Class " << endl;
				cout << "3 - Economy Class " << endl;
				cin >> Class;

				switch (Class)
				{
				case 1:

					cout << "Please Enter The Seat you wish to cancel 1-20" << endl;
					cin >> Firstclass->i;

					//printing
					if (Firstclass->i > 20 && Firstclass->i < 1)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						Firstclass->AB1c[i] = NULL;
					cout << Username<< " You Have now cancelled seat number"<< Firstclass->i << endl;

					break;

				case 2:

					cout << "Please Enter The Seat you wish to cancel From Numbers 21-56" << endl;
					cin >> busin->i;

					//printing
					if (busin->i > 56 || busin->i < 21)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						busin->ABbc[i] = NULL;
					cout << Username<< " You have now cancelled seat number "<< busin->i << endl;

					break;

				case 3:

					cout << "Please Enter The Seat you wish to cancel From Numbers 56-286" << endl;
					cin >> Econom->i;

					//printing
					if (Econom->i > 56 || Econom->i < 286)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						Econom->ABec[i] = NULL;
					cout << Username<< " You have cancelled seat number "<< Econom->i;

					break;
				}


			case 2:

				cout << "Please Enter The Class of your choice" << endl;
				cout << "1 - First Class " << endl;
				cout << "2 - Business Class " << endl;
				cout << "3 - Economy Class " << endl;
				cin >> Class;
				switch (Class)
				{
				case 1:

					cout << "Please Enter The seat you wish to cancel From Numbers 1-40" << endl;
					cin >> boi1c->i;

					//printing
					if (boi1c->i > 40 || boi1c->i < 1)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						boi1c->Bo1c[i] = NULL;
					cout << Username<< " You have now canceled seat number "<< boi1c->i << endl;


					break;

				case 2:

					cout << "Please Enter The Seat you wish to cancel From Numbers 40-76" << endl;
					cin >> boibus->i;

					//printing
					if (boibus->i > 40 || boibus->i < 76)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						boibus->Bobc[i] = NULL;
					cout << Username<<" You have now canceled seat number "<< boibus->i << endl;

					break;

				case 3:

					cout << "Please Enter The Seat you wish to cancel From Numbers 76-406" << endl;
					cin >> boibus->i;

					//printing
					if (boibus->i > 76 || boibus->i < 406)
					{
						cout << "Wrong Number Try Again !" << endl;
					}
					else
						boieco->Boec[i] = NULL;
					cout << Username<< " You have now canceled the seat number "<< boibus->i;

					break;
				}

			}
		
				break;


				//SEAT AVAILABILITY

			case 3:

				cout <<"Welcome To Seat Availability" << endl;
				cout <<"************** MENU ****************" << endl;
				cout <<"Please Enter Airoplane Number" << endl;
				cout <<"1 - Airbus 300A " << endl;
				cout <<"2 - Boeing 747 " << endl;
				cin >> PlaneCh;
				switch (PlaneCh)
				{
				case 1:



					cout <<" First Class Seats Available" << endl;
					cout <<"- Business Class Seats Available " << endl;
					cout <<"- Economy Class Seats Available " << endl;
					cout <<"- Total Available Seats" << endl;

					break;

				case 2:

					cout <<"- First Class Seats Available " << endl;
					cout <<"- Business Class Seats Available " << endl;
					cout <<"- Economy Class Seats Available " << endl;
					cout <<"- Total Available Seats" << endl;

					break;

					break;


				case 10:
					return;
				}
			}



		}
	}
