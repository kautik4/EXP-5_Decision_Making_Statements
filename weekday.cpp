//Kautik Verma
//PRN:23070123073
//EnTC A3
//Read a number from user between 1 and 7 and display weekday corresponding to that number
//Experiment 5.e
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number between 1 and 7: ";
    cin >> num;

    switch (num) {
        case 1: {
            cout << "It is Sunday" << endl;
            break;
        }
        case 2: {
            cout << "It is Monday" << endl;
            break;
        }
        case 3: {
            cout << "It is Tuesday" << endl;
            break;
        }
        case 4: {
            cout << "It is Wednesday" << endl;
            break;
        }
        case 5: {
            cout << "It is Thursday" << endl;
            break;
        }
        case 6: {
            cout << "It is Friday" << endl;
            break;
        }
        case 7: {
            cout << "It is Saturday" << endl;
            break;
        }
        default: {
            cout << "Invalid input" << endl;
            break;
        }
    }
}
/*OUTPUT
Enter a number between 1 and 7: 5
It is Thursday
*/
