#include <iostream>
using namespace std;

bool ConsecutivePossible(int arr[], int n) {
    if (n <= 0) 
    {
        return false; 
    }

    int minNum = arr[0];
    int maxNum = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < minNum) 
        {
            minNum = arr[i];
        }
        if (arr[i] > maxNum) 
        {
            maxNum = arr[i];
        }
    }

    if (maxNum - minNum + 1 != n) 
    {
        return false; 
    }

    int visited[100] = {0};

    for (int i = 0; i < n; i++) 
    {
        if (visited[arr[i] - minNum] == 1) 
        {
            return false; 
        }
        visited[arr[i] - minNum] = 1;
    }

    return true; 
}

int main() {
    int n;
    cout << "Enter the # of elements: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Wrong input." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    bool decider = ConsecutivePossible(arr, n);
    if (decider) 
    {
        cout << "True" << endl;
    } 
    else 
    {
        cout << "False" << endl;
    }
}
