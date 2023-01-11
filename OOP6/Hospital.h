#pragma once
#include <iostream>
#include <vector>
#include <map>

class Hospital
{
public:
    Hospital();

    void addPatient(const std::string& name);
    void removePatient(int key);
    void printAllPatient();

private:
    std::map<int, std::string> _patients;
    int _idCounter;
};


