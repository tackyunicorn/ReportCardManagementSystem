#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<process.h>
#include<windows.h>

using namespace std;

/***********************DECLARING FUNCTION HEADERS***********************/
  void Password();
  void Teacher();
  void Student();
  void Public();

class STUDENT{
      private:
      char name[50];
      char fname[50];
      char mname[50];
      char date[15];
      char telno[15];
      int sclass;
      char div;
      int rno;
      char stream;
      float marks[5];
      char sec_code[5];
      int attct;
      float per;
      char grade;
      void getper()
      {
           per=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
      }
      void getgrade()
      {
           if(per>=80)
           grade='A';
           else if((per>=60)&&(per<=79))
           grade='B';
           else if((per>=40)&&(per<=59))
           grade='C';
           else if((per>=35)&&(per<=39))
           grade='D';
           else if(per<35)
           grade='E';
      }   
      public:
      void enter()
      {
           cout<<"\t\t\t  -------------------------------"<<"\n";
           cout<<"\t\t\t     ENTER THE STUDENT DETAILS"<<"\n";
           cout<<"\t\t\t  -------------------------------"<<"\n\n";
           cout<<"\t\tNAME OF THE STUDENT    : ";
           cin.ignore();
           cin.getline(name,50);
           cout<<"\t\tFATHER'S NAME          : ";
           cin.getline(fname,50);
           cout<<"\t\tMOTHER'S NAME          : ";
           cin.getline(mname,50);
           cout<<"\t\tDATE OF BIRTH(DD/MM/YY): ";
           cin.getline(date,15);
           cout<<"\t\tTELEPHONE NUMBER       : ";
           cin.getline(telno,15);
           cout<<"\t\tSECURITY CODE          : ";
           cin.getline(sec_code,5);
           cout<<"\t\tCLASS                  : ";
           cin>>sclass;
           cout<<"\t\tDIVISION               : ";
           cin>>div;
           cout<<"\t\tROLL NUMBER            : ";
           cin>>rno;
           cout<<"\t\tDAYS PRESENT           : ";
           cin>>attct;
           cout<<"\n\t\tSTREAM('C' FOR COMPUTER OR 'B' FOR BIOLOGY): ";
           cin>>stream;
           cout<<"\n";
           if(stream=='C')
           {
              cout<<"\t\t\t  -----------------------------"<<"\n";
              cout<<"\t\t\t     ENTER THE SUBJECT MARKS"<<"\n";
              cout<<"\t\t\t  -----------------------------"<<"\n\n";
              cout<<"\t\t\t       PHYSICS    : ";
              cin>>marks[0];
              cout<<"\t\t\t       CHEMISTRY  : ";
              cin>>marks[1];
              cout<<"\t\t\t       MATHEMATICS: ";
              cin>>marks[2];
              cout<<"\t\t\t       COMPUTER   : ";
              cin>>marks[3];
              cout<<"\t\t\t       ENGLISH    : ";
              cin>>marks[4];
           }     
           else
           {
              cout<<"\t\t\t  -----------------------------"<<"\n";
              cout<<"\t\t\t     ENTER THE SUBJECT MARKS"<<"\n";
              cout<<"\t\t\t  -----------------------------"<<"\n\n";
              cout<<"\t\t\t       PHYSICS    : ";
              cin>>marks[0];
              cout<<"\t\t\t       CHEMISTRY  : ";
              cin>>marks[1];
              cout<<"\t\t\t       MATHEMATICS: ";
              cin>>marks[2];
              cout<<"\t\t\t       BIOLOGY    : ";
              cin>>marks[3];
              cout<<"\t\t\t       ENGLISH    : ";
              cin>>marks[4];
           }
           cout<<"\n\n";
           getper();
           getgrade();
      }
      void display_report()
      {
           cout<<"----------------------------------------";
           cout<<"---------------------------------------\n";
           cout<<"                        THE EMIRATES NATIONAL SCHOOL\n\n";
           cout<<"                             STUDENT REPORT CARD\n";
           cout<<"----------------------------------------";
           cout<<"---------------------------------------\n\n";
           cout<<"                         ------------------------\n";
           cout<<"                             PERSONAL DETAILS\n";
           cout<<"                         ------------------------\n\n";
           cout<<"NAME: "<<name<<"\t\t";
           cout<<"CLASS: "<<sclass<<"\t";
           cout<<"DIV: "<<div<<"\t\t";
           cout<<"ROLL NO: "<<rno<<"\n\n";
           cout<<"DATE OF BIRTH: "<<date<<"\t";
           if(stream=='C')
           {
               cout<<"STREAM: "<<"COMPUTER"<<"\t";
           }
           else if(stream=='B')
           {
                cout<<"STREAM: "<<"BIOLOGY"<<"\t";
           }
           cout<<"TELEPHONE: "<<telno<<"\n\n";
           cout<<"FATHERS NAME: "<<fname<<"\t\t\t";
           cout<<"MOTHERS NAME: "<<mname<<"\n\n";
           cout<<"                        ----------------------------\n";
           cout<<"                            ACADEMIC PERFORMANCE\n";
           cout<<"                        ----------------------------\n\n";
           cout<<"                 ---------------------------------------\n";
           cout<<"                                  MARKS\n";
           cout<<"                 ---------------------------------------\n";
           if(stream=='C')
           {
               cout<<"\t\t\t  PHYSICS\t"<<marks[0]<<"\n";
               cout<<"\t\t\t  CHEMISTRY\t"<<marks[1]<<"\n";
               cout<<"\t\t\t  MATHS\t\t"<<marks[2]<<"\n";
               cout<<"\t\t\t  COMPUTER\t"<<marks[3]<<"\n";
               cout<<"\t\t\t  ENGLISH\t"<<marks[4]<<"\n";
           }
           else if(stream=='B')
           {
               cout<<"\t\t\t  PHYSICS\t"<<marks[0]<<"\n";
               cout<<"\t\t\t  CHEMISTRY\t"<<marks[1]<<"\n";
               cout<<"\t\t\t  MATHS\t\t"<<marks[2]<<"\n";
               cout<<"\t\t\t  BIOLOGY\t"<<marks[3]<<"\n";
               cout<<"\t\t\t  ENGLISH\t"<<marks[4]<<"\n";
           }     
           cout<<"                -------------------        ------------\n";
           cout<<"                 PERCENTAGE: "<<per<<"%"<<"           ";
           cout<<"GRADE: "<<grade<<"\n";
           cout<<"                -------------------        ------------\n\n";
      }    
      void display_all()
      {
           cout<<"\t\tNAME: "<<name<<"\n";
           cout<<"\t\tFATHER: "<<fname<<"\t"<<"MOTHER: "<<mname<<"\n";
           cout<<"\t\tROLL NO: "<<rno<<"\t"<<"SECURE CODE: "<<sec_code<<"\n";
           cout<<"\t\tCLASS: "<<sclass<<" "<<div<<"\t";
           cout<<"STREAM: "<<stream<<"\n";
           cout<<"\t\tTELEPHONE NO: "<<telno<<"\n\n";
           cout<<"\t\t                     MARKS"<<"\n";
           cout<<"\t\tPHY\tCHEM\tMATHS\tBIO/COMP\tENG"<<"\n";
           cout<<"\t\t"<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2]<<"\t";
           cout<<marks[3]<<"\t\t"<<marks[4]<<"\n\n";
           cout<<"\t\tPERCENTAGE: "<<per<<"%\t\t"<<"GRADE: "<<grade<<"\n";
           cout<<"\t\tATTENDANCE: "<<attct;
           
      }
      friend void del();
      friend void modify();
      friend void search();
      friend void search_student();
      friend void sort();
      friend void sortmark();
      friend void sortper();
};

