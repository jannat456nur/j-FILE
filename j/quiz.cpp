
#include<bits/stdc++.h>
#include<conio.h>
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
    if(Guess==Correct_Answer)
    {
        cout<<endl;
        cout<<"Great!!! You Are Correct."<<endl;
        Total = Total+Question_Score;
        cout<<"Score: "<<Question_Score<<" Out of "<<Question_Score<<"!"<<endl;
        cout<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"Oh No!!! You Are Wrong."<<endl;
        cout<<"Score: 0"<<" Out of "<<Question_Score<<"!"<<endl;
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
    cout<<"Are You Ready To Take The QUIZ "<<Name<<"? YES/NO."<<"If yes press Y or press N."<<endl;
    Respond=toupper(getch());

    if(Respond == "Y")
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


  Question q1;
  Question q2;
  Question q3;
  Question q4;
  Question q5;
  Question q6;
  Question q7;
  Question q8;
  Question q9;
  Question q10;

   q1.setValues("* You can catch me but cannot throw me. What am I?",
                "Air",
                "Fire",
                "Cold",
                "Your hand",
                3,
                1);
    q2.setValues("* I am clean when I am black I am dirty when I am white. What am I?",
                "Chalkboard",
                "Water",
                "A preacher",
                "Book",
                1,
                1);
    q3.setValues("* What is at the end of a rainbow?",
                "Camera",
                "Air",
                "The letter W",
                "A penny",
                3,
                1);
    q4.setValues("* What you can hold in your left hand never in your right hand?",
                "Umbrella",
                "The letter E",
                "Your right elbow",
                "Your right hand",
                4,
                1);
    q5.setValues("* I can shave everyday but my bread will stay the same. What I am?",
                "Bread",
                "A bar of soap",
                "A barber",
                "Honey",
                3,
                1);
    q6.setValues("* First you eat me then you get eaten. What am I?",
                "Snake",
                "A fish hook",
                "An elephant",
                "Doctor",
                2,
                1);

    q7.setValues("* What has ten letters and starts with gas. What is it?",
                "Aeroplan",
                "kingfisher ",
                "A fire ball",
                "Automobile",
                4,
                1);
    q8.setValues("* I fly without wings. What am I?",
                "Air",
                "Time",
                "Plane",
                "Paper",
                2,
                1);
    q9.setValues("* What kind of room has no doors or windows?",
                "Mushroom",
                "Washroom",
                "Hotel room",
                "A single room",
                1,
                1);
    q10.setValues("* Which is correct to say?",
                "The yolk of the egg is white.",
                "The yolk of the egg is yellow.",
                "Egg yolks are usually yellow.",
                "None",
                3,
                1);

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

    cout<<"Your Total Score is "<<Total<<" Out of 10"<<endl;
    cout<<endl;

    if(Total >= 7)
    {
        cout<<"Great!You Passed The QUIZ!"<<endl;
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
