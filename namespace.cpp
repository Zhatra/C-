#include <iostream>
//Namespace = provides a solution for preventing name conficts in large projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.


// namespace first {
//    int x = 1;
// }

// namespace second{
//     int x =2;
// }


int main(){
    using namespace std;
    //using namespace second;
    //int x = 2;
    string name = "Bro";
    //std::cout << first::x;
    cout << "Hello" << name;

    return 0;
}
