#include "Hospital.h"

Hospital::Hospital() : _idCounter(0){}

void Hospital::addPatient(const std::string& name) {
	_patients.insert({ _idCounter , name });
	_idCounter++;
}

void Hospital::removePatient(int key) {
	_patients.erase(key);
}

void Hospital::printAllPatient() {
	for (const auto& [key, value] : _patients) {
		std::cout << key << " " << value;
	}
}







