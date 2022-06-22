#include<iostream>
#include<fstream>
#iclude<iamanip>

using namespace std;

void mainMenu();

class Management{
	public:
		Management(){
			mainMenu()
		}
};

class Details{
	public:
		static string name, gender;
		int phoneNo, age;
		string address;
		static int  cId;
		char arr[100];
		
		void information(){
			coutMm"\n enter the coustmer ID : ";
			cin>>cId;
			cout<,"\n Enter the Name : ";
			cin>>name;
			cout<"\n Enter The age : ";
			cin>>age;
			cout<,"\n enter the address : ";
			cin>>address;
			cout<<"\n Enter the Gender";
			cin>>gender;
			cout<<"\n\n Your Details are Saved with us\n";
		}
};

int Details::cId;
string Details::name;
string Details::gender;

class registration{
	public:
		static int choice;
		int choice;
		int back;
		static float charges;
		
		void flights(){
			string flight[]={"Dubai", "Canada", "UK", "USA", "Austriallia", "Europe"};
			for(int i=0;i<6;i++){
				cout<<(i+1)<<". flight to"<<flight[i]<<endl;
			}
			cout<<"\n Welcome to the airlines\n"<<endl;
			cout<<"Press the number of the country to which you want to book flight : ";
			cin>>choice;
			swithc(choice){
				case 1 :
					{
						cout<,"\n_______________Welcome to Dubai Emirates________________\n";
						cout<<"\n Your comfort is our Priority, Enjoy the Journey\n";
						cout<<"Following are the Flights \n"<<endl
						cout<<"\n 1. Dub - 498"<<endl;
						cout<<"\t16-06-2022 at 00:12:00 10hrs Rs. 14000"<<endl;
						cout<<"\n 1. Dub - 432"<<endl;
						cout<<"\t16-06-2022 at 12:12:00 12hrs Rs. 18000"<<endl;
						cout<<"\n 1. Dub - 653"<<endl;
						cout<<"\t16-06-2022 at 8:24:00 6hrs Rs. 11000"<<endl;
						
						
						cout<<"\n enter the flight you want to Book : "<<endl;
						cin>>choice;
						
						if(choice == 1){
							charges = 14000;
							cout<<"\nYou Have sucessfully Booked a flight DUB - 498"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else if(choice == 2){
							charges = 18000;
							cout<<"\nYou Have sucessfully Booked a flight DUB - 432"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else if(choice==3){
							charges = 11000;
							cout<<"\nYou Have sucessfully Booked a flight DUB - 653"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else{
							cout<<"\n Invalid Input, shifting to the Previous Menu"<<endl
							flights();
						}
						
						cout<<"\n Press any key to go back to the mani Menu "<<endl;
						cin>>back;
						if(back==1){
							mainMenu();
						}else{
							mainMenu();
						}
						break;
					}
				case 2 : 
				{
					cout<,"\n_______________Welcome to Canada AirLines________________\n";
						cout<<"\n Your comfort is our Priority, Enjoy the Journey\n";
						cout<<"Following are the Flights \n"<<endl
						cout<<"\n 1. CA - 532"<<endl;
						cout<<"\t16-07-2022 at 14:12:00 10hrs Rs. 23000"<<endl;
						cout<<"\n 1. CA - 771"<<endl;
						cout<<"\t16-06-2022 at 16:12:00 12hrs Rs. 21000"<<endl;
						cout<<"\n 1. CA - 813"<<endl;
						cout<<"\t16-06-2022 at 17:24:00 6hrs Rs. 16000"<<endl;
						
						
						cout<<"\n enter the flight you want to Book : "<<endl;
						cin>>choice;
						
						if(choice == 1){
							charges = 23000;
							cout<<"\nYou Have sucessfully Booked a flight CA - 532"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else if(choice == 2){
							charges = 21000;
							cout<<"\nYou Have sucessfully Booked a flight CA - 771"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else if(choice==3){
							charges = 16000;
							cout<<"\nYou Have sucessfully Booked a flight CA - 813"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else{
							cout<<"\n Invalid Input, shifting to the Previous Menu"<<endl
							flights();
						}
						
						cout<<"\n Press any key to go back to the mani Menu "<<endl;
						cin>>back;
						if(back==1){
							mainMenu();
						}else{
							mainMenu();
						}
						break;
				}
				case 3 :
					{
						cout<,"\n_______________Welcome to UK AirWays________________\n";
						cout<<"\n Your comfort is our Priority, Enjoy the Journey\n";
						cout<<"Following are the Flights \n"<<endl
						cout<<"\n 1. Dub - 498"<<endl;
						cout<<"\t16-06-2022 at 00:12:00 10hrs Rs. 14000"<<endl;
						
						
						
						cout<<"\n enter the flight you want to Book : "<<endl;
						cin>>choice;
						
						if(choice == 1){
							charges = 14000;
							cout<<"\nYou Have sucessfully Booked a flight DUB - 498"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
					
						else{
							cout<<"\n Invalid Input, shifting to the Previous Menu"<<endl
							flights();
						}
						
						cout<<"\n Press any key to go back to the mani Menu "<<endl;
						cin>>back;
						if(back==1){
							mainMenu();
						}
						else{
							mainMenu();
						}
						break;
					}
					
				case 4 :
					{
						cout<,"\n_______________Welcome to US AirWays________________\n";
						cout<<"\n Your comfort is our Priority, Enjoy the Journey\n";
						cout<<"Following are the Flights \n"<<endl
						cout<<"\n 1. US - 817"<<endl;
						cout<<"\t27-06-2022 at 09:12:00 10hrs Rs. 34000"<<endl;
						cout<<"\n 1. US - 627"<<endl;
						cout<<"\t22-06-2022 at 11:12:00 12hrs Rs. 39000"<<endl;
						cout<<"\n 1. US - 253"<<endl;
						cout<<"\t16-06-2022 at 8:24:00 6hrs Rs. 51000"<<endl;
						
						
						cout<<"\n enter the flight you want to Book : "<<endl;
						cin>>choice;
						
						if(choice == 1){
							charges = 34000;
							cout<<"\nYou Have sucessfully Booked a flight US - 817"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else if(choice == 2){
							charges = 39000;
							cout<<"\nYou Have sucessfully Booked a flight US - 627"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else if(choice==3){
							charges = 51000;
							cout<<"\nYou Have sucessfully Booked a flight US - 51000"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else{
							cout<<"\n Invalid Input, shifting to the Previous Menu"<<endl
							flights();
						}
						
						cout<<"\n Press any key to go back to the mani Menu "<<endl;
						cin>>back;
						if(back==1){
							mainMenu();
						}else{
							mainMenu();
						}
						break;
					}
				case 5 : 
				{
					cout<,"\n_______________Welcome to Austriallia AirWays_______________\n";
						cout<<"\n Your comfort is our Priority, Enjoy the Journey\n";
						cout<<"Following are the Flights \n"<<endl
						cout<<"\n 1. AU - 216"<<endl;
						cout<<"\t19-06-2022 at 08:12:00 10hrs Rs. 29000"<<endl;
						cout<<"\n 1. AU - 319"<<endl;
						cout<<"\t17-06-2022 at 13:12:00 12hrs Rs. 32000"<<endl;
						cout<<"\n 1. AU - 353"<<endl;
						cout<<"\t16-06-2022 at 11:24:00 12hrs Rs. 41000"<<endl;
						
						
						cout<<"\n enter the flight you want to Book : "<<endl;
						cin>>choice;
						
						if(choice == 1){
							charges = 29000;
							cout<<"\nYou Have sucessfully Booked a flight AU - 216"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else if(choice == 2){
							charges = 32000;
							cout<<"\nYou Have sucessfully Booked a flight AU - 319"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else if(choice==3){
							charges = 41000;
							cout<<"\nYou Have sucessfully Booked a flight AU - 353"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else{
							cout<<"\n Invalid Input, shifting to the Previous Menu"<<endl
							flights();
						}
						
						cout<<"\n Press any key to go back to the mani Menu "<<endl;
						cin>>back;
						if(back==1){
							mainMenu();
						}else{
							mainMenu();
						}
						break;
				}
				
				case 6 :
					{
						cout<,"\n_______________Welcome to EURPEON AirLines________________\n";
						cout<<"\n Your comfort is our Priority, Enjoy the Journey\n";
						cout<<"Following are the Flights \n"<<endl
						cout<<"\n 1. EU - 498"<<endl;
						cout<<"\t16-06-2022 at 00:12:00 10hrs Rs. 36000"<<endl;
						cout<<"\n 1. EU - 432"<<endl;
						cout<<"\t16-06-2022 at 12:12:00 12hrs Rs. 30000"<<endl;
						cout<<"\n 1. EU - 653"<<endl;
						cout<<"\t16-06-2022 at 8:24:00 6hrs Rs. 32000"<<endl;
						
						
						cout<<"\n enter the flight you want to Book : "<<endl;
						cin>>choice;
						
						if(choice == 1){
							charges = 36000;
							cout<<"\nYou Have sucessfully Booked a flight EU - 498"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else if(choice == 2){
							charges = 30000;
							cout<<"\nYou Have sucessfully Booked a flight EU - 432"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else if(choice==3){
							charges = 32000;
							cout<<"\nYou Have sucessfully Booked a flight EU - 653"<<endl;
							cout<<"\n You can go back to menu and tacke the ticket"<<endl;
						}
						else{
							cout<<"\n Invalid Input, shifting to the Previous Menu"<<endl
							flights();
						}
						
						cout<<"\n Press any key to go back to the mani Menu "<<endl;
						cin>>back;
						if(back==1){
							mainMenu();
						}else{
							mainMenu();
						}
						break;
					}
					default : 
					{
						cout<<"\n Invalid Input, Shifting to the main Menu"<<endl;
						mainMenu();
						break;
					}
			}
		}
};

float registration::charges;
int registration::choice;

class ticket: public registration, Details{
	public:
		void bill(){
			string destination = "";
			ofstream outf("records.txt"){
				outf<<"____________XYZ AirLines___________"<<endl;
				outf<<"______________Tickets_____________"<<endl;
				outf<<"__________________________________"<<endl;
				
				outf<<"\nCustomer ID : "<<Details::cId<<endl;
				outf<<"\nCustomer Name : "<<Details::name<<endl;
				outf<<"\nCustomer Gender : "<<Details::gender<<endl;
				outf<<"\t Description : "<<endl<<endl;
				
				if(registration::choice == 1){
					destination = "Dubai";
				}
				else if(registration::choice == 2){
					destination = "Canada";
				}
				else if(registration::choice == 3{
					destination = "UK";
				}
				else if(registration::choice == 4){
					destination = "USA";
				}
				else if(registration::choice == 5){
					destination = "Austrillia";
				}
				else if(registration::choice == 6){
					destination = "Europe";
				}
				
				outf<<"\n Destination \t\t"<<destination<<endl;
				outf<<"\n Flight Cost : \t\t"<<registration::charges<<endl;
			}
			outf.close();
			
		}
		
		
		void disBill(){
			ifstream ifs("records.txt")
			{
				if(!ifs){
					cout<<"\nFile Error"<<endl;
				}
				while(!ifs.eof()){
					ifs.getline(arr, 100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
		
};

void mainMenu(){
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t               Qatar Airlines \n"<<endl;
	cour<<"\t__________Main Menu____________"<<endl;
	cour<<"\t________________________________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details    \t|"<<endl;
	cout<<"\t|\t Press 2 to for Flight Registration     \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and charges         \t|"<<endl;
	cout<<"\t|\t Press 4 to Exit                        \t|"<<endl;
	cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
	cout<<"\t______________________________________________"<<endl;
	
	cout<,"Enter the Choice : ";
	cin>>lchoice;
	 Details d;
	 registration r;
	 ticket t;
	 
	 switch(lchoice){
	 	case  1 :
	 		{
	 			cout<<"\n_____________Customers ___________\n"<<endl;
	 			d.information();
	 			cout<<"\n Press any key to back to Main Menu ";
	 			cin>>back;
	 			if(back==1){
	 				mainMenu();
				 }else{
				 	mainMenu()
				 }
				 break;
			 }
		case 2 :
			{
				cout<<"\n________Book a flight using the Sysytem_________\n"<<endl;
				r.flights();
				break;
			}
		case 3 :
			{
				cout<<"\n________Get Your Ticket______\n"<<endl;
				t.bill();
				
				cout<<"\n Your ticket is printed, you can collect it  \n"<<endl;
				cout<<"\n press 1 to display your ticket \n";
				cin>>back;
				if(back==1){
					t.display();
					cout<<"\n Press any key to go back to main menu\n";
					cin>>back;
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
				}
				else{
					mainMenu();
				}
				break;
			}
		case 4 :
			{
				cout<<"\n\n\t_______Thank You_______\n"<<endl;
				break;
	    	}
	    default  :
	    	{
	    		cout<<"\n Invalid Input, Please try again\n"<<endl;
	    		mainMenu();
	    		break;
			}
	 }
	
}


int main(){
	Manangement Mob;
	return 0;
}
