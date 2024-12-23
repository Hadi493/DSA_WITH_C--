#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number :: ";
    cin >> n;

    int row = 1;
    // while (row <= n) {
    //     int col = 1;

    //     while (col <= row) {
    //         cout << "#";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "#";
        }
        cout << endl;
    }


    return 0;
}
