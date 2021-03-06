//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved./Users/rochelleshen/FlappyBird-SpriteBuilder/FlappyBird.spritebuilder/Source/GamePlayScene.h
//
float timeSinceObstacle;
#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
    // define variables here;
    Character*     character;
    CCPhysicsNode* physicsNode;
}

-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
