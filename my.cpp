#include <vector>
#include <list>
#include <utility>

template<typename K, typename V>
class HashTable {
private:
    std::vector<std::list<std::pair<K, V>>> table;
    int capacity;
    
    int hash(const K& key) const {
        return std::hash<K>{}(key) % capacity;
    }
    
public:
    HashTable(int size = 10) : capacity(size) {
        table.resize(capacity);
    }
    
    void put(const K& key, const V& value) {
        int index = hash(key);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        table[index].emplace_back(key, value);
    }
    
    V get(const K& key) const {
        int index = hash(key);
        for (const auto& pair : table[index]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        throw std::out_of_range("Key not found");
    }
    
    bool contains(const K& key) const {
        int index = hash(key);
        for (const auto& pair : table[index]) {
            if (pair.first == key) {
                return true;
            }
        }
        return false;
    }
};
