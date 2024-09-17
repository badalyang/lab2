#include <iostream>
using namespace std;

int main() {
    int a, b, min, bigger;

    cout << "Enter the number A: ";
    cin >> a;
    cout << "Enter the number B: ";
    cin >> b;
  
    bigger = (a < b) ? b : a;
    int smaller = (a > b) ? b : a;
    
    min = bigger;
    
    
    while (min % a != 0 || min % b != 0) {
        min += bigger;  
    }
    
    cout << "LCM is: " << min << endl;
    return 0;
}
