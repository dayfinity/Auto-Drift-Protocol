#include <iostream>
#include <cstdlib>
#include <ctime>

int systemEvent() {
    return std::rand() % 4;
}

void showCarState(int speed, int stability) {
    std::cout << "\n--- Vehicle Status ---\n";
    std::cout << "Speed: " << speed << "\n";
    std::cout << "Stability: " << stability << "\n";
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int speed = 10;
    int stability = 10;

    std::cout << "=== Auto Drift Protocol ===\n";

    for (int lap = 1; lap <= 7; lap++) {
        int action;

        std::cout << "\nLap " << lap << "\n";
        std::cout << "1. Boost\n2. Cruise\n3. Drift -> ";
        std::cin >> action;

        int event = systemEvent();

        if (action == 1) {
            std::cout << "High acceleration engaged.\n";
            speed += 15;
            stability -= 3;
        } else if (action == 2) {
            std::cout << "Balanced cruising mode.\n";
            speed += 8;
        } else {
            std::cout << "Drift maneuver activated.\n";
            speed += 12;
            stability -= 2;
        }

        if (event == 0)
            std::cout << "benz performance calibration.\n";
        else if (eve
