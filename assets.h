//week 8 in class project
// Created by danan on 5/16/2025.
#ifndef ASSETS_H
#define ASSETS_H

#include <string>
using namespace std;

class Assets {
private:
    string _name;
    string* _tags;
    size_t _numTags;

public:
    Assets();
    Assets(const string& name);
    // Copy constructor
    Assets(const Assets& other);
    // Assignment operator
    Assets& operator=(const Assets& other);
    // Destructor
    ~Assets();
    void AddTag(const string& tag);
    string ToString() const;
};
#endif //ASSETS_H
