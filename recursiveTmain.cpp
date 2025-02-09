#include <iostream>
#include <string>


using namespace std;

void printFibonacci(int number) {
	int temp = 0;
	int num1 = 1;
	int num2 = 1;
	cout << num1 << " ";
	for (int i = 1; i < number; i++) {
		cout << num2 << " ";
		temp = num2;
		num2 = num1 + num2;
		num1 = temp;

	}
}


//int printFibonacciRecursive(int n) {
//
//	if (n > 0)
//	{
//		return printFibonacciRecursive(n - 1) + printFibonacciRecursive(n - 2);
//
//	}
//}


void printFibonacciRecursive(int number, int n1, int n2) {

	if (number>0) {
		int f = n1 + n2;
		cout << n1<<" ";
		n1 = n2;
		n2 = f;
		printFibonacciRecursive(number - 1, n1, n2);
	}
}

string readString() {


	string line;
	cout << "Enter a String" << endl;
	getline(cin, line);
	return line;
}

void printFirstLetter(string str) {

	bool isFirstLetter = true;

	for (int i = 0; i < str.length(); i++) {
		if (str[i]!=' ' && isFirstLetter)
			cout << str[i] << endl;


		isFirstLetter = str[i] == ' ' ? true : false;


	}
}


string MakeFirstLetterCapital(string str) {

	bool isFirstLetter = true;

	for (int i = 0; i < str.length(); i++) {

		if (str[i] != ' ' && isFirstLetter) 
			str[i]= toupper(str[i]);
		
		
		isFirstLetter = str[i] == ' ' ? true : false;


	}
	return str;
}

string toUpper(string str) {
	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);
	
	}
	return str;

}


string toLower(string str) {
	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}
	return str;
}


void printAllCapitalAllSmall(string str) {

	cout << "String after Upper: " << endl;
	cout<<toUpper(str)<<endl;
	cout << "String after lower: " << endl;
	cout << toLower(str) << endl;

}


string MakeFirstLetterSmall(string str) {

	bool isFirstLetter = true;

	for (int i = 0; i < str.length(); i++) {

		if (str[i] != ' ' && isFirstLetter)
			str[i] = tolower(str[i]);


		isFirstLetter = str[i] == ' ' ? true : false;


	}
	return str;
}


//char invertLetterCase(char myChar) {
//
//	if (myChar <= 90 && myChar >= 65) {
//		myChar = myChar + 32;
//	}
//	else if (myChar <= 122 && myChar >= 97) {
//		myChar = myChar - 32;
//	}
//	return myChar;
//}


char invertLetterCase(char myChar) {

	return isupper(myChar) ? tolower(myChar) : toupper(myChar);
}



int countSmallLetter(string str ) {
	int c = 0; 

	for (int i = 0; i < str.length(); i++) {
		if (isupper(str[i])) {
			c++;
		}
	}

	return c;
}
int countCapitalL(string str) {
	int c = 0;

	for (int i = 0; i < str.length(); i++) {
		if (islower(str[i])) {
			c++;
		}
	}

	return c;

}


void printInfo(string str){
	cout << "String Length = "<< str.length()<<" ";
		cout << "Capital Letters Counter = "<< countCapitalL(str)<<" ";
		cout << "Small Letters Count = " << countSmallLetter(str)<<" ";
}


string convertAllLetter(string str) {

	for (int i = 0; i < str.length(); i++) {

		str[i] = invertLetterCase(str[i]);

	}
	return str;

}

int countLetter(string str, char m){
	int c = 0;

	for (int i = 0; i < str.length(); i++)
		if (str[i] == m)
			c++;

			return c;
}

int countLetterIgnoreCase(string str, char m) {
	int c = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == m || str[i] == invertLetterCase(m))
			c++;
	}
		return c;
	
}
bool isVowel(char a) {
	if( tolower(a) == 'a' || tolower(a) == 'e' || tolower(a) == 'u' || tolower(a) == 'i' || tolower(a) == 'o') {

		return true;
	}
	else
		return false;

}

int countVowel(string str) {
	int count = 0;

	for (int i = 0; i < str.length(); i++) {
		char ch = tolower(str[i]);

		if (ch == 'a' || ch == 'e' || ch== 'u' || ch == 'i' || ch== 'o') {

			count++;
		}
		
	}

	return count;
}
void printVowel(string str) {

	for (int i = 0; i < str.length(); i++) {
		char ch = tolower(str[i]);
		if (ch == 'a' || ch == 'e' || ch == 'u' || ch == 'i' || ch == 'o')
			cout << str[i] << "  ";
	
	
	}
}

//void printWordInDifferentLines(string str) {
//	bool newW = false;
//
//	for (int i = 0; i < str.length(); i++) {
//	
//        if(!newW && (str[i] != ' ')) {
//		cout << str[i] ;
//	     } 
//	else {
//		if (str[i] == ' ')
//			newW = true;
//	/*	if (newW && (str[i] != ' ')) {
//			newW = false;
//			cout << "\n";
//			cout << str[i];*/
//		}
//	}
//
//
//	
//	
//	}

int findPosition(string str,char key) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == key)
			return i;
	}

	return -1;
}

void printWordInDifferentLines(string str) {
	char delim =' ';
	string word = "";
	int pos = 0;
	
	while ((pos = findPosition(str,delim)) != -1)
	{
	word = str.substr(0, pos);

	if (word != "") {
		cout << word << "\n";
	}

    str.erase(0, pos + 1);
	}

	cout << str;
}


int countWordInString(string str) {
	char delim = ' ';
	string word;
	int count = 0;
	int pos = 0;

	while ((pos = findPosition(str, delim)) != -1)
	{
		word = str.substr(0,pos);

		if (word != "") {
			count++;
		}

		str =str.erase(0, pos + 1);
	}

	count++;

	return count;
}


int main() {
	string str =readString();
	/*char m;
	cout << "Please Enter a char  ";
	cin >> m;*/
	cout<< countWordInString(str);

}