#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
string player1,player2,word,underscore,storage;
char guess;
int wrong=0,i,l,isFound,usedguess=12;
bool isUsed=false;
int main(){
string copy=word;
cout<<"---------------------Hello! Welcome to the Hangman Game---------------------------\n";
cout<<"Player 1 enter their name \n";
cin>>player1;
cout<<"Player 2 enter their name \n";
cin>>player2;
cout<<" Ok now that the players "<<player1<<" and "<< player2<<" are here, Lets start with the game \n";
cout<<player1<<" enter the word you want "<< player2<< " to guess\n";
cin>>word;
system("CLS");

l=word.size();
//underscore
while(underscore.size()!=word.size()){
    underscore.push_back('_');
}

//the game begins
while(wrong<12){
    start:
    cout<<" awaiting input from "<<player2<<endl;
    cin>>guess;
    isUsed=false;
    
    isFound=0;
    for(i=0;i<storage.size();i++){
        if(guess==storage[i]){
            isUsed=true;
        }
    }
    if(isUsed){
        cout<<"The Letter "<<guess <<" has already been used\n";
        goto start;
    }
    storage.push_back(guess); // vector of used guesses
    storage.push_back(' ');
    for(i=0;i<l;i++){
        if(guess==word[i]){
            underscore[i]=guess;
            isFound++;
        }
    }
    if(isFound){
        cout<<"the Guess was correct :D\n";
        cout<<"status :"<<underscore<<endl;
    }
    else{
        cout<<"your guess was wrong :(\n";
        cout<<"you have "<<usedguess<<" guesses left \n";
        usedguess--;
        cout<<"status :"<<underscore<<endl;        
        wrong++;
    }
    if(underscore==word){
        cout<<"YOU WIN !!!"<<endl;
        break;
    }
    if(wrong){
        cout<<"GALLOWS\n\n";
    switch(wrong){
        case 1:
            cout << "I" << endl;
            
            break;
        case 2:
            cout << "I" << endl;
            cout << "I" << endl;
            break;
        case 3:
            cout << "I" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            break;
        case 4:
            cout << "I" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            break;
        case 5:
            cout << "I" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            break;
        case 6:
            cout << "I===" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            break;
        case 7:
            cout << "I===" << endl;
            cout << "I  O" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            break;
        case 8:
            cout << "I===" << endl;
            cout << "I  O" << endl;
            cout << "I  |" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            break;
        case 9:
            cout << "I===" << endl;
            cout << "I  O" << endl;
            cout << "I -|" << endl;
            cout << "I" << endl;
            cout << "I" << endl;
            break;
        case 10:
            cout << "I===" << endl;
            cout << "I  O" << endl;
            cout << "I -|-" << endl;        
            cout << "I" << endl;
            cout << "I" << endl; 
            break;
        case 11:
            cout << "I===" << endl;
            cout << "I  O" << endl;
            cout << "I -|-" << endl;
            cout << "I |"  << endl;
            cout << "I" << endl;
            break;
        case 12:
            cout << "I===" << endl;
            cout << "I  O" << endl;
            cout << "I -|-" << endl;
            cout << "I | |"<< endl;
            cout << "I YOU ARE DEAD" << endl;
            cout << "Game over bro! The word was: " << word <<endl;
            system("PAUSE");
            exit(0);
            break;
        default:
            cout<<"limit breakers\n";
            break;

    }
    
    }
cout<<endl<<"used letters : "<<storage<<endl;
system("PAUSE");
system("CLS");
}
return 0;
}