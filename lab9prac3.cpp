#include <iostream>
using namespace std;

int alamin() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive number of elements." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum element: " << maxElement << endl;

}
int main()
{
 alamin();
 return 0;
}
