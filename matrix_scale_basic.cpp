#include <iostream>
using namespace std;

int main() {
    // הגדרת מטריצה בגודל 2x2 עם ערכים קבועים
    int a[2][2] = {{1, 2}, {3, 4}};
    
    // הגדרת מטריצה חדשה בגודל 4x4 (מאותחלת לאפסים)
    int b[4][4] = {{0, 0, 0, 0},
                   {0, 0, 0, 0},
                   {0, 0, 0, 0},
                   {0, 0, 0, 0}};

    // הדפסת המטריצה המקורית a
    cout << "Original matrix (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    // מילוי המטריצה החדשה b על בסיס a
    // כל איבר ב-b נקבע לפי a[i/2][j/2]
    // כלומר, כל איבר במטריצה a מוכפל לגוש בגודל 2x2 במטריצה b
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            b[i][j] = a[i/2][j/2];
        }
    }

    // הדפסת המטריצה החדשה b לאחר ההכפלה
    cout << "Scaled matrix (4x4):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
