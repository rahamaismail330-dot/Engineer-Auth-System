#include <iostream> 
#include <string>
#include <ctime> 
using namespace std; 
int main() {
    string name; 
    int age;

  // بدايه الوقت 
    long long start_time = time(0); 

    //ادخال البيانات 
    cout << "Enter your name: ";
    cin >> name; 

    cout << "Enter your age: ";
    cin >> age; 

    // نهايه الوقت 
    long long end_time = time(0); 

   // الوقت المسنخدم 
    int time_taken = end_time - start_time; 

    cout << "\n--- Result ---" << endl;
    cout << "Time taken: " << time_taken << " seconds" << endl;

    if (time_taken > 10) {
        cout << " You were too slow!" << endl;
    } 
    else {
        if (age >= 20) {
            cout << "hello eng : " << name << endl; 
        }
        else if (age > 20) {
            cout << "how are you eng : " << name << " ?? " << endl;
        }
        else {
            cout << "go out please " << name << endl;
        }
    }
return 0 ;
}


