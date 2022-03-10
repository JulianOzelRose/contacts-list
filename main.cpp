/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        main.cpp
 *   Course:      CS 7B
 *   Assignment:  Project 2A: Contacts List
 *   Date:        3-9-2022
 ***********************************************************************************************/

#include <iostream>
#include "ContactNode.h"
using namespace std;

int main() {
    ContactNode* headNode = new ContactNode("head", "head");
    ContactNode* tailNode = NULL;
    ContactNode* currNode = NULL;

    const int NUM_PEOPLE = 3;
    string nameInput;
    string phoneNumInput;

    tailNode = headNode;

    for (int i = 0; i < NUM_PEOPLE; i++) {
        cout << "Person " << i + 1 << endl;
        cout << "Enter name:" << endl;
        getline(cin, nameInput);
        cout << "Enter phone number:" << endl;
        getline(cin, phoneNumInput);
        cout << "You entered: " << nameInput << ", " << phoneNumInput << endl << endl;

        currNode = new ContactNode(nameInput, phoneNumInput);
        tailNode->InsertAfter(currNode);
        tailNode = currNode;

        if (i == NUM_PEOPLE) {
            cout << endl;
        }
    }

    cout << "CONTACT LIST" << endl;

    currNode = headNode->GetNext();

    for (int i = 0; i < NUM_PEOPLE; i++) {
        currNode->PrintContactNode();
        cout << endl;
        currNode = currNode->GetNext();
    }

    return 0;
}
