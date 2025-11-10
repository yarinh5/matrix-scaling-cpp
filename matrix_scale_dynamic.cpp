#include <iostream>
using namespace std;

int main() {
    int N, scale;

    cout << "Enter matrix size (N): ";
    cin >> N;

    cout << "Enter scale factor: ";
    cin >> scale;

    // הקצאה דינמית של מטריצה מקורית
    int** a = new int*[N];
    for (int i = 0; i < N; i++)
        a[i] = new int[N];

    // הזנת ערכים למטריצה
    cout << "\nEnter " << N*N << " elements:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    // חישוב גודל המטריצה החדשה
    int newSize = N * scale;

    // הקצאה דינמית של מטריצה מוגדלת
    int** b = new int*[newSize];
    for (int i = 0; i < newSize; i++)
        b[i] = new int[newSize];

    // מילוי המטריצה החדשה
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            b[i][j] = a[i / scale][j / scale];
        }
    }

    // הדפסה של המטריצה המקורית
    cout << "\nOriginal matrix (" << N << "x" << N << "):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    // הדפסה של המטריצה החדשה
    cout << "\nScaled matrix (" << newSize << "x" << newSize << "):\n";
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }

    // שחרור זיכרון
    for (int i = 0; i < N; i++)
        delete[] a[i];
    delete[] a;

    for (int i = 0; i < newSize; i++)
        delete[] b[i];
    delete[] b;

    return 0;
}
