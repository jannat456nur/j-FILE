
#include<iostream>
#include<string>
using namespace std;

int Guess;
int Total;

class Question
{
  private:
  string Question_Text;
  string Answer_1;
  string Answer_2;
  string Answer_3;
  string Answer_4;

  int Correct_Answer;
  int Question_Score;

  public:
  void setValues(string, string, string, string, string, int, int);
  void askQuestion();
};

void Question :: setValues(string q, string a1, string a2, string a3, string a4,int CA, int Sc)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = CA;
    Question_Score = Sc;
}

void Question :: askQuestion()
{
    cout<<endl;
    cout<<Question_Text<<endl;
    cout<<"1. "<<Answer_1<<endl;
    cout<<"2. "<<Answer_2<<endl;
    cout<<"3. "<<Answer_3<<endl;
    cout<<"4. "<<Answer_4<<endl;
    cout<<endl;

    cout<<"What's Your Answer?"<<endl;
    cin>>Guess;
    if(Guess=Correct_Answer)
    {
        cout<<endl;
        cout<<"Great!!! You Are Correct."<<endl;
        Total = Total+Question_Score;
        cout<<"Score: "<<Question_Score<<"Out of "<<Question_Score<<"!"<<endl;
        cout<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"Oh No!!! You Are Wrong."<<endl;
        cout<<"Score: 0"<<"Out of "<<Question_Score<<"!"<<endl;
        cout<<"The Correct Answer is "<<Correct_Answer<<"."<<endl;
        cout<<endl;
    }
}

int main()
{
    cout<<"**********************************************"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*       *WELCOME TO THE QUIZ SECTION*        *"<<endl;
    cout<<"*      -------------------------------       *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*                    By                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*                QUARENTEAM                  *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"**********************************************"<<endl;

    cout<<endl;

    cout<<"Press ENTER To Start The QUIZ..."<<endl;
    cin.get();

    string Name;
    int Age;

    cout<<"What's Your Name?"<<endl;
    cin>>Name;
    cout<<endl;

    cout<<"How Old Are You?"<<endl;
    cin>>Age;
    cout<<endl;

    string Respond;
    cout<<"Are You Ready To Take The QUIZ"<<Name<<"? YES/NO."<<endl;
    cin>>Respond;

    if(Respond == "YES")
    {
        cout<<endl;
        cout<<"Good Luck :)"<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"Ok,Good Bye :("<<endl;
        return 0;
    }


  Qusetion q1;
  Question q2;
  Qusetion q3;
  Qusetion q4;
  Qusetion q5;
  Qusetion q6;
  Qusetion q7;
  Qusetion q8;
  Qusetion q9;
  Qusetion q10;

   q1.setValues("what is the only function all c++ programes must contain?",
                "start*()",
                "system()",
                "main()",
                "program()",
                3,//answer
                1);//score
    q2.setValues("",
                "",
                "",
                "",
                "",
                3,//answer
                1);//score
    q3.setValues("",
                "",
                "",
                "",
                "",
                3,//answer
                1);//score
    q4.setValues("",
                "",
                "",
                "",
                "",
                3,//answer
                1);//score
    q5.setValues("",
                "",
                "",
                "",
                "",
                3,//answer
                1);//score
    q6.setValues("",
                "",
                "",
                "",
                "",
                3,//answer
                1);//score

    q7.setValues("",
                "",
                "",
                "",
                "",
                3,//answer
                1);//score
    q8.setValues("",
                "",
                "",
                "",
                "",
                3,//answer
                1);//score
    q9.setValues("",
                "",
                "",
                "",
                "",
                3,//answer
                1);//score
    q10.setValues("",
                "",
                "",
                "",
                "",
                3,//answer
                1);//score

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();

    cout<<"Your Total Score is"<<Total<<"Out of 10"<<endl;
    cout<<endl;

    if(Total >= 7)
    {
        cout<<"Great! You Passed The QUIZ!"<<endl;
        cout<<endl;

        cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<"%                                               %"<<endl;
        cout<<"%              #CONGRATULATIONS#                %"<<endl;
        cout<<"%                                               %"<<endl;
        cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    }
    else
    {
        cout<<"Sorry :("<<endl;
        cout<<endl;
        cout<<"Better Luck Next Time :)"<<endl;
    }
    return 0;
}
