#include <iostream>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <exception>
using namespace std;

flipCoins(){
int Log[1000];
int countHeads=0;
int countTails=0;

for(int i =0; i < 1000; ++i){
    int stumpy=((rand())+(time(NULL)));
    srand(stumpy);
    Log[i]= rand()%2;
}
for(int i =0; i <1000; ++i){
    cout<< Log[i];
}
for(int i =0; i <1000; ++i){
    if(Log[i]==0){
        countHeads +=1;
    }
    else{
        countTails +=1;
    }
}
cout<< endl<<endl;
cout<< "Heads: "<< countHeads << endl;
cout<< "Tails: "<< countTails << endl;

cout<< endl;



}
int main(){

cout<< "Welcome to Coin Flip. Are you ready? [Y] for yes [N] to exit" << endl;
bool validAnswer = false;
    do {

        char answer;

        try{
            cin >> answer;
        }

        catch(std::invalid_argument) {cout << "Exception." << endl;}
        catch(std::length_error) {cout << "String exception." << endl;}


        switch (answer)
        {
            case 'Y':
            case 'y':
                validAnswer = false;
                flipCoins();
                break;
            case 'N':
            case 'n':
                validAnswer = true;
                cout << "Bye!" << endl;
                exit(-1);
            default:
                cout << "Invalid entry; please try again.";
                break;
        }



    }while (!validAnswer);











return 0;
}

