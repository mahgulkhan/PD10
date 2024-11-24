#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
using namespace std;
//Functions that I have used:
void gotoxy(int,int);
void menu();
void emenu();
int loginscr();
int acredentials();
int ucredentials();
int admin();
int user();
int choice1();
int choice2();
int choice3();
int choice4();
int choice5();
int choice6();
int selectedopt();
int uchoice1();
int uchoice2();
int uchoice3();
int uchoice4();
int uchoice5();
int uchoice6();
int uselectedopt();
//Functions to check username and password validity
bool validusername(string);
bool validpass(int);
// Arrays that I have used:
const int maxlength=100;
string usernames[maxlength]={"MahGul","Ahmad","Fatima"};
string admins[maxlength]= {"Maryam","Aliyah"};
int upasswords[ maxlength]={12345,23456,34567};
int apasswords[ maxlength]= {45678,56789,};
string stock[ maxlength]={"Canvas","Brushes","Base","Paints","Crayons","Resin","Easel","Pencils","Artbook","Colors"};
int stckquant[ maxlength]={10,12,3,34,23,4,10,19,20,40};
int stckprice[ maxlength]={200,50,350,80,75,110,500,30,75,30};
//Global variables that I have used:
int login,opt,op,uchoice=0,choice=0;
int x1=20,y1=11;


