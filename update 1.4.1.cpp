#include <iostream>
#include <iomanip>

using namespace std;

void step1(int* room,int rnum,int &num1,int &num2,int &num3,int &num4)
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
            switch (room[i])
            {    
                case 1: 
                    num1++;
                    break;
                case 2: 
                    num2++;
                    break;
                case 3: 
                    num3++;
                    break;
                case 4: 
                    num4++;
                    break;
                    
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
                 
                 while(sur[j]==sur[k])
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
                way = 0;
                cout << "\tYou'd selected a transportation survice!!!. "<<endl;
                cout << "\tVan/limousine (500 Baht/Way)"<<endl;
                cout << "\tEnter Way(s): ";
                cin >> way;
                while(way<1)
                {
                    cout << "Invalid Way!!! Please Enter Again: ";
                    cin >> way;
                }
                cout << "\t**We will call you to ask a Flight.No , Arrival/Departure and Time Thank you.**"<<endl;
                cout << "----------------------------------------------------------------"<<endl;
                break;
            case 2:
                
                cout << "\tYou'd selected a Breakfast/Lunch/Dinner Tickets!!!. "<<endl;
                cout << "\t*********Tickets are valid for all meals.*********"<<endl;
                cout << "\tAdult: 600 Baht/meal ***** Children 200 Baht/meal."<<endl; 
                cout << "\tEnter Number of Adult ticket: ";
                cin >> atic;
                cout << "\tEnter Number of Children ticket: ";
                cin >> ctic;    
                cout << "----------------------------------------------------------------"<<endl;
                break;
            case 3:
                cout << "\tYou'd selected a Concierge services!!! . " << endl;
                cout << "\t***Concierge services(1000 Baht) Ready to serve!!***"<<endl;
                cout << "----------------------------------------------------------------"<<endl;
                break;
            case 4:
                cout << "\tYou'd selected an Excursions and guided tours!!!." << endl;
                cout << "\tFill the travel date(DD/MM/YY): ";
                cin.ignore();
                getline(cin,gdate);
                cout << "\tEnter the number of day(s)(500 Baht/days): ";
                cin >> gday;
                cout << "----------------------------------------------------------------"<<endl;
            
        }
       
    }
}
void step4(int num1,int num2,int num3,int num4,string* pro,int pronum,double discount,int day,int* sur,int snum,int way,int ctic,int atic,int gday)
{
    
    double sum=0,sum1=0,sum2=0;
    cout <<setw(55)<< "***************************"<<endl;
    cout <<setw(54)<< "Please Check Your Receipt"<<endl;
    cout <<setw(55)<< "***************************"<<endl;
    cout << "Types" << setw(40) << "Lists" << setw(40)<<"Prices(Baht)"<<endl;
    cout << "Room(s)"<<endl ;
    if(num1 !=0)
        {
            cout << setw(42) <<"- Normal Room: "<< num1 <<" x 1500"<<setw(31)<<num1*1500 << endl; 
            sum = sum+(num1*1500);
        }
    if(num2 !=0)
        {
            cout << setw(43) <<"- Superior Room "<< num2 <<" x 2200"<<setw(30)<<num2*2200<<endl; 
            sum = sum+(num2*2200);
        }
    if(num3 !=0)
        {
            cout << setw(41) <<"- Deluxe Room "<< num3 <<" x 3000"<<setw(32)<<num3*3000<<endl; 
            sum = sum+(num3*3000);
        }
    if(num4 !=0)
        {
            cout << setw(45) <<"- Executive Suite "<< num4 <<" x 4200"<<setw(28)<<num4*4200<<endl; 
            sum = sum+(num4*4200);
        }
    sum2 = sum*day;
    cout << setw(33) << "For " << day << " Night(s) " << sum <<" x "<<day<<setw(29)<<sum2<<endl;  
    if(sur[1]!=0&&snum!=0)
    {
        cout << "Survice(s)" << endl;
        for(int i=1;i<snum+1;i++)
        {
            switch (sur[i])
                {
                    case 1:
                        cout << setw(58) << "- Transportation(Airport-Hotel)"<<endl;
                        cout << setw(40) << "For "<< way <<" way(s): " << way << " x " <<"500" << setw(24) << way*500 <<endl;
                        sum1 = sum1 + (way*500);
                        break;
                    case 2:
                        cout << setw(59) << "- Breakfast/Lunch/Dinner Tickets"<<endl;
                        cout << setw(38) << "Children " << ctic <<" ticket(s): " << ctic <<"x "<<"200"<< setw(24) << ctic*200 <<endl;
                        cout << setw(38) << "Adult " << atic <<" ticket(s): " << atic <<"x "<<"600"<< setw(24) << atic*600 <<endl;
                        sum1 = sum1 + (ctic*200) +(atic*600);
                        break;
                    case 3: 
                        cout << setw(47) << "- Concierge services"<< setw(34) << "1000" <<endl;
                        sum1 = sum1 + 1000;
                        break;
                    case 4:
                        cout << setw(56) << "- Excursions and guided tours"<<endl;
                        cout << setw(33) << "For "<< gday <<" day(s): " << gday << " x " <<"500" << setw(31) << gday*500 <<endl;
                        sum1 = sum1 + (gday*500);
                        break;
                }
        }
        
    }
    else
    {
          cout << "Survice(s)" << setw(71) << "N/A"<<endl;
    }
    if(discount!=0)
    {
        double dis;
        dis = (discount/100)*(sum+sum1);
        cout << "Promotion" <<endl ;
        cout << setw(38) << "- Discount " << discount <<"%" << setw(36) << "-"<<dis <<endl;
        cout << "-------------------------------------------------------------------------------------"<<endl;
        cout << setw(43) << "Total Amount: " << setw(38) << (sum2+sum1)-dis <<endl;
        cout << "-------------------------------------------------------------------------------------"<<endl;
    }
    else
    {
        cout << "Promotion" << setw(72) << "N/A"<<endl;
        cout << "-------------------------------------------------------------------------------------"<<endl;
        cout << setw(43) << "Total Amount: " << setw(38) << sum2+sum1 <<endl;
        cout << "-------------------------------------------------------------------------------------"<<endl;
        
    }
    
}
int main()
{
    int rnum,num1=0,num2=0,num3=0,num4=0;
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
    	while(rnum < 1)
	{
		cout << "Invalid Input !!! Please fill again : ";
		cin >> rnum;
	}
	int room[rnum];
    step1(room,rnum,num1,num2,num3,num4);
    //--------------------step 2----------------------------------------------------------//
    string name,date,tel,email;
    int day,NumA,NumC;
    cout<<"****************************************************************" << endl;
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
    cout << "\t0. No survice need"<<endl<<"\t1. Transportation(Airport-Hotel)"<<endl<<"\t2. Breakfast/Lunch/Dinner Tickets"<<endl<<"\t3. Concierge services"<< endl <<"\t4. Excursions and guided tours"<<endl;
    cout << "How many survices do you want?: "; 
    cin >> snum;
    while(snum>4||snum<0)
            {
                cout << "Error Enter again(0-4): ";
                cin >> snum;
            }
    int sur[snum];
    if(snum==0)  
        {
            goto nextstep;
        }
    
    step3(sur,snum,way,atic,ctic,gdate,gday);
    //--------------------step 4----------------------------------------------------------//
    nextstep:
    double discount=0;
    int pronum=2;
    string pro[pronum]={"0000","1111"};
    string procode;
    cout<<"****************************************************************" << endl;
    cout << "***Step 4***: Receipt and Promotion." << endl;
    cout << "----------------------------------------------------------------"<<endl;
    cout << "Enter a Promotion code (if not have type 0): ";
    cin.ignore();
    getline(cin,procode);
    if(procode!="0")
   { 
       for(int i=0;i<2;i++)
        {
            if(procode==pro[i])
            {
                discount = 10;
                break;
            }
          
       }
  }    
    step4(num1,num2,num3,num4,pro,pronum,discount,day,sur,snum,way,ctic,atic,gday);
    //--------------------step 5----------------------------------------------------------//
    char check;
	cout<<"****************************************************************" << endl;
    cout << "***Step 5***: Check and Comfirm your information." << endl;
    cout << "----------------------------------------------------------------"<<endl;
    cout << "Please check the contact information again."<<endl;
    cout << endl;
	cout << "Check in date: " << date << endl;
	cout << "Reservation person: " << name << endl;
    cout << "Contact Number: "<<tel << endl;
    cout << "Contact email: "<<email << endl;
    cout << endl;
	cout << "Comfirm your infomation (y/n): " ;
    cin  >> check;
	while(check!='y'&&check!='n')
	{
		cout << "Invalid Confirm !!! Please Confirm again (y/n): ";
		cin >> check;
	}
	
	if(check == 'y')
	{
		cout << endl;
		cout << setw(60)<<"Thank you for using the survice. " <<endl;
		cout << "Please purchase the money via bank tranfer to account number 552552552 Siam Commercial Bank." <<endl;
		cout << "\t\t***When the payment is complete your reservation will be confirm.***";
	} 
    else
		{
		cout << endl;
		cout <<"\tThank you for using the survice .Please make the reservation again." <<endl;
		cout << "\t\t***Your reservation will be cancel***";
	}
}

