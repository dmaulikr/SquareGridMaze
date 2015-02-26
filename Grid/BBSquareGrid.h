//
//  BBGrid.h
//  Grid
//
//  Created by Brian Broom on 2/12/15.
//  Copyright (c) 2015 Brian Broom. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BBFace.h"
#import "BBEdge.h"
#import "BBVertex.h"

typedef NS_ENUM(NSInteger, BBSquareGridDirection) {
    BBSquareGridDirectionNorth,
    BBSquareGridDirectionEast,
    BBSquareGridDirectionSouth,
    BBSquareGridDirectionWest,
    BBSquareGridDirectionNorthEast,
    BBSquareGridDirectionSouthEast,
    BBSquareGridDirectionSouthWest,
    BBSquareGridDirectionNorthWest
};

@interface BBSquareGrid : NSObject

@property (assign, nonatomic) NSInteger height;
@property (assign, nonatomic) NSInteger width;

- (instancetype)initWithWidth:(NSInteger)width andHeight:(NSInteger)height;
- (BBFace *)faceForColumn:(NSInteger)column andRow:(NSInteger)row;
- (NSArray *)allFaces;

- (BBEdge *)edgeForColumn:(NSInteger)column andRow:(NSInteger)row andSide:(NSString *)side;
- (NSArray *)allEdges;

- (BBVertex *)vertexForColumn:(NSInteger)column andRow:(NSInteger)row;
- (NSMutableArray *)allVertices;

//- (void)setFace:(BBFace *)face forObject:(id)obj;
//- (BBFace *)faceForObject:(id)obj;

- (void)setFace:(BBFace *)face forString:(NSString *)key;
- (BBFace *)faceForString:(NSString *)key;
- (void)removeFaceForString:(NSString *)key;

// internal methods, listed here for testing
- (BBFace *)faceForKey:(NSString *)key;

@end
