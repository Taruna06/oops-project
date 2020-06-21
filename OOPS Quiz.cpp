#include<iostream>
#include<string>

using namespace std;

char choice;
int total_marks;

class Questions
{
private:
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    
    char correct_answer;
    char correct_answer1;
    int marks;
    
public:
    void input (string,string,string,string,string,char,char,int);
    void display();
    
};

int main()
{
    cout<<"-------------------------------------------------------\n";
    cout<<"*******************************************************\n";
    cout<<"*                                                     *\n";
    cout<<"*             *  WELCOME TO OOPS QUIZ!  *             *\n";
    cout<<"*                                                     *\n";
    cout<<"*           _______________________________           *\n";
    cout<<"*                        By:                          *\n";
    cout<<"*                                                     *\n";
    cout<<"*                  Charu (CO19319)                    *\n";
    cout<<"*            Harshdeep Singh Mand (CO19325)           *\n";
    cout<<"*                Taruna Saini (CO19366)               *\n";
    cout<<"*                                                     *\n";
    cout<<"*******************************************************\n";
    cout<<"-------------------------------------------------------\n";
    cout<<"Prass enter to start the quiz.......";
    cin.get();
    cout<<"GOOD LUCK! Each Question is of 10 Marks for a total of 100 Marks.";
    
    Questions q1;
    Questions q2;
    Questions q3;
    Questions q4;
    Questions q5;
    Questions q6;
    Questions q7;
    Questions q8;
    Questions q9;
    Questions q10;
    
    q1.input("The pointers which are not initialized in a program are called:", "Void pointers", "Generic pointers", "Null pointers", "Empty pointers",'C','c', 10);
    
    q2.input("A function declared in a base class that has no definition relative to the base class:", "Base function", "Pure Virtual Function", "Virtual function", "Member function",'B','b', 10);
    
    q3.input("ios::in for ifstrem functions means:", "Open for writng only", "Append to end of file ", "Binary file", "Open for reading only",'D','d', 10);
    
    q4.input("The default visibility mode of a class is: ", "Public", "Private", "Protected", "None of the above",'B','b', 10);
    
    q5.input("The smallest individual unit in a program is called: ", "Token", "Objects", "Data", "Class",'A','a', 10);
    
    q6.input("The operators that are used to format the data display are: ", "Member derferencing operators", "Memory management operators", "Manipulators", "Type cast operators",'C','c', 10);
    
    q7.input("The code for handling exceptions isn included in: ", "Try block", "Catch block", "Throw statement", "None of the above",'B','b', 10);
    
    q8.input("How many file pointers are associated with each file?", "One", "Two", "Four", "Six",'B','b', 10);
    
    q9.input("Which of the following statements is true? ", "Virtual functions can be static members", "We can have virtual constructors", "We cannot have destructors", "A virtual function can be a friend of another class",'C','c', 10);
    
    q10.input("A class is called polymorphic if it contains: ", "Friend Function ", "Inline function", "Main function", "Virtual function",'D','d', 10);
    
    
    q1.display();
    
    q2.display();
    
    q3.display();
    
    q4.display();
    
    q5.display();
    
    q6.display();
    
    q7.display();
    
    q8.display();
    
    q9.display();
    
    q10.display();
    
    cout<<endl;
    
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$                                                     $\n";
    cout<<"$                   CONGRATULATIONS!                  $\n";
    cout<<"$                YOU COMPLETED THE QUIZ               $\n";
    cout<<"$                                                     $\n";
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    
    cout<<endl<<"Your Total Score is: "<<total_marks <<" out of 100\n\n\n";
    
    
    return 0;
}

void Questions::input(string q,string a1 ,string a2,string a3,string a4, char ans,char ans1, int i)
{
    question = q;
    option1 = a1;
    option2 = a2;
    option3 = a3;
    option4 = a4;
    correct_answer = ans;
    correct_answer1 = ans1;
    marks = i;
}

void Questions::display()
{
    
    cout<<endl;
    cout<<question<<endl;
    cout<<"A. "<<option1<<endl;
    cout<<"B. "<<option2<<endl;
    cout<<"C. "<<option3<<endl;
    cout<<"D. "<<option4<<endl;
    cout<<endl;
    
    cout<<"Choose an option: ";
    
    cin>>choice;
    
    if(choice==correct_answer||choice==correct_answer1)
    {
        cout<<endl;
        cout<<"Absolutely Correct! \n";
        total_marks = total_marks + marks;
        cout<<"You earned "<<marks<<"marks.\n";
        cout<<"New total = "<<total_marks;
        
        cout<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"Sorry, Wrong Answer! You need to study some more..";
        cout<<"The Correct Answer is: "<<correct_answer;
        cout<<endl;
    }
    
}