//Main
int main()
{
    system("cls");
    system("color B5");
    menu();
    gotoxy(20,11);
    {
        cout << "PRESS ANYWHERE TO CONTINUE."<< endl;
    }
    Sleep(200);
    getch();
    //Login Function
    loginscr();
    if (login==1)
    {
        //admin credentials
        acredentials();
    }
    else if (login==2)
    {
        //user credentials
        ucredentials();
    } 
    //Admin Functionalities
    while(uchoice!=6)
    {
  
    if (uchoice==1)
    {
        uchoice1();
    }
    else if (uchoice==2)
    {
        uchoice2();
    }
    else if (uchoice==3)
    {
        uchoice3();
    } 
    else if (uchoice==4)
    {
        uchoice4();
    }
    else if (uchoice==5)
    {
        uchoice5();
    }
    else 
    {
        uchoice6();
    }           
    }
   
}
bool validusername(string usr)
{
    if (usr=="")
    {
        return false;
    }
    for (int i=0;usr[i]!='\0';i++)
    {
        if (usr[i]==' ')
        {
            return false;
        }
    }
    for(int y=0;usr[y]!='\0';y++)
    {
        char check=usr[y];
        if (!((check >='A'&& check <='Z') || (check >='a'&& check<='z')))
        {
            return false;
        }
    }
    return true;
}
bool validpass(int key)
{
    if (key <10000 || key >99999)
    {
        return false;
    }
    return true;
}
//Header
void menu()
{
gotoxy(1,0);
cout << "  _________________________________________________________________________________________________________________________________________ " << endl;
gotoxy(1,1);
cout << " | ....................................................................................................................................... | " << endl;
gotoxy(1,2);
cout << " | :                                                                                                                                     : | " << endl;
gotoxy(1,3);
cout << " | :  $$$$$    $$$$$   $$$$      $$$$$   $$$$$$          $$$$$  $$$$$$  $$$$$$$   $$$$$   $$$$$$$$  $$$$$$    $$$$  $$$$  $$$$      $$$$ : | " << endl;
gotoxy(1,4);
cout << " | : $$   $$  $$   $$   $$      $$   $$   $$  $$        $$   $$  $$  $$  $$  $$  $$   $$  $$ $$ $$   $$  $$    $$    $$    $$ $$  $$ $$  : | " << endl;
gotoxy(1,5);
cout << " | : $$       $$   $$   $$      $$   $$   $$  $$        $$       $$  $$  $$      $$          $$      $$  $$    $$    $$    $$  $$$$  $$  : | " << endl;
gotoxy(1,6);
cout << " | : $$       $$   $$   $$      $$   $$   $$$$$           $$$$   $$$$$   $$$$    $$          $$      $$$$$     $$    $$    $$   $$   $$  : | " << endl;
gotoxy(1,7);
cout << " | : $$       $$   $$   $$      $$   $$   $$ $$              $$  $$      $$      $$          $$      $$  $$    $$    $$    $$        $$  : | " << endl;
gotoxy(1,8);
cout << " | : $$   $$  $$   $$   $$  $$  $$   $$   $$  $$        $$   $$  $$      $$  $$  $$   $$     $$      $$   $$   $$    $$    $$        $$  : | " << endl;
gotoxy(1,9);
cout << " | :  $$$$$    $$$$$   $$$$$$$   $$$$$   $$$   $$$       $$$$$  $$$$    $$$$$$$   $$$$$      $$     $$$    $$$  $$$$$$    $$$$      $$$$ : | " << endl;
gotoxy(1,10);
cout << " | :                                                                                                                                     : | " << endl;
gotoxy(1,11);
cout << " | :                                                                                                                                     : | " << endl;
gotoxy(1,12);
cout << " | :                                                                                                                                     : | " << endl;
gotoxy(1,13);
cout << " | :                                                                                                                                     : | " << endl;               
gotoxy(1,14);
cout << " | :                                                                                                                                     : | " << endl;               
gotoxy(1,15);
cout << " | :.....................................................................................................................................: | " << endl;
gotoxy(1,16);
cout << " |_________________________________________________________________________________________________________________________________________| " << endl;
}
void emenu()
{
    gotoxy(1,0);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,1);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,2);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,3);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,4);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,5);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,6);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,7);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,8);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,9);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,10);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,11);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,12);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,13);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,14);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,15);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,16);
    cout<<"                                                                                                                                            "<< endl;

}
int loginscr()
{
    system("cls");
    gotoxy(x1,y1);
    cout << "Your Identity: "<< endl;
    gotoxy (x1,y1+1);
    cout << "1-Admin" <<endl;
    gotoxy(x1,y1+2);
    cout << "2-User" <<endl;
    gotoxy(x1,y1+3);
    cin >> login ;
    return login;
}
int acredentials()
{
    system("cls");
    gotoxy(x1,y1);
    int o,key;
    string usr;
    cout << "Enter your username: ";
    cin >> usr;
    if (validusername(usr))
    {
        gotoxy(x1,y1+1);
        cout << "Enter your password: ";
        cin >> key;
        if(validpass(key))
        {
            for (int x=0;x<10;x++)
            {
                if (usr==admins[x] && key==apasswords[x])
                {
                    admin();
                    return 1;
                }
            }
             gotoxy(x1,y1+3);
            cout << "Wrong username or password.";
            gotoxy(x1,y1+4);
            cout << "1-Go back to login screen." << endl;
            gotoxy(x1,y1+5);
            cout << "2-Exit." << endl;   
            gotoxy(x1,y1+6);
            getch();
            cin >> o;
            if (o==1)
            {
                loginscr();
            }
            else if (o==2)
            {
                exit (0);
            }
        }
        else if(!validpass(key))
        {
            gotoxy(x1,y1+2);
            cout << "Invalid username or password.";
        }
    }
    else if (!validusername(usr))
    {
        gotoxy(x1,y1+2);
        cout << "Invalid username or password.";
    }
    return o; 
}
int ucredentials()
{
    system("cls");
    gotoxy(x1,y1);
    cout << "1-Log in if you already have an account."<<endl;
    gotoxy(x1,y1+1);
    cout <<"2-Create new account." <<endl;
    int log,o,key;
    string usr;
    gotoxy(x1,y1+2);
    cin >> log;
    if (log==1)
    {
        system("cls");
        gotoxy(x1,y1);
        cout << "Enter your username: ";
        cin >> usr;
        if (validusername(usr))
        {
            gotoxy(x1,y1+1);
            cout << "Enter your password: ";
            cin >> key;
            if(validpass(key))
            {
                for (int x=0;x<10;x++)
                {
                    if (usr==usernames[x] && key==upasswords[x])
                    {
                        user();
                        return 1;
                    }
                }
                gotoxy(x1,y1+3);
                cout << "Wrong username or password.";
                gotoxy(x1,y1+4);
                cout << "1-Go back to login screen." << endl;
                gotoxy(x1,y1+5);
                cout << "2-Exit." << endl;   
                gotoxy(x1,y1+6);
                getch();
                cin >> o;
                if (o==1)
                {
                    loginscr();
                }
                else if (o==2)
                {
                    exit (0);
                }
            }
            else if(!validpass(key))
            {
                gotoxy(x1,y1+2);
                cout << "Invalid username or password.";
            }
        }
        else if (!validusername(usr))
        {
        gotoxy(x1,y1+2);
        cout << "Invalid username or password.";
        }
    }
    else if (log==2)
    {
        system("cls");
        gotoxy(x1,y1);
        string newuser;
        int newuserpass;
        cout << "Create a username: ";
        gotoxy(x1,y1+1); 
        cin >> newuser;
        if(validusername(newuser))
        {
            gotoxy(x1,y1+2); 
            cout << "Create a password: ";
            gotoxy(x1,y1+3);
            cin >> newuserpass;
            if(validpass(newuserpass))
            {
                gotoxy(x1,y1+4);
                cout << "Congratulations on signing up!.";
            }
            else if (!validpass(newuserpass))
            {
                gotoxy(x1,y1+4);
                cout << "Invalid Paswword. Your password must consist of 5 digits. Try again.";
                gotoxy(x1,y1+5);
                cin >> newuserpass;
            }
        }
        else if (!validusername(newuser))
        {
            gotoxy(x1,y1+2); 
            cout << "Invalid username. Try again." << endl;
            gotoxy(x1,y1+3); 
            cin >> newuser; 
            gotoxy(x1,y1+4); 
            cout << "Create a password: ";
            gotoxy(x1,y1+5); 
            cin >> newuserpass;

            if(validpass(newuserpass))
            {
                gotoxy(x1,y1+6); 
                cout << "Congratulations on signing up!.";
            }
            else if (!validpass(newuserpass))
            {
                gotoxy(x1,y1+6); 
                cout << "Invalid Paswword. Your password must consist of 5 digits. Try again.";
                gotoxy(x1,y1+7); 
                cin >> newuserpass;
            }
        }
    }  
        gotoxy(x1,y1+8);
        cout << "1-Go to home page." << endl;
        gotoxy(x1,y1+9);
        cout << "2-Exit application." << endl;
        int select;
        gotoxy(x1,y1+10);
        cin >> select;
        if (select ==1)
        {
            system("cls");   
            selectedopt();
        }
        else if (select==2)
        {
            exit (0);
        }
    return log;
}  
int admin()
{
    int uchoice= uselectedopt();
    return uchoice;
}
int user()
{
    int userchoice= selectedopt();
    return userchoice;
}

