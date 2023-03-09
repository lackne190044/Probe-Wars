#pragma once

class GridManager
{
private:
    int** grid;
public:
    GridManager(int height, int length);
    void writeGrid();
};
