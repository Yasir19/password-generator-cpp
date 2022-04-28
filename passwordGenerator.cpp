#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <cstdlib>
#include <ctime>
// function to chech the length of the string 
int checkPasswordLength(std::string str){
// define the password length 
int passwordLength;
// try to check the password length or catch err
try {
    passwordLength = std::stoi(str);
    std:: cout<<passwordLength<< std::endl;
} catch(...) {
    std:: cout<<"Invalid password length" << std::endl;
}
}