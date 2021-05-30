#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // Declare variables
    char action;
    vector<string> names;
    string name;
    int index;


    // Loop until the user decides to quit (Q)
    while (action != 'Q' )
    {
        // Display values in vector
        for (int i = 0; i < names.size(); i++){
            cout << i << " - " << names[i] << endl;
        }

        // Prompt for user input
        cout << "A-Add a name, R-Remove a name, Q-Quit: ";
        cin >> action;

        switch(action)
        {
        // User wants to add a name
        case 'A' :
            cout << "Enter name to add: ";
            cin >> name;
            name[0] = toupper(name[0]);
            names.push_back(name);
            sort(names.begin(), names.end());
            break;

        // User wants to remove a name
        case 'R' :
            cout << "Enter the index of the name to remove: ";
            cin >> index;

            // Make sure the value entered is valid
            if (index > (names.size() - 1) || index < 0){
                cout << "Invalid value entered." << endl;
            } else {
                names.erase(names.begin() + index);
            }
            break;

        // User wants to quit
        case 'Q' :
            break;

        // User entered an invalid value
        default:
            cout << "Invalid value specified." << endl;
            break;
        }
    }
}
