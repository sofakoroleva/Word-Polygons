#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <cmath>

std::vector<std::string> words = {"apple", "banana", "cherry", "date", "elderberry"};

const double PI = 3.14159265358979323846;

int main() {
    std::random_device rd;
    std::mt19937 engine(rd());
    std::uniform_int_distribution<int> dist(0, words.size()-1);
    int n = 5; // Number of sides of the polygon
    double angle_step = 2*PI/n;
    double radius = 2; // radius of the polygon
    double x,y;
    for (int i = 0; i < n; i++) {
        x = radius * cos(i * angle_step);
        y = radius * sin(i * angle_step);
        std::cout << words[dist(engine)] << ": (" << x << ", " << y << ")" << std::endl;
    }
    return 0;
}
