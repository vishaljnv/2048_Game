/*
 * GameLogic.hpp
 *
 *  Created on: Nov 20, 2018
 *      Author: Vishal
 */

#ifndef GAME_HPP
#define GAME_HPP

#include "DisplayApp.hpp"

enum Directions {
    Still,
    Up,
    Down,
    Right,
    Left
};

class Game {
    public:
        int grid[4][4];
        int score;
        DisplayApp *displayApp;

    public:
        Game(DisplayApp *displayApp);
        void updateGrid();
        void run();
        void moveTiles(Directions inputDirection);
        void rotate();
        void generate();
        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();
};

#endif
