#include "micromouseserver.h"
#include <iostream>

using namespace std;

//updates the counts left, forward, and right using position matrix & based off the current direction of the mouse
void microMouseServer::updatePosition(int currentDirection, int &x, int &y, int &leftCount, int &forwardCount, int &rightCount, int (mousePosition)[20][20]) {

    if(!isWallLeft()) {
        if (currentDirection == 0) {
            leftCount = mousePosition[x-1][y];
        }
        else if (currentDirection == 1) {
            leftCount = mousePosition[x][y+1];
        }
        else if (currentDirection == 2) {
            leftCount = mousePosition[x+1][y];
        }
        else if (currentDirection == 3) {
            leftCount = mousePosition[x][y-1];
        }
    }
    else {
        leftCount = INT_MAX;
    }

    if(!isWallForward()) {
        if (currentDirection == 0) {
            forwardCount = mousePosition[x][y+1];
        }
        else if (currentDirection == 1) {
            forwardCount = mousePosition[x+1][y];
        }
        else if (currentDirection == 2) {
            forwardCount = mousePosition[x][y-1];
        }
        else if (currentDirection == 3) {
            forwardCount = mousePosition[x-1][y];
        }
    }
    else {
        forwardCount = INT_MAX;
    }

    if(!isWallRight()) {
        if (currentDirection == 0) {
            rightCount = mousePosition[x+1][y];
        }
        else if (currentDirection == 1) {
            rightCount = mousePosition[x][y-1];
        }
        else if (currentDirection == 2) {
            rightCount = mousePosition[x-1][y];
        }
        else if (currentDirection == 3) {
            rightCount = mousePosition[x][y+1];
        }
    }
    else {
        rightCount = INT_MAX;
    }

}

//updates coordinates based on direction
void microMouseServer::updateCoordinates(int currentDirection, int &x, int &y) {
    if (currentDirection == 0) {
        y++;
    }
    else if (currentDirection == 1) {
        x++;
    }
    else if (currentDirection == 2) {
        y--;
    }
    else if (currentDirection == 3) {
        x--;
    }
}

void microMouseServer::studentAI()
{

/*
* The following are the eight functions that you can call. Feel free to create your own fuctions as well.
* Remember that any solution that calls moveForward more than once per call of studentAI() will have points deducted.
*
*The following functions return if there is a wall in their respective directions
*bool isWallLeft();
*bool isWallRight();
*bool isWallForward();
*
*The following functions move the mouse. Move forward returns if the mouse was able to move forward and can be used for error checking
*bool moveForward();
*void turnLeft();
*void turnRight();
*
* The following functions are called when you need to output something to the UI or when you have finished the maze
* void foundFinish();
* void printUI(const char *mesg);
*/

    //intialize variables
    static int mousePosition [20][20];
    static int endingCase = 0;
    static int currentDirection = 0;
    static int leftCount = 0;
    static int forwardCount = 0;
    static int rightCount = 0;
    static int x = 0, y = 0;
    mousePosition[x][y]++;
    updatePosition(currentDirection, x, y, leftCount, forwardCount, rightCount, mousePosition);

    //left wall check
    if(!isWallLeft() && leftCount <= rightCount && leftCount <= forwardCount) {
        turnLeft();
        endingCase = 0;
        //update currentDirection
        if (currentDirection == 0) {
            currentDirection = 3;
        }
        else if (currentDirection == 1) {
            currentDirection = 0;
        }
        else if (currentDirection == 2) {
            currentDirection = 1;
        }
        else if (currentDirection == 3) {
            currentDirection = 2;
        }
        moveForward();
        updateCoordinates(currentDirection, x, y);

    }

    //front wall check
    else if (!isWallForward() && forwardCount <= rightCount && forwardCount <= leftCount) {
        moveForward();
        endingCase = 0;
        updateCoordinates(currentDirection, x, y);
    }

    //right wall check
    else if (!isWallRight() && rightCount <= leftCount && rightCount <= forwardCount) {
        turnRight();
        endingCase++;
        //update currentDirection
        if (currentDirection == 0) {
            currentDirection = 1;
        }
        else if (currentDirection == 1) {
            currentDirection = 2;
        }
        else if (currentDirection == 2) {
            currentDirection = 3;
        }
        else if (currentDirection == 3) {
            currentDirection = 0;
        }
        moveForward();
        updateCoordinates(currentDirection, x, y);
    }

    //turn around if boxed in
    else {
        turnLeft();
        turnLeft();
        endingCase = 0;
        //update currentDirection
        if (currentDirection == 0) {
            currentDirection = 2;
        }
        else if (currentDirection == 1) {
            currentDirection = 3;
        }
        else if (currentDirection == 2) {
            currentDirection = 0;
        }
        else if (currentDirection == 3) {
            currentDirection = 1;
        }
    }

    //three consecutive turns; ending case
    if(endingCase == 3) {
        foundFinish();
    }

}
