#include <iostream>
using namespace std;

int main() {
    int n, s;

    cout << "Enter matrix size : ";
    cin >> n;

    cout << "Enter scale factor : ";
    cin >> s;

    // הקצאה דינמית של מטריצה מקורית
    int** a = new int*[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];

    // הזנת ערכים למטריצה
    cout << "\nEnter " << n * n << " elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // חישוב גודל המטריצה החדשה
    int newMat = n * s;

    // הקצאה דינמית של מטריצה מוגדלת
    int** b = new int*[newMat];
    for (int i = 0; i < newMat; i++)
        b[i] = new int[newMat];

    // מילוי המטריצה החדשה
    for (int i = 0; i < newMat; i++) {
        for (int j = 0; j < newMat; j++) {
            b[i][j] = a[i / s][j / s];
        }
    }

    // הדפסה של המטריצה המקורית
    cout << "\nOriginal matrix (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    // הדפסה של המטריצה החדשה
    cout << "\nScaled matrix (" << newMat << "x" << newMat << "):\n";
    for (int i = 0; i < newMat; i++) {
        for (int j = 0; j < newMat; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }

    // שחרור זיכרון
    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;

    for (int i = 0; i < newMat; i++)
        delete[] b[i];
    delete[] b;

    return 0;
}
