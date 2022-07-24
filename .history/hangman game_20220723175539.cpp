#include<iostream>
#include<string>
using namespace std;
string player1,player2,word,underscore,storage;
char guess;
int wrong=0,i,l,isFound=0,usedguess=12;
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
//hide the word
do{
    cout<<endl;
    i++;
}while(i<50);
l=word.size();
//underscore
while(underscore.size()!=word.size()){
    underscore.push_back("_");
}
cout<<player1<<"Please Begin\n";
while(wrong<12){
    cin>>guess;
    storage.push_back(guess);
    for(i=0;i<l;i++){
        if(guess==word[i])
            underscore[i]=guess;
            isFound++;
        }
    if(isFound){
        cout<<"the Guess was correct :D\n";
        cout<<underscore;

    }
    else{
        cout<<"your guess was wrong :(\n";
        cout<<"you have "<<usedguess<<"guesses left /n";
        usedguess--;
        cout<<underscore;
        
        wrong++;
    }

}

}