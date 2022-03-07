#include <iostream>

using namespace std;

int main()
{
double test1,test2,test3;
int studno;
 cout <<"Enter student number(1-30): \n";
 cin >>studno;
 while(studno <= 30){
  cout <<"enter score for first test: \n";
  cin >>test1;
  cout <<"enter score for second test: \n";
  cin >>test2;
  cout <<"enter score for third test: \n";
  cin >>test3;
 
double avg =test1+test2+test3;
double result =avg/3;

	if (marks >= 90 && marks < 100){
        cout<<"A";
    }
   else if (marks >= 80 && marks <90){
        cout<<"B";
    }
    else if (marks >= 70 && marks <80){
        cout<<"C";
    }
    else if (marks >= 60 && marks <70){
        cout<<"D";
    }
   else if(result<60){
		cout << "F";
	}
	else {
		cout << "Invalid test entries!!";
	}
}
cout << "Student number exceeds 30!!";
    return 0;
}
