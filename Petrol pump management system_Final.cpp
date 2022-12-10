#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<fstream>
#include <cstring>

using namespace std;
int main()
{ //main
system("cls");
fstream file,file1,file2,file3;
ofstream fout;
ifstream fin;
string pass,name,nam,nop;
int x,y;
char con,ch;
float pfp,price,tprice,tpfp;
 
 
    char  choice;
    cout<<"\n\t\t............... PETROL PUMP MANAGEMENT SYSTEM..............\n\n\t";
    cout<<"\n\t\t                    WELCOME:LOGIN HERE                \n\n\t";
    cout<<"\n\t\t.........................MENU..........................\n\n";
cout<<"\n\t1. Admin Login";
cout<<"\n\t2. Order Place";
cout<<"\n\t3. Check Detail";
cout<<"\n\t4. Delete Detail";
cout<<"\n\t5. Employee Details:";
cout<<"\n\t6. Exit";
cout<<"\n\n\t Enter your choice : ";
cin>>x;
switch(x)
{//switch
case 1:
system("cls");
cout<<"\n Enter admin password : ";
for(int i=1;i<=10;i++)
{//for
ch=getch();
pass+=ch;
cout<<"*";
}//for closing
if(pass=="RPP12378")
{//if
	system("cls");
cout<<"\n\t1. Enter New Product";
cout<<"\n\t2. Change in Product";
cout<<"\n\n\tEnter your choice : ";
cin>>y;
if(y==1)
{//if2
system("cls");
cout<<"\n Enter Product Name : ";
cin>>name;
cout<<"\n Enter Product Price : ";
cin>>price;
file.open("E:\\petrol.txt",ios::app|ios::out);
file<<" "<<name<<" "<<price<<"\n";
file.close();
}//if2 close
else if(y==2)
{//else if
system("cls");
cout<<"\n Enter Product Name : ";
cin>>nam;
file.open("E:\\petrol.txt",ios::in);
if(!file)
{//if3
cout<<"\n File Opening error";
file.close();
getch();
}//if3 close
file1.open("E:\\petrol1.txt",ios::app|ios::out);
file>>name>>price;
while(!file.eof())
{//while open
if(nam!=name)
{//if4
 file1<<" "<<name<<" "<<price<<"\n";
 }
file>>name>>price;
}//if4 close
file.close();
file1.close();
remove("E:\\petrol.txt");
rename("E:\\petrol1.txt","E:\\petrol.txt");
cout<<"\n Enter Product Name New : ";
cin>>name;
cout<<"\n Enter Product Price New : ";
cin>>price;
file.open("E:\\petrol.txt",ios::app|ios::out);
file<<" "<<name<<" "<<price<<"\n";
file.close();
}//else if close
else
{//else open
cout<<"Please select True Option";
getch();
}//else close
}
else
{//else open
cout<<"\n\n Your password is wrong!!!";
string pass;
}//else close
getch();
break;
case 2:
system("cls");
cout<<"\n Enter Product Name : ";
cin>>nop;
file.open("E:\\petrol.txt",ios::in);
if(!file)
{//if5
cout<<"\n File Opening error";
file.close();
getch();
}//if5 close
file>>name>>price;
while(!file.eof())
{//while open
if(nop==name)
{// if6
cout<<"\n Enter Price : ";
cin>>pfp;
for(float i=0;i<=pfp;i++)
{//for open
Sleep(200);
system("cls");
cout<<"\n Your Price : "<<i;
cout<<"\n Your Liters : "<<i/price;
cout<<"\n Price per liter : "<<price;
}//for close
Sleep(500);
system("cls");
cout<<"\n\n\t\t\t_____________ Your Bill Report_________";
cout<<"\n\t\t\t_________________________________";
cout<<"\n\t\t\t_________________________________";
cout<<"\n\n\t\t\tPrice ----------------------- "<<pfp;
cout<<"\n\t\t\tLitters --------------------- "<<pfp/price;
cout<<"\n\t\t\tPrice per Liter ------------ "<<price;
cout<<"\n\t\t\t_________________________________";
cout<<"\n\n\t\t\t Thank you for take our services";
cout<<"\n\t\t\t_________________________________";
file2.open("E:\\det.txt",ios::app|ios::out);
file2<<" "<<nop<<" "<<pfp<<" "<<pfp/price<<"\n";
file2.close();
}//if close
file>>name>>price;
}//while close
file.close();
getch();
break;
case 3:
system("cls");
cout<<"\n Enter Product Name : ";
cin>>nop;
file2.open("E:\\det.txt",ios::in);
if(!file2)
{//if 8
cout<<"\n File Opening error";
file2.close();
getch();
}//if8 close
file2>>name>>price>>pfp;
while(!file2.eof())
{//while open
if(nop==name)
{//if9 open
tprice+=price;
tpfp+=pfp;}//8
file2>>name>>price>>pfp;
}//while close
file2.close();
cout<<"\n Total Amount of Sales Product : "<<tprice;
cout<<"\n\n Total No. of Littres of Sales Product : "<<tpfp;
tprice=0;
tpfp=0;
getch();
;
break;
case 4:
system("cls");
cout<<"\n Do you want do all detail delete (y,n) : ";
cin>>con;
if(con=='y')
{//if10
cout<<"\n Enter admin password : ";
for(int i=1;i<=8;i++)
{//for
ch=getch();
pass+=ch;
cout<<"*";
}//for close
if(pass=="RPP12378")
{

remove("E:\\det.txt");
cout<<"\n\n Your file is deleted!!!";
}//if11 close
else
{
cout<<"\n\n Your password is wrong!!!";
string pass;
}//else close
}//if10 close
else
{
cout<<"\n Thank you your file is saved";
}// else close
getch();
case 5:
	
	struct Employee {
    char name[100],dept[5];
    int salary,employeeCode;
    
};
system("cls");




    Employee e;
     cout<< "Enter name of employee :\n "<<" "<<endl;
    cin>>e.name;
    cout<< "\n\t Enter Dept:"<<endl;
    cin>>e.dept;
    cout<<"\n\t Enter the Salary of the Employee:\t"<<endl;
    cin>>e.salary;
    cout<< "Enter employee code : ";
    cin>>e.employeeCode;
    file3.open("E:\\Ercords.txt" ,ios::app|ios::out);
    file3<<e.name<<e.dept<<e.salary<<e.employeeCode;
    file3.close();
    file3.open("E:\\Ercords.txt" ,ios::in);
    file3>>e.name>>e.dept>>e.salary>>e.employeeCode;
    file3.close();

     
    // Printing employee details 
    cout << "\n*** Employee Details ***" << endl;
    cout << "Name : " << e.name << endl << "Salary : " << e.salary << endl;
    cout << "Employee Code : " << e.employeeCode << endl << "Department : " << e.dept;
    getch();
case 6:
system("cls");
cout<<"\n\n\n\n\n\t\t\t  Thank you for using software";
cout<<"\n\n\n\t\t\tDesign By : RPP SOFT GROUP.\n\n\n";
break;
default:
cout<<"\nPlease Select True Option";
getch();
}
return 0;
}

