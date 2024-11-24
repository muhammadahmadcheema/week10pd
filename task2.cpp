#include <iostream>
#include <string>
using namespace std;

int main() {
    string direction;
    int totalDegrees = 0;

    cout << "Input directions (left/right). Type 'stop' to end input:" << endl;

    while (true) {
        cin >> direction;

        if (direction == "stop"){
            break;
        }

        if (direction == "right"){
            totalDegrees += 90; 
        } else if (direction == "left"){
            totalDegrees -= 90; 
        } else {
            cout << "Wrong input. Please enter 'left', 'right', or 'stop'." << endl;
        }
    }
    int fullRotations = abs(totalDegrees / 360);

    cout << "Full rotations made: " << fullRotations << endl;
}
