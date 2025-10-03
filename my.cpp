#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Создание хеш-таблицы
    std::unordered_map<std::string, std::string> student;
    
    // Добавление элементов
    student["name"] = "Alice";
    student["age"] = "20";
    student["grade"] = "A";
    
    // Получение значений
    std::cout << student["name"] << std::endl;  // Alice
    
    // Проверка наличия ключа
    if (student.find("age") != student.end()) {
        std::cout << "Возраст есть" << std::endl;
    }
    
    // Удаление
    student.erase("grade");
    
    // Перебор всех элементов
    for (auto& pair : student) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    
    return 0;
}
