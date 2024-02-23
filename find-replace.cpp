#include <iostream>
#include <string>
using namespace std;

int main() {

    string fact = "Fyodor is an amazing writer";
    cout << fact << endl;
    size_t pos = fact.find("amazing");
    if (pos != string::npos) {
        fact.replace(pos, 7, "spectacular");
    }
    cout << fact << endl;
    return 0;
}