#include <iostream>
#include <string>
using namespace std;
int main() {
    string tahapan[] = {"Planning", "Analysis", "Design", "Implementation", "System"};
    cout << "--- Alur Waterfall (C++) ---" << endl;
    for(int i=0; i<5; i++) { cout << "Tahap: " << tahapan[i] << endl; }
    return 0;
}