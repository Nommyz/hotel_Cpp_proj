#include <iostream>
#include <iomanip>

using namespace std;

void step1(int* room,int rnum)
{
   for(int i=0;i<rnum;i++)
        {
            cout << "Select Type of room " << i+1 <<": ";
            cin >> room[i];
            while(room[i]>4||room[i]<1)
            {
                cout << "Error Enter again: ";
                cin >> room[i];
                
            }
        }
    
}
void step2(string &name,string &date,int &day,int &NumA,int &NumC,string &tel,string &email)
{
    cout << "Please enter the name of the reservation person: ";
    cin.ignore();
    getline(cin,name);
    cout << "Check in date(DD/MM/YY): ";
    getline(cin,date);
    cout << "Enter plan to stay(Night): ";
    cin >> day;
    cout << "No. Adult(s): ";
    cin >> NumA;
    cout << "No. Children(s): ";
    cin >> NumC;
    cout << "Contact Number: ";
    cin.ignore();
    getline(cin,tel);
    cout <<"Contact Email: ";
    getline(cin,email);
    
    
}
void step3(int* sur,int snum,int &way,int &atic,int &ctic,string &gdate,int &gday)
{
    for(int j=1;j<=snum;j++)
    {
       
        cout << "Select Type of survice(1-4) " << j << ": "; 
        cin >> sur[j];
          while(sur[j]>4||sur[j]<1)
            {
                cout << "Error Enter again(1-4): ";
                cin >> sur[j];
                
            }
        for(int k=0;k<j;k++)
               { 
                 
                 while(sur[j]==sur[k]&&k!=0)
                    {
                        
                        cout << "You'd successfully booked this survice!! please select other: ";
                        cin >> sur[j];
                        while(sur[j]>4||sur[j]<1)
                        {
                            cout << "Error Enter again(1-4): ";
                            cin >> sur[j];
                            
                        }
                     }
                    } 
      
        switch(sur[j])
        {
            case 1:
                cout << "\tYou'd selected a transportation survice!!!. "<<endl;
                cout << "\tVan/limousine (1200 Baht/Way)"<<endl;
                cout << "\tEnter Way(s): ";
                cin >> way;
                cout << "\t**We will call you to ask a Flight.No , Arrival/Departure and Time Thank you.**"<<endl;
                cout << "----------------------------------------------------------------"<<endl;
                break;
            case 2:
                
                cout << "\tYou'd selected a Breakfast/Lunch/Dinner Tickets!!!. "<<endl;
                cout << "\t*********Tickets are valid for all meals.*********"<<endl;
                cout << "\tAdult: 600 Baht/meal ***** Children 200 Baht/meal."<<endl; 
                cout << "\tEnter Number of Adult ticket: ";
                cin >> atic;
                cout << "Enter Number of Children ticket: ";
                cin >> ctic;    
                cout << "----------------------------------------------------------------"<<endl;
                break;
            case 3:
                cout << "\tYou'd selected a Concierge services!!! . " << endl;
                cout << "\t***Concierge services(1500 Baht) Ready to serve!!***"<<endl;
                cout << "----------------------------------------------------------------"<<endl;
                break;
            case 4:
                cout << "\tYou'd selected an Excursions and guided tours!!!." << endl;
                cout << "\tFill the travel date(DD/MM/YY): ";
                cin.ignore();
                getline(cin,gdate);
                cout << "\tEnter the number of day(s): ";
                cin >> gday;
                cout << "----------------------------------------------------------------"<<endl;
            
        }
       
    }
}
int main()
{
    int rnum;
    cout<<setw(90) << "******************************************************************" << endl;
    cout<<setw(73) << "**Welcome To HELLO WORLD Hotel.**" << endl;
    cout<<setw(74) << "This is a hotel reservation system." << endl;
    cout<<setw(90) << "******************Hope yot will get all the best******************" << endl;
    //--------------------step 1---------------------------------------------------------//
    cout<<"****************************************************************" << endl;
    cout << "***Step 1***: Select the room type." << endl;
    cout << "----------------------------------------------------------------"<<endl;
    cout << "Room Types:"<<endl;
    cout << "\t1. Normal Room"<<endl<<"\t2. Superior Room"<<endl<<"\t3. Deluxe Room"<< endl <<"\t4. Executive Suite"<<endl;
    cout << "How many rooms do you want?: ";
    cin >> rnum;
    int room[rnum];
    step1(room,rnum);
    cout<<"****************************************************************" << endl;
     //--------------------step 2----------------------------------------------------------//
    string name,date,tel,email;
    int day,NumA,NumC;
    cout << "***Step 2***: Enter your information." << endl;
    cout << "----------------------------------------------------------------"<<endl;
    step2(name,date,day,NumA,NumC,tel,email);
    //--------------------step 3----------------------------------------------------------//
    int snum,way,atic,ctic,gday;
    string gdate;
    cout<<"****************************************************************" << endl;
    cout << "***Step 3***: Hotel Survices." << endl;
    cout << "----------------------------------------------------------------"<<endl;
    cout << "Survice Types:"<<endl;
    cout << "\t1. Transportation(Airport-Hotel)"<<endl<<"\t2. Breakfast/Lunch/Dinner Tickets"<<endl<<"\t3. Concierge services"<< endl <<"\t4. Excursions and guided tours"<<endl;
    cout << "How many survices do you want?: "; 
    cin >> snum;
   while(snum>4||snum<0)
            {
                cout << "Error Enter again(1-4): ";
                cin >> snum;
            }
    int sur[snum];
    if(snum==0)  
        {
            goto nexttep;
        }
    
    step3(sur,snum,way,atic,ctic,gdate,gday);
    //--------------------step 4----------------------------------------------------------//
    nexttep:
        cout << "step 4";
    
}
