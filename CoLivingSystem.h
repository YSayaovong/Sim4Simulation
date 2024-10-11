#ifndef COLIVING_SYSTEM_H
#define COLIVING_SYSTEM_H

#include <vector>
#include <string>

class Roommate;
class Chore;
class Bill;
class SharedGoal;
class Decision;
class RoommateRelationship;

// Class to represent a Roommate (Sim in the co-living system)
class Roommate {
private:
    std::string name;
    int mood;
    int responsibilityLevel;

public:
    Roommate(std::string name, int responsibilityLevel);
    
    // Getters and setters
    std::string getName() const;
    void setMood(int mood);
    int getMood() const;

    // Behaviors
    void completeChore(Chore& chore);
    void voteOnDecision(Decision& decision);
    void payBill(Bill& bill);
};

// Class to represent the communal living space
class CoLivingSpace {
private:
    std::vector<Roommate> roommates;
    std::vector<Chore> chores;
    std::vector<Bill> bills;
    std::vector<SharedGoal> sharedGoals;
    Decision houseRules;

public:
    CoLivingSpace();
    
    // Manage roommates
    void addRoommate(Roommate& roommate);
    void removeRoommate(Roommate& roommate);
    
    // Assign chores and manage bills
    void assignChore(Chore& chore, Roommate& roommate);
    void addBill(Bill& bill);
    
    // Handle shared goals
    void addSharedGoal(SharedGoal& goal);
    void evaluateSharedGoals();
};

// Class to represent a Chore in the system
class Chore {
private:
    std::string name;
    bool isCompleted;
    
public:
    Chore(std::string name);
    
    // Getters and setters
    bool getStatus() const;
    void markComplete();
};

// Class to represent a
