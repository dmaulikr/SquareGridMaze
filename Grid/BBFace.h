//
//  BBFace.h
//  Grid
//
//  Created by Brian Broom on 2/12/15.
//  Copyright (c) 2015 Brian Broom. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BBEdge;
@class BBVertex;
@class BBSquareGrid;
@class SKSpriteNode;

@interface BBFace : NSObject

@property (assign, nonatomic) NSInteger row;
@property (assign, nonatomic) NSInteger column;

@property (assign, nonatomic) bool visited;
@property (assign, nonatomic) NSInteger distance;

@property (strong, nonatomic) SKSpriteNode *sprite;

@property (weak, nonatomic) BBSquareGrid *grid;

// everything below is a conviencence reference
// are they needed? Isn't this premature op?

@property (strong, nonatomic) NSMutableArray *neighbors;
@property (strong, nonatomic) NSMutableArray *edges;
@property (strong, nonatomic) NSMutableArray *vertices;

// TODO: should all these references be weak??

@property (weak, nonatomic) BBFace *northFace;
@property (weak, nonatomic) BBFace *eastFace;
@property (weak, nonatomic) BBFace *southFace;
@property (weak, nonatomic) BBFace *westFace;

@property (weak, nonatomic) BBEdge *northEdge;
@property (weak, nonatomic) BBEdge *eastEdge;
@property (weak, nonatomic) BBEdge *southEdge;
@property (weak, nonatomic) BBEdge *westEdge;

@property (weak, nonatomic) BBVertex *northEastVertex;
@property (weak, nonatomic) BBVertex *southEastVertex;
@property (weak, nonatomic) BBVertex *southWestVertex;
@property (weak, nonatomic) BBVertex *northWestVertex;

+ (instancetype)edgeWithColumn:(NSInteger)column andRow:(NSInteger)row;
+ (NSString *)keyForFaceWithColumn:(NSInteger)column andRow:(NSInteger)row;

- (instancetype)initWithColumn:(NSInteger)column andRow:(NSInteger)row;
- (NSString *)key;

@end
