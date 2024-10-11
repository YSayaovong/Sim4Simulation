#include <string>
#include <iostream>
#include <vector>
#include <utility>

class Item {
private:
    std::string name;
    int quantity;
    float price;

public:
    Item(std::string name, int quantity, float price)
        : name{std::move(name)}, quantity{quantity}, price{price} {}

    std::string get_name() const {
        return name;
    }

    int get_quantity() const {
        return quantity;
    }

    void set_quantity(int new_quantity) {
        quantity = new_quantity;
    }

    float get_price() const {
        return price;
    }

    bool is_match(const std::string &other) {
        return name == other;
    }
};

class Inventory {
private:
    std::vector<Item*> items;  // Use std::vector instead of a fixed array
    float total_money;

    static void display_data(Item &item) {
        std::cout << "\nItem name: " << item.get_name();
        std