/**************************ADDING A RECORD**************************/
void add()
{
     STUDENT s;
     ofstream f("Record.dat",ios::binary|ios::app);
     s.enter();
     f.write((char*)&s,sizeof(s));
     f.close();
}

/********************DISPLAYING ALL THE RECORDS********************/
void dispall()
{
     STUDENT s;
     ifstream f("Record.dat");
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\t\t\t  ---------------------------"<<"\n";
         cout<<"\t\t\t     LIST OF CLASS RECORDS"<<"\n";
         cout<<"\t\t\t  ---------------------------"<<"\n\n";
         while(f.read((char*)&s,sizeof(s)))
         {
             s.display_all();
             cout<<"\n\n\n\t\t---------------------------------------------\n\n\n";
         }
     }
     f.close();
}

/*************************DELETING A RECORD*************************/
void del()
{
     STUDENT s;
     ifstream f1("Record.dat");
     ofstream f2("Temp.dat",ios::binary);
     int n,flag=0;
     if(!f1)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"ENTER THE ROLL NUMBER OF THE STUDENT: ";
         cin>>n;
         system("cls");
         while(f1.read((char*)&s,sizeof(s)))
         {
             if(n!=s.rno)
             {
                 f2.write((char*)&s,sizeof(s));
                 flag=1;
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
         else
         {
              cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
              cout<<"THE RECORD WAS DELETED SUCCESSFULLY";
              cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f1.close();
     f2.close();
     remove("Record.dat");
     rename("Temp.dat","Record.dat");
}

/************************MODIFYING A RECORD************************/
void modify()
{
     STUDENT s;
     ifstream f1("Record.dat");
     ofstream f2("Temp.dat",ios::binary);
     int n,flag=0;
     if(!f1)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {   
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"ENTER THE ROLL NUMBER OF THE STUDENT: ";
         cin>>n;
         system("cls");
         while(f1.read((char*)&s,sizeof(s)))
         {
             if(n==s.rno)
             {
                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
                 cout<<"ENTER THE MODIFIED DETAILS OF THE STUDENT";
                 Sleep(3000);
                 system("cls");
                 s.enter();
                 
                 f2.write((char*)&s,sizeof(s));
                 flag=1;
             }
             else
             { 
                 f2.write((char*)&s,sizeof(s));
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f1.close();
     f2.close();
     remove("Record.dat");
     rename("Temp.dat","Record.dat");
}

/******************SEARCING FOR A RECORD (TEACHER)******************/
void search()
{
     STUDENT s;
     ifstream f("Record.dat");
     int n,flag=0;
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"ENTER THE ROLL NUMBER OF THE STUDENT: ";
         cin>>n;
         system("cls");
         while(f.read((char*)&s,sizeof(s)))
         {
             if(n==s.rno)
             {
                 flag=1;
                 s.display_report();
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f.close();
}

/******************SEARCING FOR A RECORD (STUDENT)******************/
void search_student()
{
     STUDENT s;
     ifstream f("Record.dat");
     int n,flag=0;
     char a[5];
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\t\t\t";
         cout<<"ENTER YOUR ROLL NUMBER: ";
         cin>>n;
         cout<<"\n\t\t\t";
         cout<<"ENTER YOUR SECURE CODE: ";
         cin.ignore();
         cin.getline(a,5);
         system("cls");
         while(f.read((char*)&s,sizeof(s)))
         {
             if((n==s.rno) && (strcmp(a,s.sec_code)==0))
             {
                 flag=1;
                 s.display_report();
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f.close();
}

/***********************SORTING BY PERCENTAGE***********************/
void sortper()
{
     STUDENT s,t[100],temp;   
     ifstream f("Record.dat");
     int n=0;
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         {
             while(f.read((char*)&s,sizeof(s)))
             {
                 t[n++]=s;
             }
         }
         f.close();
     
         for(int i=0;i< n; i++)
         {   
             for(int j=0;j<n-1;j++)
             {
                 if(t[j].per<t[j+1].per)
                 {
                     temp=t[j];
                     t[j]=t[j+1];
                     t[j+1]=temp;
                 }
             }
         }
     
/*******************DISPLAYING THE SORTED RECORDS*******************/
         cout<<"\t\t\t  -----------------------------------"<<"\n";
         cout<<"\t\t\t     LIST OF CLASS RECORDS(SORTED)"<<"\n";
         cout<<"\t\t\t  -----------------------------------"<<"\n\n";    
         for(int i=0;i<n;i++)
         {
             t[i].display_all(); 
             cout<<"\n\n\n\t\t---------------------------------------------\n\n\n";
         }
         getch();
     }
}

/**************************SORTING BY MARK**************************/
void sortmark()
{
     STUDENT s,t[100],temp;     
     ifstream f("Record.dat");
     int x,y,n=0;
     char ch[25];
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         {
             while(f.read((char*)&s,sizeof(s)))
             {
                 t[n++]=s;
             }
         }
         f.close();
         
         cout<<"\n\n\n\n\n\n";
         cout<<"\t\t\t  ----------------------"<<"\n";
         cout<<"\t\t\t     SELECT A SUBJECT"<<"\n";
         cout<<"\t\t\t  ----------------------"<<"\n";
         cout<<"\t\t\t       1. PHYSICS"<<"\n";
         cout<<"\t\t\t       2. CHEMISTRY"<<"\n";
         cout<<"\t\t\t       3. MATHS"<<"\n";
         cout<<"\t\t\t       4. BIOLOGY OR COMPUTER"<<"\n";
         cout<<"\t\t\t       5. ENGLISH"<<"\n\n";
         cout<<"\t\t\t     ENTER YOUR OPTION: ";
         cin>>y;
         system("cls");
         cout<<endl;
         if(y>5)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
         else
         x=y-1;
     
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n-1;j++)
             {
                 if(t[j].marks[x]<t[j+1].marks[x])
                 {
                     temp=t[j];
                     t[j]=t[j+1];
                     t[j+1]=temp;
                 }
             }
         }
     
/*******************DISPLAYING THE SORTED RECORDS*******************/
         cout<<"\n\n\n\n\n\n";
         cout<<"\t\t\t"<<"-------------------------------"<<"\n";     
         cout<<"\t\t\t"<<"   SL. NO:"<<"\t"<<"MARKS"<<"\t"<<"NAME"<<"\n";
         cout<<"\t\t\t"<<"-------------------------------"<<"\n\n";
         for(int i=0;i<5;++i)
         {
             cout<<"\t\t\t   ";
             cout<<i+1<<". "<<"\t\t";
             cout<<t[i].marks[x]<<"\t"<<t[i].name;
             cout<<endl;
         }
         cout<<"\n\n\n";
     }
}

void statistics()
{
     int n;
     cout<<"\n\n\n\n\n\n\n";
     cout<<"\t\t              ----------------"<<"\n";
     cout<<"\t\t                 STATISTICS"<<"\n";
     cout<<"\t\t              ----------------"<<"\n";
     cout<<"\t\t   1. VIEW ASCENDING ORDER OF PERCENTAGE"<<"\n";
     cout<<"\t\t   2. VIEW TOP FIVE MARKS IN EACH SUBJECT"<<"\n\n";
     cout<<"\t\t           ENTER YOUR OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: sortper();
                      break;
              case 2: sortmark();
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
}

/**********************DISPLAYING INTRODUCTION**********************/
void Intro()
{
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\tA PROGRAM BY JOSHUA JOSEPH AND MASOOD AL ANSAR";
     Sleep(3000);
     system("cls");
     for(int i=1;i<=100;++i)
     {
         Sleep(5);
         system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWELCOME TO";
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tLOADING "<<i<<"%";
         if(i==100)
         {
             Sleep(1000);
         }
     }
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tREPORT CARD MANAGEMENT SYSTEM";
     Sleep(3000);
     system("cls"); 
}

/*******************SPLITTING INTO DIFFERENT USERS*******************/
void Segregation()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n";
     cout<<"\t\t\t      ---------------"<<"\n";
     cout<<"\t\t\t         MAIN MENU"<<"\n";
     cout<<"\t\t\t      ---------------"<<"\n\n\n";
     cout<<"\t\t\t     SELECT DESIGNATION"<<"\n\n";
     cout<<"\t\t-------------------------------------------"<<"\n";
     cout<<"\t\t  1. TEACHER\t2. STUDENT\t3. PUBLIC"<<"\n";
     cout<<"\t\t-------------------------------------------"<<"\n\n";
     cout<<"\t\t             (PRESS 4 TO EXIT)"<<"\n\n\n"; 
     cout<<"\t\t       ENTER AN OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: system("cls");
                      Password();
                      break;
              case 2: Student();
                      break;
              case 3: Public();
                      break;
              case 4: exit(0);
                      break;        
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
                      system("PAUSE");
     }
     goto start; 
}

/*************************TEACHER FUNCTION*************************/
void Teacher()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n";
     cout<<"\t\t\t\t  ------------"<<"\n";
     cout<<"\t\t\t\t      MENU"<<"\n";
     cout<<"\t\t\t\t  ------------"<<"\n";
     cout<<"\t\t\t     1. ADD A NEW RECORD"<<"\n";
     cout<<"\t\t\t     2. SEARCH FOR A RECORD"<<"\n";
     cout<<"\t\t\t     3. MODIFY A RECORD"<<"\n";
     cout<<"\t\t\t     4. DELETE A RECORD"<<"\n";
     cout<<"\t\t\t     5. DISPLAY ALL THE RECORDS"<<"\n";
     cout<<"\t\t\t     6. CLASS STATISTICS"<<"\n";
     cout<<"\t\t\t     7. GO TO MAIN MENU"<<"\n\n";
     cout<<"\t\t\t     ENTER YOUR OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: add();
                      break;
              case 2: search();
                      break;
              case 3: modify();
                      break;
              case 4: del();
                      break;
              case 5: dispall();
                      break;
              case 6: statistics();
                      break;
              case 7: Segregation();
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("PAUSE");
     goto start;
}

/*************************STUDENT FUNCTION*************************/
void Student()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n\n";
     cout<<"\t\t\t\t ------------"<<"\n";
     cout<<"\t\t\t\t     MENU"<<"\n";
     cout<<"\t\t\t\t ------------"<<"\n";
     cout<<"\t\t\t   1. SEARCH FOR YOUR RECORD"<<"\n";
     cout<<"\t\t\t   2. VIEW CLASS STATISTICS"<<"\n";
     cout<<"\t\t\t   3. GO TO MAIN MENU"<<"\n\n";
     cout<<"\t\t\t   ENTER YOUR OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1:search_student();
                     break;
              case 2:statistics();
                     break;
              case 3:Segregation();
                     break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("PAUSE");
     goto start;
}

/**************************PUBLIC FUNCTION**************************/
void Public()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n";
     cout<<"\t\t\t\t ------------"<<"\n";
     cout<<"\t\t\t\t     MENU"<<"\n";
     cout<<"\t\t\t\t ------------"<<"\n";
     cout<<"\t\t\t   1. VIEW CLASS STATISTICS"<<"\n";
     cout<<"\t\t\t   2. GO TO MAIN MENU"<<"\n\n";
     cout<<"\t\t\t   ENTER AN OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: statistics();
                      break;
              case 2: Segregation();
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("PAUSE");
     goto start;
}

/*************************PASSWORD FUNCTION*************************/
void Password()
{
     char pass[7];
     pass[6]='\0';
     int t=0;
     start:
     cout<<"\n\n\n\n\n\n\n\n\n\t\t\tENTER THE PASSWORD: ";
     for(int i=0;i<6;++i)
     {
             pass[i]=getch();
             cout<<"*";
     }
     cout<<"\n\n";
     if(strcmp(pass,"ADCDEF")==0)
     {
         cout<<"\t\t\t      ACCESS GRANTED";
         Sleep(3000);
         system("cls");
         Teacher();
     }
     else
     {
         if(t==2)
         {
             cout<<"\t\t\t      ACCESS DENIED"<<"\n\n\n\n\n\n\n\n";
             system("PAUSE");
             system("cls");
             Segregation();
         }
         cout<<"\t\t\t      TRY AGAIN";
         ++t;
         Sleep(3000);
         system("cls");
         goto start;
     }
}

/*********************SETTING FUNCTION SEQUENCE*********************/
void SEQUENCE()
{
     Intro();
     Segregation();
}

/***************************MAIN FUNCTION***************************/
int main()
{
     system("title REPORT CARD MANAGEMENT SYSTEM");
     system("COLOR F0");
     SEQUENCE();
     getch();
     return 0;
}
