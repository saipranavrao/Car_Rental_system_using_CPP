#include <iostream>

using namespace std;
int a[4]={5,5,5,5},choice;
string s[4]={"HYUNDAI","SKODA","BENZ","AUDI"};
int price[4]={800,1000,3499,4499};
class customer
{
protected:
    static int inv_no;
   string customer_name,mobile_no,license_no,date;
   int no_days;
public:
    customer()
    {
        cout<<"\n\n\t\t\t\t\t---------------*************** CAR RENTAL SYSTEM *****************-----------------\n\n"<<endl;
    }
    void personal_details()
    {
        cout<<"\t\tENTER YOUR NAME: ";
        cin>>customer_name;
        cout<<"\n\t\tENTER YOU LICENSE NUMBER: ";
        cin>>license_no;
        cout<<"\n\t\tENTER YOUR MOBILE NO: ";
        cin>>mobile_no;
        cout<<"\n\n";
        inv_no++;

    }
    void vehicle_requirements()
    {
        cout<<"\t\tENTER NO. OF DAYS: ";
        cin>>no_days;
        cout<<"\n\t\tDATE OF BOOKING: ";
        cin>>date;
    }
};
int customer::inv_no;
class rent:public customer
{
      public:
        void check_availability(){
      cout<<"\n\t\tENTER MODEL OF CAR: ";
        cout<<"\n\t\t1)HYUNDAI(RS:800/DAY)\n\t\t2)SKODA(RS:1000/DAY)\n\t\t3)BENZ(RS:3499\DAY)\n\t\t4)AUDI(RS:4499/DAY)\n";
        cout<<"\n\t\tENTER YOUR CHOICE(1/2/3/4):";
        cin>>choice;
        choice--;
        cout<<"\n\t\t----->STATUS: "<<s[choice];
        switch(choice)
        {
        case 0:
            {
                if(a[choice]>0){ cout<<" IS AVAILABLE";
                a[choice]--;}
                else cout<<" NOT AVAILABLE";
                cout<<endl;
                break;
            }
        case 1:
            {
                  if(a[choice]>0){ cout<<" IS AVAILABLE";
                a[choice]--;}
                else cout<<" IS NOT AVAILABLE";
                 cout<<endl;
                break;
            }
        case 2:
            {
                  if(a[choice]>0){ cout<<" IS AVAILABLE";
                a[choice]--;}
                else cout<<" IS NOT AVAILABLE";
                 cout<<endl;
                break;
            }
            case 3:
            {
                  if(a[choice]>0){ cout<<" IS AVAILABLE";
                a[choice]--;}
                else cout<<" IS NOT AVAILABLE";
                 cout<<endl;
                break;
            }
        }
    }
     void display()
    {
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t-------------------********************* INVOICE *********************----------------\n\n"<<endl;
        cout<<"\t\t---->  INVOICE NO: "<<inv_no<<"\n\n";
        cout<<"\t\t---->  CUSTOMER NAME: "<<customer_name<<"\n\n";
        cout<<"\t\t---->  CUSTOMER LICENSE NO: "<<license_no<<"\n\n";
        cout<<"\t\t---->  NO OF DAYS: "<<no_days<<"\n\n";
        cout<<"\t\t---->  CAR CHOSEN: "<<s[choice]<<"\n\n";
        cout<<"\t\t---->  DATE OF BOOKING: "<<date<<"\n\n";
        cout<<"\t\t---->  TOTAL RENT FOR "<<no_days<<" DAYS: "<<no_days*price[choice]<<"\n\n";
        cout<<"\n\n\t\t\t\t\t---------THANKU VISIT AGAIN----------\n";
    }
};

int main()
{
    int c;
   do{
    rent r;
    cout<<"\t\t--->ENTER YOUR DETAILS: \n\n";
    r.personal_details();
     cout<<"\t\t--->ENTER VEHICLE REQUIREMENTS:\n\n";
    r.vehicle_requirements();
    r.check_availability();
    r.display();
    cout<<"\t\t DO YOU WANT TO RENT ONE MORE CAR (1/0): ";
   cin>>c;
   }while(c);
    return 0;
}
