#include"Calculator.h" // Userdefine calculator.h file
int main()
{   
    Calculator c1;
    cout<<endl;
    c1.Display(); // Displaying Calculator Board
    double Num_1=0,Num_2=0;  // Initializing two numbers of double type
    cout<<"Enetr First Number : ";
    cin>>Num_1; // Getting First NUmber from User
    cout<<"Enetr Second Number : ";
    cin>>Num_2; // Getting Second NUmber from User
    cout<<"\nWhat Operation You Want to perform ?\n";
    cout<<"\x1B[4m********** Menue **********\x1B[0m\n";
    cout<<"Press + for Addition\nPress - for Subtraction\nPress * for Multiplication\nPress / for Division\n";
    char choice;
    bool flag=false;
    do{
        cout<<"Enter your choice = ";
        cin>>choice; // Getting Operation From User to Perform 
        if(choice=='+'||choice=='-'||choice=='*'||choice=='/'){
            flag=true;
            break;
        }
        else{
            cout<<"You Enter Wrong Choice Please Try Again !\n";
        }
    } while (!flag); // Check if the Operation is Valid 
    double x= c1.Calculate(Num_1,Num_2,choice); // Applying Calculation Function
    system("cls"); // Clearing the screen
    c1.Display();
    cout<<"\n"<<Num_1<<" "<<choice<<" "<<Num_2<<" = "<<x; // Displaying the Answer 
    return 0; // End
}