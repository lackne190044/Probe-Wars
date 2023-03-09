#include <iostream>

#include "GridManager.h"

GridManager::GridManager(int height, int length) {
    grid = new int*[height];
    for (int y = 0; y < sizeof(grid); y++) {
        grid[y] = new int[length];
    }
}

void GridManager::writeGrid() {
    std::string out = "";
    for (int y = 0; y < sizeof(grid); y++) {
        for (int x = 0; x < sizeof(y); x++) {
            out += " ";
        }
        out += "|\n";
    }
    out += "----------------------------";
    std::cout << out << std::endl;
}