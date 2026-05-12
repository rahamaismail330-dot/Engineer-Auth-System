#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {

    string name;
    int age;

    long long start_time = time(0);

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    long long end_time = time(0);

    int time_taken = end_time - start_time;

    cout << "\n--- Result ---" << endl;
    cout << "Time taken: " << time_taken << " seconds" << endl;

    if (time_taken > 10) {

        cout << "You were too slow!" << endl;

    } 
    else {

        if (age >= 20) {

            cout << "Hello eng: " << name << endl;

        } 
        else {

            cout << "Go out please " << name << endl;
        }
    }

    return 0;
}

