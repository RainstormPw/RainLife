#include "ageControl.h"

doublePair getAgeHeadOffset( double inAge, doublePair inHeadSpritePos,
                             doublePair inFrontFootSpritePos ) {
    if( inAge == -1 ) {
        return (doublePair){ 0, 0 };
        }
    
    if( inAge < 20 ) {
        
        double maxHead = inHeadSpritePos.y;
        
        double yOffset = ( ( 20 - inAge ) / 20 ) * .35 * maxHead;
        
        
        return (doublePair){ 0, -yOffset };
        }
    

    if( inAge >= 40 ) {
        
        if( inAge > 60 ) {
            // no worse after 60
            inAge = 60;
            }

        double maxHead = inHeadSpritePos.y;
        
        double vertOffset = ( ( inAge - 40 ) / 20 ) * .35 * maxHead;
        
        double footOffset = inFrontFootSpritePos.x - inHeadSpritePos.x;
        
        double forwardOffset = ( ( inAge - 40 ) / 20 ) * 2 * footOffset;

        return (doublePair){ forwardOffset, -vertOffset };
        }

    return (doublePair){ 0, 0 };
    }



doublePair getAgeBodyOffset( double inAge, doublePair inBodySpritePos ) {
    if( inAge == -1 ) {
        return (doublePair){ 0, 0 };
        }
    
    if( inAge < 20 ) {
        
        double maxBody = inBodySpritePos.y;
        
        double yOffset = ( ( 20 - inAge ) / 20 ) * .5 * maxBody;
        
        
        return (doublePair){ 0, -yOffset };
        }

    return (doublePair){ 0, 0 };
    }

