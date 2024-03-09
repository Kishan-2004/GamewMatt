#include <iostream>
#include <vector>
#include <algorithm>

const int home = 0;
const int outside = 1;
const int gym = 2;

void printloc (int currentloc){
    std::cout << "Current location: ";  
    if (currentloc == home) {
        std::cout << "home" << std::endl; 
    }
    if (currentloc == outside) {
        std::cout << "outside" << std::endl;
    }
    if (currentloc == gym){
        std::cout << "gym" << std::endl;
    }
}

int main() {
    int currentloc = home;
    std::vector <int> explore;
    while (true){
        printloc(currentloc);
        do {
            for (int i = 0;i < explore.size() ;i++) {
                std::cout << explore[i] << std::endl;
            }
            std::cout << "home(0)    outside(1)    gym(2)\n";
            std::cout << "Where would you like to go: ";
            std::cin >> currentloc;
            if (currentloc < 0 || currentloc > 2) {
                std::cout << "Sorry you can only choose 0, 1, or 2: " << std::endl;
            } else {
                if (std::find(explore.begin(), explore.end(), currentloc) == explore.end()) {
                    explore.push_back(currentloc);
                }
            } 
        } while (currentloc < 0 || currentloc > 2);
        if (explore.size() == 3) {
            break;
        }
    } 
    std::cout << "You have explored 100% of the game" << std::endl;
}
