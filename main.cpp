#include <iostream>

using namespace std;

class Answers {
public:

    string ans1;
    string ans2;
    int correctAns;


    Answers(string aAns1, string aAns2, int aCorrectAns){
        ans1 = aAns1;
        ans2 = aAns2;
        correctAns = aCorrectAns;
    }

};

void GuessAnswer(Answers ansAndNum) {
    int guess;
    cout << "1. " << ansAndNum.ans1 << endl;
    cout << "2. " << ansAndNum.ans2 << endl;
    cout << "Type 1 or 2: " << endl;
    cin >> guess;
    if(guess == ansAndNum.correctAns) {
        cout << "Correct answer!" << endl;
    } else {
        cout << "Bad answer, but don't worry!" << endl;
    }
}

int main()
{
    Answers qa1("maintenance", "maintainance", 1);
    Answers qa2("hierarchikal", "hierarchical", 2);
    Answers qa3("definitely", "definately", 1);
    Answers qa4("height", "heigth", 1);
    Answers qa5("neighbour", "neighbor", 1);

    GuessAnswer(qa1);
    GuessAnswer(qa2);
    GuessAnswer(qa3);
    GuessAnswer(qa4);
    GuessAnswer(qa5);

}