int selectedopt()
{ 
    system ("cls");
    gotoxy(x1,y1);
    cout << "CHO0SE ANY OF THE FOLLOWING OPTIONS: \n 1-APPLY FOR MEMBERSHIP CARD \n 2-VIEW AVAILABLE ART STOCK \n 3-ORDER PAINTING \n 4-BUY ART SUPPLIES  \n 5-RATE OUR SERVICE \n 6-EXIT"<< endl;
    cout << "Selected option:";
    cin >> choice;
     //User Functionalities
    while(choice!=6)
    {
    
    if (choice==1)
    {
        choice1();
        getch();
    }
    else if (choice==2)
    {
        choice2();
        getch();
    }
    else if (choice==3)
    {
        choice3();
        getch();
    }
    else if (choice==4)
    {
        choice4();
        getch();
    }
    else if (choice==5)
    {
        choice5();
        getch();
    }
    else 
    {
        choice6();
        getch();
    }
    }
   
    return choice;
}
int choice1()
{
    system("cls");
    int apply;
    cout << "APPLY FOR MEMBERSHIP CARD" << endl;
    cout << "Press 1 to apply \nPress 0 to go back to main menu.\nPress 2 to Exit application." << endl;
    cin >> apply;
    if (apply==1)
    {
        cout << "Thank you for applying for our membership card. You will receive it soon :)" << endl;
    }
    else if (apply==0) 
    {
        system("cls");
        selectedopt(); 
    }
    else
    {
        return 0;
    }
    return apply;
}
int choice2()
{
    emenu();
    system ("cls");
    int op;
    cout << "VIEW AVAILABLE ART STOCK:"<<endl;
    cout << "NAME\t\t\t\tQUANTITY\tPRICE(per item)" << endl;
    for (int i=0;i<10;i++)
    {
        cout << stock[i] << "\t\t\t\t" << stckquant[i] <<"\t\t" << stckprice[i] << endl;
    }
    cout << " " <<endl;
    cout << "1-Go to main menu \n2-Exit application" << endl;
    cin >> op;
    if (op==1)
    {
        system("cls");
        selectedopt();
    }
    else
    {
        system("cls");
        return 0;
    }
    return op;
}
int choice3()
{
    emenu();
    system ("cls");
    string title, add, method;
    gotoxy(x1,y1);
    cout << "BUY ART-WORK."<<endl;
    cout << "Enter painting title(must be a single title):";
    cin >> title;
    cout << "Enter adress:";
    cin >> add;
    cout << "Enter payment method :";
    cin >> method;
    cout<<"Your order has been placed succesfully!" << endl;
    int option;
    cout << "1-Go to main menu \n2-Exit application" << endl;
    cin >> option;
    if (option==1)
    {
        system("cls");
        selectedopt();
    }
    else
    {
        system("cls");
        return 0;
    }
    return option;
}
int choice4()
{
    emenu();
    system("cls");
    string quant,title, add, method;
    gotoxy(x1,y1);
    cout << "BUY ART SUPPLIES" << endl;
    cout << "Enter Product name:";
    cin >> title;
    cout << "Enter quantity: ";
    cin >> quant;
    cout << "Enter adress:";
    cin >> add;
    cout << "Enter payment method :";
    cin >> method;
    cout<<"Your order has been placed succesfully!" << endl;
    int option;
    cout << "1-Go to main menu \n2-Exit application" << endl;
    cin >> option;
    if (option==1)
    {
        system("cls");
        selectedopt();
    }
    else
    {
        system("cls");
        return 0;
    }
     return option;
}
int choice5()
{
    system("cls");
    int star,back;
    gotoxy(x1,y1);
    cout << "RATE OUR SERVICE" << endl;
    cout << "Press 0 to go to menu or to exit application."<< endl;
    cout << "On a scale of 1-5, how much satisfaied are you with our service(Enter 1-5 stars *): ";
    cin >> star;
    if (star>=1 && star <=5)
    {
        cout << "Thank you for your opinion, we will try to further improve our service."<<endl;
        return 0;
    }
    else if(star==0)
    { 
        cout << "1-Go to main menu \n2-Exit application"<< endl;
        cin >> back;
        if (back==1)
        {
            system("cls");
            selectedopt();
        }
        else if (back==2)
        {
            system("cls");
            return 0;
        }
    }
    return back;
}
int choice6()
{
    return 0;
}
int uselectedopt()
{
    system ("cls");
    gotoxy(x1,y1);
    cout << "CHO0SE ANY OF THE FOLLOWING OPTIONS: \n1-ADD STOCK \n2-VIEW ADDED ART STOCK \n3-REMOVE PARTICULAR STOCK  \n4-TRACE ANY ITEM FROM THE STOCK\n5-UPDATE STOCK \n6-EXIT"<< endl;
    cout << "Selected option:";
    cin >> uchoice;
    return uchoice;
}
int uchoice1()
{
    system("cls");
    gotoxy(x1,y1);
    cout << "ADD STOCK"<< endl;
    int numofitems;
    cout << "Enter the number of items you want to enter:";
    cin >> numofitems;
    for (int i=10; i<numofitems+10; i++)
    {
       
       cout << "Enter name of item number "<<i-9<<": ";
       cin >> stock[i];
       cout << "Enter quantity: ";
       cin >> stckquant[i];
       cout << "Enter price: ";
       cin >> stckprice[i];

    }
    cout << "1-Go to main menu \n2-Exit application" << endl;
    int op;
    cin >> op;
    if (op==1)
    {
        system("cls");
        uselectedopt();
    }
    else
    {
        system("cls");
        uchoice3();
    }
    return op;
}
int uchoice2()
{
    system("cls");
    cout << "VIEW ADDED ART STOCK"<< endl;
    cout << "NAME\tQUANTITY\tPRICE(per item)" << endl;
    for (int i=0;stock[i]!="\0";i++)
    {
        cout << stock[i] << "\t\t\t\t" << stckquant[i] <<"\t\t" << stckprice[i] << endl;
    }
    cout << " " << endl;
    cout << "1-Go to main menu \n2-Exit application" << endl;
    cin >> op;
    if (op==1)
    {
        system("cls");
        uselectedopt();
    }
    else
    {
        return 0;
    }
    return op;
}
int uchoice3()
{
    emenu();
    system("cls");
    string todel;
    int updated;
    gotoxy(x1,y1);
    cout << "REMOVE STOCK" << endl;
    cout << "Enter the name of the item you want to remove: ";
    cin >> todel;
    for (int i=0;i<100;i++)
    {
        if (stock[i]==todel)
        {
            stock[i]=" ";
            stckprice[i]=0;
            stckquant[i]=0;
            cout << "The selected item has been deleted." << endl;
            cout << "1-Go to main menu. \nEnter 0 to Exit applictaion."<< endl;
            cin >> updated;
            if(updated==1)
            {
                uselectedopt();
            }
            else
            {
                exit(0);
            }
        }
    }
    cout << "The selected item is not found in available stock.";
    return updated;
}
int uchoice4()
{
    emenu();
    system("cls");
    string toupdate;
    int updated;
    gotoxy(x1,y1);
    cout << "TRACE ANY ITEM FROM STOCK" << endl;
    cout << "Enter the name of the item you want to trace: ";
    cin >> toupdate;
    for (int i=0;i<100;i++)
    {
        if (stock[i]==toupdate)
        {
            cout << "The selected item is present." << endl;
            cout << "1-Go to main menu. \nEnter 0 to Exit applictaion."<< endl;
            cin >> updated;
            if(updated==1)
            {
                uselectedopt();
            }
            else
            {
                exit(0);
            }
        }
    }
    cout << "The selected item is not found in available stock.";
    return updated;
}
int uchoice5()
{
   emenu();
    system("cls");
    string todel;
    int newprice,newquant;
    int updated;
    gotoxy(x1,y1);
    cout << "UPDATE STOCK" << endl;
    cout << "Enter the name of the item you want to update: ";
    cin >> todel;
    cout << "Enter the new quantity: ";
    cin >> newquant;
    cout << "Enter the new price: ";
    cin >> newprice;
    for (int i=0;i<100;i++)
    {
        if (stock[i]==todel)
        {
            stckprice[i]=newprice;
            stckquant[i]=newquant;
            cout << "The selected item has been updated." << endl;
            cout << "1-Go to main menu. \nEnter 0 to Exit applictaion."<< endl;
            cin >> updated;
            if(updated==1)
            {
                uselectedopt();
            }
            else
            {
                exit(0);
            }
        }
    }
    cout << "The selected item is not found in available stock.";
    return updated;
}
int uchoice6()
{
    exit(0);
}
void gotoxy(int x,int y)
{ 
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}