//Author: Richard Rosenthal
//Date: 1-11-21
//Local Hack Day: Day 2 challenge (Create a random number generator from scratch)


#include <iostream>
#include <ctime>
#include <string>
#include <chrono>
#include<thread>

using namespace std;

int getRandomNumber();


int main() {


    int userAmount; //To hold how many times the user wants to loop

    cout << "This is a random number generator that will select a number from 0 to 9" << endl;
    cout << "Your random number is " << getRandomNumber() << endl;

    return 0;
}

//Not the most elegant solution to creating random numbers
//But this function creates a random number without using c++ rand function

int getRandomNumber(){
    //grabs time and puts it in a double
    unsigned long num = time(0) * time(0);
    //stringifies the double
    string stringifiedNum = to_string(num);
    //grabs the 9th element (which changes the fastest) of the string and creates a char
    char charNumber = stringifiedNum.at(9);
    //takes the char and casts it back to int, since it would return the ascii value you subtract 48 to get the
    //number that the ascii value represents. (example 0 = 48, 1 = 49, etc)
    int randomNumber = int(charNumber) - 48;
    return randomNumber;
}