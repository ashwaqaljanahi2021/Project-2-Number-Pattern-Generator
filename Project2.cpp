#include <iostream>
using namespace std;
//prototypes
void info(); //menu selection for pattern
int choice(int); //user choice
int pattern1(int); //pattern 1
int pattern2(int); //pattern 2
int pattern3(int); //pattern 3
int  pattern4(int); //pattern 4
int main() //main function
{
int ch1;
do{

int ch1;
info();

 }while (choice(ch1)!=false); // repetition loop of program till user quits



}
void info() //menu options for user function 
{
    cout<<"Welcome! Please select from the Sample Menu Below!"<<endl; 
    cout<<endl;
    
    cout<<"1.Pattern One"<<endl;
    cout<<"2.Pattern Two"<<endl;
    cout<<"3.Pattern Three"<<endl;
    cout<<"4.Pattern Four"<<endl;
    cout<<"5.Run Again"<<endl;
    cout<<"6.Quit"<<endl;

}
int choice(int num) //display of choice from menu function
{
    int p1,p2,p3,p4; //pattern displays
    int choose; // for selection 5 to run again
    cin>>num;
while(num<0 || num>6)//error vaildation 
{
    cout<<"Error!"<<endl;
    
    cout<<"Select from the Menu!"<<endl;
    cout<<endl;
    cout<<"1.Pattern One"<<endl;
    cout<<"2.Pattern Two"<<endl;
    cout<<"3.Pattern Three"<<endl;
    cout<<"4.Pattern Four"<<endl;
    cout<<"5.Run Again"<<endl;
    cout<<"6.Quit"<<endl;
    cin>>num;


}
switch(num)//choice from menu
{case 1: //pattern one display

cout<<"You have selected 1.Pattern One"<<endl;
pattern1(p1);
return num;
break;

case 2: //pattern two display
cout<<"You have selected 2.Pattern Two"<<endl;
pattern2(p2);

break;

case 3://pattern three display
cout<<"You have selected 3.Pattern Three"<<endl;
pattern3(p3);

break;

case 4: //pattern four display
cout<<"You have selected 4.Pattern Four"<<endl;
pattern4(p4);

break;

case 5: //choice to run again display
cout<<"You have selected 5.Run again"<<endl;
info();
choice(choose);
break;

case 6: //quit choice
cout<<"You have selected 6.Quit"<<endl;
return false;
break;

default: //error 
cout<<"Invaild"<<endl;

}
while (num==6) //to break the loop
{
    return false;
}

return num;//display choice
}

int pattern1(int num1) //pattern one function
{
    cout<<"Please select a size from 2 to 9"<<endl;
     cin>>num1;
     cout<<"You have selected size "<<num1<<endl;
    while(num1<2 || num1>9) //error vaildation
    {
        cout<<"Error! Size must be from 2 to 9"<<endl;
        cin>>num1;
    }
        cout << endl;
    for (int i = 0; i < num1; i++)//first for loop
     {
        for (int j = 0; j < num1; j++)//second for loop
         {
            if (i == j) 
            {
                    cout << num1;
            } else
                cout << "$";
        }
        cout << endl;
    }
    cout << endl;
   
     return num1; // display of pattern

}
int pattern2(int num2) //pattern two function
{
    cout<<"Please select a size from 2 to 9"<<endl;
     cin>>num2;
     cout<<"You have selected size "<<num2<<endl;
    while(num2<2 || num2>9) //error vaildation
    {
        cout<<"Error! Size must be from 2 to 9"<<endl;
        cin>>num2;
    }
        cout << endl;
       
    for (int i = 0; i < num2; i++)//first for loop
     {
        for (int j = 0; j < num2; j++)//second for loop
         {
            if (j == num2 - (i + 1)) {
               
                cout << num2;
            } else
                cout << "$";
        }
        cout << endl;
    }
    cout << endl;
    return num2; //display for second pattern
}

int pattern3(int num3) //pattern three function
{
cout<<"Please select a size from 2 to 9"<<endl;
     cin>>num3;
    while(num3<2 || num3>9) //error vaildation
    {
        cout<<"Error! Size must be from 2 to 9"<<endl;
        cin>>num3;
    }
cout<<"You have selected size "<<num3<<endl;
for (int i = 0; i < num3; i++)//first for loop
 {

        for (int j = 0; j < num3 - i; j++) //second for loop
        {
            cout << "$";
        }

        int k = 0;
        while (k < i) //while loop for repetition of chosen size
        {
                cout << num3;
            k++;
        }    cout << endl;
    }
 cout << endl;
 return num3;//display pattern three
}

int pattern4(int num4) // pattern four function
{
    cout<<"Please select a size from 2 to 9"<<endl;
     cin>>num4;
    while(num4<2 || num4>9) //error vaildation
    {
        cout<<"Error! Size must be from 2 to 9"<<endl;
        cin>>num4;
    }
    cout<<"You have selected size "<<num4<<endl;
    cout << endl;
for (int i = 0; i < num4; i++) //first for loop
        cout << "$";
    cout << endl;
    for (int i = 1; i < num4; i++) //second for loop
    {
        for (int j = 1; j < num4; j++) //third for loop
        {
            if (i < j) 
            
                cout << "$";
              
            else
                    cout << num4;
            }
            cout << "$" << endl;
        }
       
            cout << endl;
            return num4;//display of pattern four
    }


    





  
    
