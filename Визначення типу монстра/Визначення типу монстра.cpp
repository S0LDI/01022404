#include <iostream>
#include <string>

// Перелік констант для типів монстрів
enum MonsterType {
    ORC,
    TROLL,
    ZOMBIE,
    GOBLIN
};

// Клас, що описує монстра
class Monster {
public:
    // Конструктор класу Monster
    Monster(const std::string& name, int health, MonsterType type)
        : name(name), health(health), type(type) {}

    // Функція для виведення відомостей про монстра
    void printMonster() const {
        std::cout << "Monster: " << name << std::endl;
        std::cout << "Type: ";
        switch (type) {
        case ORC:
            std::cout << "Orc";
            break;
        case TROLL:
            std::cout << "Troll";
            break;
        case ZOMBIE:
            std::cout << "Zombie";
            break;
        case GOBLIN:
            std::cout << "Goblin";
            break;
        default:
            std::cout << "Unknown";
        }
        std::cout << std::endl;
        std::cout << "Health: " << health << std::endl;
        std::cout << "---------------------" << std::endl;
    }

private:
    std::string name;
    int health;
    MonsterType type;
};

int main() {
    // Ініціалізація монстрів з використанням auto і decltype
    auto orc = Monster("Ugluk", 50, ORC);
    decltype(orc) troll("Grom", 70, TROLL);

    // Виведення відомостей про монстрів
    orc.printMonster();
    troll.printMonster();

    return 0;
}
