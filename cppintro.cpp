#include <iostream>
#include <string>
using namespace std; // to avoid using std::string and std::cout

int main() {
    string name;
    cout << "Enter your name: "; 
    cin >> name; // read user input
    cout << "Hello " << name << " Welcome to C++ beginner codes!" << endl;
    return 0;
}