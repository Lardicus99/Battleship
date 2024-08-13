/* Program describes position and traits of a given ship */

#ifndef SHIP_H_
#define SHIP_H_

class ship {
    public:
        // constructor for ship object that passes in ship type
        ship();
        // 
    private:
        // indicate starting point (x,y) of placed ship
        int startCoordinateX;
        int startCoordinateY;
        // indicate whether the ship is layed horizontally or vertically on board
        enum orientation {Horizontal, Vertical};
        // indicate type of ship (which determines length and name)
        enum shipType {};
};

#endif