#include <iostream>
#include <string>
using namespace std;

int main() {

    string fact = "Fyodor is an amazing writer"; //initailizing string
    cout << fact << endl; //printing it
    size_t pos = fact.find("amazing"); // initailizing the word u wanna replace
    if (pos != string::npos) { // finding the word u wanna replace
        fact.replace(pos, 7, "spectacular"); //replacing the word u wanna replace
    }
    cout << fact << endl; //printing the string again ;)
    return 0;
}