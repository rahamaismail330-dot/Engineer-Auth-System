#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/**
 * نظام التحقق الهندسي الذكي
 * هذا الكود يختبر سرعة استجابة المستخدم وهويته الهندسية
 */

int main() {
    string name;
    int age;
    const int CURRENT_YEAR = 2026;

    cout << "========================================" << endl;
    cout << "   ENGINEERING AUTHENTICATION SYSTEM    " << endl;
    cout << "   TIME LIMIT: 10 SECONDS               " << endl;
    cout << "========================================" << endl;

    // بداية التوقيت
    long long start_time = time(0);

    cout << ">> Enter Name: ";
    cin >> name;

    cout << ">> Enter Age: ";
    cin >> age;

    // نهاية التوقيت
    long long end_time = time(0);
    int duration = end_time - start_time;

    cout << "\n[System] Analyzing data..." << endl;
    cout << "[System] Time taken: " << duration << "s" << endl;

    // اختبار السرعة
    if (duration > 10) {
        cout << "\n❌ ACCESS DENIED: Response too slow for an engineer!" << endl;
    } else {
        if (age == 20) {
            cout << "\n✅ Hello Eng: " << name << " [Rank: Junior]" << endl;
        } else if (age > 20) {
            cout << "\n✅ Welcome Eng: " << name << " [Rank: Senior]" << endl;
            cout << ">> Experience Level: " << (age - 20) << " years." << endl;
        } else {
            cout << "\n⚠️ Sorry " << name << ", this system is for engineers 20+." << endl;
        }
    }

    cout << "========================================" << endl;
    return 0;
}
