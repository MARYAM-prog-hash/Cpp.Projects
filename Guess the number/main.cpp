#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
//#include <bits/stdc++.h>
using namespace std;
int chance=0;
void level()
{
    cout<<"\t\t\tWelcome to Guess the Number game!\t\t\t\n";
    cout<<"You have guess a number between 1 to 100.You'ill have limited choices based on the level you choose.Good Luck!\n";
    cout<<"Enter the difficulty level:\n";
    cout<<"1 for easy!\t\t2 for medium!\t\t3 for difficult!\t\t0 for ending the game!\n";
    int number;
    while(true)
    {
        cout<<"Enter the number:";
        cin>>number;
        if(number==1)
        {
            chance=10;
            cout<<"\nYou have 10 choices for finding the secret number between 1 and 100\n\n";
            break;
        }
        else if(number==2)
        {
            chance=7;
            cout<<"\nYou have 7 choices for finding the secret number between 1 and 100\n\n";
            break;
        }
        else if(number==3)
        {
            chance=5;
            cout<<"\nYou have 5 choices for finding the secret number between 1 and 100\n\n";
            break;
        }
        else if(number==0)
        {
            cout<<"\nYou end the game\n";
            return;
        }
        else
            cout<<"\nThere is an error,Try again\n";
    }
}
void test()
{
    int secretNumber=rand()%100+1;
    int guess_number;
    for(int i=1; i<=chance; i++)
    {
        cout<<"Enter the number:";
        cin>>guess_number;
        if(guess_number==secretNumber)
        {
            cout<<"Well played!You won "<<guess_number<<" is the secret number\n";
            return;

        }
        else if(guess_number<secretNumber)
        {
            cout<<"Nope, "<<guess_number<<" is not the right number \nThe secret number is greater than the number you have chosen\n";

        }
        else if(guess_number>secretNumber)
        {
            cout<<"Nope, "<<guess_number<<" is not the right number \nThe secret number is smaller than the number you have chosen\n";
        }
        int reminder=chance-i;
        if(reminder>0){
            cout<<reminder<<" choices left.\n\n";
        }
        else{
            cout<<"\nSorry! The secret number was:"<<secretNumber<<"\n\n";
            return;

        }
    }

}
void ending(){
 cout<<"\t\t\tThanks for playing....\t\t\t\n";
 cout<<"Play the game again with us!!\n";

}
int main()
{
    srand(time(0));
    level();
    test();
    ending();
    cout<<endl;




    return 0;
}
