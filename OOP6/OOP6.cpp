#include <iostream>
#include <vector>
#include <map>
#include <set>
#include "Hospital.h"
#include <unordered_map>



// class Hospital
// map _patients
// можно добавлять и удалять пациентов

int main()
{
    std::vector<int> vec;
    vec.push_back(5); // 5
    vec.push_back(3); // 5 3


    //инициализация с помощью листа инициализации (initializer list)
    std::vector<std::string> vec2{ "alex", "john" };

    vec2.erase(vec2.begin() + 1); //john deleted

    //push_back O(1) - константная сложность (О а не ноль)
    //emplace - добавление в середину О(n) n=size
    //erase - O(n)

    //инвалидация итераторов
    //for (std::vector<std::string>::const_iterator it = vec2.begin(); it != vec2.end(); it++) {
    //    std::cout << *it << std::endl;
    //    vec2.erase(it); //инвалидация
    //}
    //инвалидация итераторов 2
    //std::vector<std::string>::const_iterator it = vec2.begin();
    //vec2.erase(vec2.begin()); // после удаления итератор (указатель) сломан (инвалидирован) 


    //map (словарь) - контейнер, содержит пары: ключ - значение, ключ обязан быть уникальным
    std::map<int, std::string> mymap; // map - словарь
    mymap.insert({ 1, "tom" });
    mymap.insert(std::make_pair(2, "abc"));

    for (const auto& [key, value] : mymap) {
        std::cout << key << " " << value;
    }




    std::map<int, std::vector<std::string>> bigMap;
    bigMap.insert({ 1,{"alex", "john"} });
    std::vector<std::string> someVec{"Harry", "Alice"};
    bigMap.insert({ 2,someVec });
    // bigMap 1 {"alex", "john"}
    // bigMap 2 { "Harry", "Alice" }
    // bigMap.insert({ 1,"fdsgf" }); - не вставиться (ключ "1" не уникален)

    Hospital h;
    h.addPatient("Alex");
    std::cout << "===============\n";
    h.addPatient("Anna");
    std::cout << "===============\n";
    h.printAllPatient();
    std::cout << "===============\n";

    h.removePatient(1);
    h.printAllPatient();


    //set - коллекция, хранит только ключи
    std::set<int> myset;

    std::unordered_map <int, std::string> umap; //неупорядоченная мапа те не сортируется, саммый быстрый контейнер О(1) - вставка, удаление, поиск
    //key -> hash() -> unique hasa for key
    // hash for key - value



}

