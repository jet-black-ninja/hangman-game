#include<iostream>
#include<string>
string player1,player2,word,underscore,guess;
int wrong=0;
int main(){
    string copy=word;
    cout<<"---------------------Hello! Welcome to the Hangman Game---------------------------";
    cout<<"Player 1 enter their name \n";
    cin>>player1;
    cout<<"Player 2 enter their name \n";
    cin>>player2;
    cout<<" Ok now that the players"<<player1<<"and "<< player2<<"are here, Lets start with the game \n";
    cout<<player1<<"enter the word you want "<< player2<< " to guess\n";
    cin>>word;
    
}