#include <iostream>
#include <string>
using namespace std;

int main () {

        // Declaration of a comparator String
            string c = "@gmail.com";
            string email;

            bool check = false;
            cout << " Enter Email : ";
            cin >> email;
            int q = email.length();
            int k = 9;
        // Engine for a Program
           for (int i = q-1; i > q-9; i--) {
                if (email[i] == c[k]) {
                    check = true;
                    
                } else {
                    check = false;
                    break;
                }
                k--;
            }
        // Printer
            if (check == true) {
                if (q > 10) {
                    cout << " Correct Format ";
                } else if (q <= 10) {
                    cout << " Correct Format but incomplete email ";
                }
                
            } else {
                cout << " wrong Format ";
            }

    return 0;
}

    // BARAZABYTE