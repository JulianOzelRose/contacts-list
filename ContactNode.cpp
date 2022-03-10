/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        ContactNode.cpp
 *   Course:      CS 7B
 *   Assignment:  Project 2A: Contacts List
 *   Date:        3-9-2022
 ***********************************************************************************************/

#include "ContactNode.h"

ContactNode::ContactNode(std::string t_contactName, std::string t_contactPhoneNum) {
    this->contactName = t_contactName;
    this->contactPhoneNum = t_contactPhoneNum;
    return;
}

void ContactNode::InsertAfter(ContactNode* tmpPtr) {
    ContactNode* holdNode = NULL;

    holdNode = this->nextNodePtr;
    this->nextNodePtr = tmpPtr;
    tmpPtr->nextNodePtr = holdNode;
}

std::string ContactNode::GetName() const {
    return contactName;
}

std::string ContactNode::GetPhoneNumber() const {
    return contactPhoneNum;
}

ContactNode* ContactNode::GetNext() const {
    return nextNodePtr;
}

void ContactNode::PrintContactNode() {
    std::cout << "Name: " << this->GetName() << std::endl;
    std::cout << "Phone number: " << this->GetPhoneNumber() << std::endl;
}

ContactNode::~ContactNode() {
    // Destructor
}
