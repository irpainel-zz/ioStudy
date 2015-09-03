//
//  CardMatchingGame.h
//  CardGame
//
//  Created by Taqtile on 03/09/15.
//  Copyright (c) 2015 Taqtile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

- (instancetype)initWithCardCount:(NSUInteger) count usingDeck:(Deck *) deck;

- (void)chooseACardAtIndex:(NSUInteger) index;
- (Card *)cardAtIndex:(NSUInteger) index;
@property (nonatomic, readonly) NSInteger score;


@end
