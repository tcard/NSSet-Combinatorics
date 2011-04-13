//
//  NSSet+Combinatorics.h
//  CalcuLiga
//
//  Created by Harad on 13/04/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSSet (Combinatorics)

- (NSSet*) permutations;

- (NSSet*) variationsOfSize:(NSUInteger)size;
- (NSSet*) variationsWithRepetitionsOfSize:(NSUInteger)size;

- (NSSet*) combinationsOfSize:(NSUInteger)size;
- (NSSet*) combinationsWithRepetitionsOfSize:(NSUInteger)size;

@end
