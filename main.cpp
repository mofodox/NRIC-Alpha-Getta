// Title: NRIC(Alpha)Getta
// Version: 0.2.1 Alpha Build
// Author: mofodox
// Date: 22 June 2013

#include <iostream>
#include <string>

using namespace std;

// Declare prototype
void getInput(int user[], int numOfInput);
void multiply(int results[], int sizeDefault);
void printMultiply();
void sum();
void printSum();
void division();
void printFinalAns();

/****************************************/

// Global
int DEFAULT_NUMS[] = {2,7,6,5,4,3,2},
	divNum = 11,
	user[7],
	results[7],
	total = 0,
	FINAL_ANS = 0;
char alphabets[] = {'A','B','C','D','E','F','G','H','I','J','Z'};

/***************************************/

// Created classes to make the code
// looks more cleaner and sexy
class Heading {
	public:
		void getHeading() {
			cout << "\n\n--------NRIC(Alpha)Getta--------" << endl;
			cout << "--------Vers: 0.2.1A Build--------\n" << endl;
		}
};

class Name {
	public:
		void setName(string x) {
			cout << "Enter your name: ";
			cin >> x;
			name = x;
			cout << endl;
		}
		string getName() {
			return name;
		}
	private:
		string name;
};

/***************************************/

int main (int argc, char * const argv[]) {
	Heading printHeading;
	printHeading.getHeading();
	
	// set the username to name
	string name;
	Name username;
	username.setName(name);
	
	cout << "Hello " << username.getName() << ", please provide your NRIC NUM and follow the instructions given.\n" << endl;
	
	getInput(user, 7);
	multiply(results, 7);
	printMultiply();
	
	sum();
	printSum();
	
	division();
	printFinalAns();
	
	// Checks if the FINAL_ANS
	// equals the case number.
	switch (FINAL_ANS) {
		case 1:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[10] << "\n" << endl;
			break;
		case 0:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[9] << "\n" << endl;
			break;
		case 2:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[8] << "\n" << endl;
			break;
		case 3:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[7] << "\n" << endl;
			break;
		case 4:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[6] << "\n" << endl;
			break;
		case 5:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[5] << "\n" << endl;			
			break;
		case 6:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[4] << "\n" << endl;
			break;
		case 7:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[3] << "\n" << endl;
			break;
		case 8:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[2] << "\n" << endl;
			break;
		case 9:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[1] << "\n" << endl;
			break;
		case 10:
			cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[0] << "\n" << endl;
			break;
		default:
			cout << "Sorry, something went wrong. The program is terminated!\n" << endl;
			return 0;
	}
	
    return 0;
}

/***************************************/

// Created this function to get every input
// by the user. And store it in user[]
void getInput(int user[], int numOfInput) {
	for(int x=0; x<numOfInput; x++) {
		cout << "Enter value #" << x+1 << " of your NRIC NUM: ";
		cin >> user[x];
	}
	cout << endl;
}

/***************************************/

// Multiply user[] with DEFAULT_NUMS[]
void multiply(int results[], int sizeDefault) {
	for(int j=0; j<sizeDefault; j++) {
		results[j] = user[j] * DEFAULT_NUMS[j];
	}
}

/***************************************/

// This is to check if the mulitply() is working
// properly or not.
// This function is created for debugging purpose only;
void printMultiply() {
	for(int i=0; i<7; i++) {
		cout << user[i] << " * " << DEFAULT_NUMS[i] << " = " << results[i] << "\n";  
	}
	cout << endl;
}

/***************************************/

// Sum altogether in results[]
// store it in total
void sum() {
	for(int i=0; i<7; i++) {
		total += results[i];
	}
}

/***************************************/

// This is to print out the total.
// This function is created for debugging purpose only;
void printSum() {
	cout << "The total is: " << total << endl;
	cout << endl;
}

/***************************************/

// total divide by divNum to get the remainder
// and store it in FINAL_ANS
void division() {
	FINAL_ANS = total % divNum;
}

/***************************************/

// This is to print out the FINAL_ANS
// This function is created for debugging purpose only;
void printFinalAns() {
	cout << "Remainder is: " << FINAL_ANS << endl;
	cout << endl;
}
