//
//  BSGameController.h
//  Baddleships
//
//  Created by Marc Ammann on 6/18/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BSPlayerController.h"

@interface BSGameController : NSObject {
	// Array of players
	NSMutableArray *players;
	
	// Array of shots - cached.
	NSMutableArray *shots;
	
	// The winner of the game
	BSPlayerController *winner;
}

@property (readonly, getter=winner) BSPlayerController *winner; 

// Check if the game has a winner
- (BOOL)hasWinner;

@end
