#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int generateRandomNumber();
int getPlayerGuess();
void printAnswer (int guess, int secretNumber );

int main(){
	
	int secretNumber = generateRandomNumber();
	int guess;
	do{
		guess =  getPlayerGuess();
		printAnswer(guess, secretNumber);
		
	}while(guess != secretNumber);
	
	return 0;
}

int generateRandomNumber(){
	srand(time(0));
	return rand()%100+1;
}

int getPlayerGuess(){
	cout << "enter your guess(1-100): ";
	int g;
	cin >> g;
	return g;
}

void printAnswer(int guess,int secretNumber){
	
	if( guess > secretNumber  ){
		if(guess-secretNumber < 10) cout << "Your number is big \n";
		else cout << "Your number is too big\n";
	}
	
	else{
		if(guess < secretNumber ){
			if(secretNumber - guess < 10 ) cout << "Your number is small\n";
			else cout << "Your number is too small\n";
		}
		else 
			cout << "congratulation! You win :))";
		}
}

