//second
//first
//third
#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter the number of rows: ";
    cin >> num;

    int **array = new int *[num];
    for (int i = 0; i < num; i++)
    array[i] = new int[num];

    cout << endl << "Enter the elements: " << endl;
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++)
            cin >> array[i][j];
    }

    cout << endl << "Your array: " << endl;
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++)
            cout << array[i][j] << ends;
        cout << endl;
    }

     for (int i = 0; i < num; i++)
         for(int g = 0; g < i; g++)
             if(array[i][g] < 0)
             sum += array[i][g];

     cout << endl << "Sum = " << sum;

    for(int i = 0; i < num; i++)
        delete [] array[i];
    delete [] array;
}
