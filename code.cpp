#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int votesA = 0, votesB = 0, votesC = 0;

void voteSystem() {
    int choice;

    cout << "\n===== ONLINE VOTING SYSTEM =====\n";
    cout << "1. Candidate A\n";
    cout << "2. Candidate B\n";
    cout << "3. Candidate C\n";
    cout << "Enter your vote: ";
    cin >> choice;

    switch(choice) {
        case 1:
            votesA++;
            cout << "Vote given to Candidate A\n";
            break;

        case 2:
            votesB++;
            cout << "Vote given to Candidate B\n";
            break;

        case 3:
            votesC++;
            cout << "Vote given to Candidate C\n";
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void showResult() {
    cout << "\n===== VOTING RESULT =====\n";
    cout << "Candidate A : " << votesA << " Votes\n";
    cout << "Candidate B : " << votesB << " Votes\n";
    cout << "Candidate C : " << votesC << " Votes\n";

    if(votesA > votesB && votesA > votesC)
        cout << "Winner is Candidate A\n";

    else if(votesB > votesA && votesB > votesC)
        cout << "Winner is Candidate B\n";

    else if(votesC > votesA && votesC > votesB)
        cout << "Winner is Candidate C\n";

    else
        cout << "Election Draw!\n";
}

int main() {
    string username, password;
    int choice;

    cout << "===== LOGIN =====\n";
    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if(username == "admin" && password == "1234") {

        do {
            cout << "\n===== MENU =====\n";
            cout << "1. Vote\n";
            cout << "2. Show Result\n";
            cout << "3. Exit\n";
            cout << "Enter Choice: ";
            cin >> choice;

            switch(choice) {
                case 1:
                    voteSystem();
                    break;

                case 2:
                    showResult();
                    break;

                case 3:
                    cout << "Exiting Program...\n";
                    break;

                default:
                    cout << "Invalid Choice!\n";
            }

        } while(choice != 3);

    } else {
        cout << "Invalid Login!\n";
    }

    return 0;
}