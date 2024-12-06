#include <iostream>
#include <string>
#include <random>

#include "API.h"

void log(const std::string& text) {
    std::cerr << text << std::endl;
}

int main(int argc, char* argv[]) {
    log("Running...");
    API::setColor(0, 0, 'G');
    API::setText(0, 0, "abc");

    std::random_device rd; // Seed for the random number engine
    std::mt19937 gen(rd()); // Mersenne Twister random number engine
    std::uniform_int_distribution<> distrib(1, 10);
    int random;

    while (true) {
        random=distrib(gen);
        if (random%2==1)
        {
            for (int i=0; i<random; i++)
            {
                if (!API::wallLeft()) {
                API::turnLeft();
                }
                while (API::wallFront()) {
                    API::turnRight();
                }
                API::moveForward();
            }
        }
        else
        {
            for (int i=0; i<random; i++)
            {
                if (!API::wallRight()) {
                API::turnRight();
                }
                while (API::wallFront()) {
                    API::turnLeft();
                }
                API::moveForward();
            }
        }
    }
}
