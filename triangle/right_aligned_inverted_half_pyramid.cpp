#include <iostream>
using namespace std;

int main () {
    int i = 1;
    while (i <= 8) {
        int j = 1;
        while (j <= i) {
            cout << " ";
            j++;
        }

        int k = 1;
        while (k <= 8 - i) {
            cout << "* ";
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
