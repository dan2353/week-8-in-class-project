//week 8 in class project
// Created by danan on 5/16/2025.
//

#include "assets.h"
#include <sstream>

Assets::Assets() : _name(""), _tags(nullptr), _numTags(0) {}
Assets::Assets(const string& name) : _name(name), _tags(nullptr), _numTags(0) {}
Assets::Assets(const Assets& other) {
    _name = other._name;
    _numTags = other._numTags;
    _tags = new string[_numTags];
    for (size_t i = 0; i < _numTags; ++i) {
        _tags[i] = other._tags[i];
    }
}
Assets& Assets::operator=(const Assets& other) {
    if (this != &other) {
        delete[] _tags;
        _name = other._name;
        _numTags = other._numTags;
        _tags = new string[_numTags];// allocate new memory
        for (size_t i = 0; i < _numTags; ++i) {
            _tags[i] = other._tags[i];
        }
    }
    return *this;
}
Assets::~Assets() {
    delete[] _tags;
}
void Assets::AddTag(const string& tag) {
    string* newTags = new string[_numTags + 1];
    for (size_t i = 0; i < _numTags; ++i) {
        newTags[i] = _tags[i];
    }
    newTags[_numTags] = tag;
    delete[] _tags;         //delete current tags
    _tags = newTags;
    ++_numTags;
}
string Assets::ToString() const {
    ostringstream out;
    out << "Name: " << _name << ", Tags: [";
    for (size_t i = 0; i < _numTags; ++i) {
        out << _tags[i];
        if (i != _numTags - 1) out << ", "; //  To add comma between tags.
    }
    out << "]";
    return out.str();
}