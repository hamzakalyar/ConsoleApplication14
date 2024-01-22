#include <iostream>
#include <string>
#include<algorithm>
using namespace std;


//void stringFrequency(const string& alpha) {
//    int frequency[26] = { 0 }; // Array to store frequency of each letter
//
//    for (char ch : alpha) {
//        if (isalpha(ch)) {
//            int index = tolower(ch) - 'a'; // Convert to lowercase and calculate array index
//            frequency[index]++;
//        }
//    }
//
//    for (char letter = 'a'; letter <= 'z'; ++letter) {
//        int index = letter - 'a';
//        if (frequency[index] > 0) {
//            cout << letter << "=" << frequency[index] << "\n";
//        }
//    }
//}

//string pp(string alpha) {
//    return sort(alpha.begin(), alpha.end());
//}


    //cout << "Enter values for array 1(2/3):\n";
    //for (int i = 0; i < 2; i++) {
    //    for (int j = 0; j < 3; j++) {
    //        cin >> array1[i][j];
    //    }
    //}


    //cout << "Enter values for array 2(3/4):\n";
    //for (int i = 0; i < 3; i++) {
    //    for (int j = 0; j < 4; j++) {
    //        cin >> array2[i][j];
    //    }
    //}


    //for (int i = 0; i < 2; i++) {
    //    for (int j = 0; j < 4; j++) {
    //        for (int k = 0; k < 3; k++) {  // This loop should iterate up to the size of the second dimension of array1 or the first dimension of array2
    //            ans[i][j] += array1[i][k] * array2[k][j];
    //        }
    //    }
    //}


    //cout << "The result of multiplication is:\n";
    //    for (int i = 0; i < 2; i++) {
    //        for (int j = 0; j < 4; j++) {
    //            cout << ans[i][j]<<" ";
    //        }
    //        cout << endl;
    //    }

    /*int hamza[2][3];
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> hamza[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += hamza[i][j];
        }
    }
    cout << sum;
    return 0;
}*/
    using namespace std;

    int main() {
        int array[5] = { 10, 20, 30, 40, 50 };

        // Using a range-based for loop to iterate over the elements of the array by reference
        for (int& tyi : array) {
            // 'element' is a reference to the current array element
            cout << tyi << " ";
        }

        return 0;
    }

