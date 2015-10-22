/* 
 * File:   Structs.h
 * Author: Electromagnetivewave
 *
 * Created on October 19, 2015, 2:57 PM
 */

#ifndef STRUCTS_H
#define	STRUCTS_H


const int COLS = 4;    //Used for Max col size of __ array
const int BOARD_L = 7; //Used to size array in __ structure
const int BOARD_W = 6; //Used to size array in __ structure
const int TYPSHIP = 5; // This gives the 5 different type of ships

//The structure gives two integer values that will be inputted by user 
//The inputted values will be values with in array 
struct POINT {
	//A location on the grid defined
	//by X(horizontal) Y(vertical) coordinates
	int X;
	int Y;
};


//Structure that will include info about ship.
struct SHIP {
	//Ship name
	string name;
	
        //Total points on the grid
	int length;
	
        //Coordinates of those points
	POINT onGrid[4]; //0-3 max length of biggest ship
	
        //Whether or not those points are a "hit"
	bool hitFlag[4];
};


//Structure will show the game board to the players uses double array
struct PLAYER {
	char grid[BOARD_L][BOARD_W];
        char **a;
};


enum DIRECTN {HORIZONTAL,VERTICAL};  //enumerated [0,1] used to face ships 

//will determine the direction of the ship
struct PLASHIP {
	DIRECTN direction; 
	SHIP shipType;
};



#endif	/* STRUCTS_H */

