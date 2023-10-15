#include <iostream>
#include <string>
#include <vector>
//typedef = reserverd keyword used to create an 
// additonial name (alias) for another data type.
// New identifier for an existing type
// Helps with readability and reduces typos
// Use when there is a clear benefit
// Replaced with 'using' (work better w/ templates)

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;
 
int main(){
    text_t firstName = "Christian";
    number_t age = 19;
    std::cout << firstName << '\n' << age;
   //pairlist_t pairlist;
    return 0;
}