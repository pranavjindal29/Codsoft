#include<iostream>
using namespace std;
class Calculator
{
private:
     double Num_1,Num_2; // Initializing the private menbers of the class 
public:
    Calculator();
    double Calculate(double n1,double n2,char choice); // Calculate Function with three perameters 
    ~Calculator();
    void Display(){  // Function to Display Calculator Board
    cout<<"\x1B[4m  CALCULATOR \x1B[0m \n";
    cout<<"| 7 | 8 | 9 |\n";
    cout<<"| 4 | 5 | 6 |\n";
    cout<<"| 1 | 2 | 3 |\n";
    cout<<"| * | 0 | + |\n";
    cout<<"\x1B[4m| - | / | % |\x1B[0m\n";
    }
};
Calculator::Calculator(){
   Num_1=0;
   Num_2=0;
}
Calculator::~Calculator(){
    Num_1=0,Num_2=0;
}
double Calculator::Calculate(double n1,double n2,char choice){ // Performing Operaations and return the Answer
    Num_1=n1,Num_2=n2;
    double result;
    switch (choice){
    case '+':
        result=Num_1+Num_2;
        break;
    case '-':
        result=Num_1-Num_2;
        break;
    case '*':
        result=Num_1*Num_2;
        break;
    case '/':
        result=Num_1/Num_2;
        break;
    default:
        break;
    }
    return result;
}