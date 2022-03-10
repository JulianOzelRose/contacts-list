/***********************************************************************************************
 *   Author:      Julian R.
 *   File:        ContactNode.h
 *   Course:      CS 7B
 *   Assignment:  Project 2A: Contacts List
 *   Date:        3-9-2022
 ***********************************************************************************************/

#ifndef CONTACTNODE_H
#define CONTACTNODE_H
#include <string>
#include <iostream>

class ContactNode {
public:
    ContactNode(std::string t_contactName, std::string t_contactPhoneNum);
    void InsertAfter(ContactNode* tmpPtr);
    std::string GetName() const;
    std::string GetPhoneNumber() const;
    ContactNode* GetNext() const;
    void PrintContactNode();
    virtual ~ContactNode();
private:
    std::string contactName;
    std::string contactPhoneNum;
    ContactNode* nextNodePtr;
};

#endif