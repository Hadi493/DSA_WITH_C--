#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number :: ";
    cin >> n;

    int i = 1;

    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         // 1 2 3 4 5
    //         // cout << j << " ";
    //         // 5 4 3 2 1
    //         // cout << n - j + 1 << " ";
    //         j++;
    //     }
    //     // cout << endl;
    //     i++;
    // }

    // int count = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    
    // int c = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= i) {
    //         cout << c << " ";
    //         c++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    while (i <= n) {
        int j = 1;
        while(j <= i) {
            cout << (i - j + 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    

    return 0;
}
