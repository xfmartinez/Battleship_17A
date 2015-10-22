/* 
 * File:   ShipType.h
 * Author: Electromagnetivewave
 *
 * Created on October 19, 2015, 2:50 PM
 */

#ifndef PLASHIP_H
#define	PLASHIP_H




class PLASHIP {
private:
    DIRECTN direction; 
    SHIP shipType;
public:
    
    
    
    PLASHIP(){
        direction=HORIZONTAL;
        
        shipType.length=0;
        shipType.name="";
        for(int i=0; i<4;i++){
            shipType.hitFlag[i]=false;
            shipType.onGrid[i].X=0;
            shipType.onGrid[i].Y=0;
        }
    }
    
    DIRECTN getDirection(){
        return direction;
    }
    void setDirection(DIRECTN d){
        DIRECTN=d;
    }
    
    
};


#endif	/* SHIPTYPE_H */

