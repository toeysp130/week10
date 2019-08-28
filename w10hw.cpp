#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
void update_balance (string , float , float &balance);
int main() {
    string menu;
    float balance = 10000, amount;
    cout << "Exit with 0 " << endl;
    cout << "Your balance = " << fixed << setprecision(2) << balance << endl;
    do {
        cout << "Input command( 1 or withdraw,2 deposit ) : ";
        cin >> menu;
        if (menu == "0" ){
            break;
        }
        cout << "Input amount : ";
        cin >> amount;
        update_balance(menu, amount, balance);
    } while (menu != "0");
    return 0;
}
void update_balance (string command, float dollars, float &balance){
    if (command == "1"){
        balance = balance - dollars;
        cout << "Your balance = " << fixed << setprecision(2) << balance << endl;
    }
    else if (command == "2"){
        balance = balance + dollars;
        cout << "Your balance = " << fixed << setprecision(2) << balance << endl;
    }
}
