//
//  MTAnimator.h
//  Mystique
//
//  Created by Alvin on 22/12/2016.
//  Copyright © 2016 AlvinZhu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MTChainableBlocks.h"
#import "MTAnimationGroup.h"

@interface MTAnimator : NSObject

@property (nonatomic, assign) BOOL logEnable;

@property (nonatomic, strong, readonly) MTAnimationGroup *bounds;
@property (nonatomic, strong, readonly) MTAnimationGroup *size;
@property (nonatomic, strong, readonly) MTAnimationGroup *origin;
@property (nonatomic, strong, readonly) MTAnimationGroup *center;
@property (nonatomic, strong, readonly) MTAnimationGroup *x;
@property (nonatomic, strong, readonly) MTAnimationGroup *y;
@property (nonatomic, strong, readonly) MTAnimationGroup *width;
@property (nonatomic, strong, readonly) MTAnimationGroup *height;
@property (nonatomic, strong, readonly) MTAnimationGroup *opacity;
@property (nonatomic, strong, readonly) MTAnimationGroup *backgroundColor;
@property (nonatomic, strong, readonly) MTAnimationGroup *borderColor;
@property (nonatomic, strong, readonly) MTAnimationGroup *borderWidth;
@property (nonatomic, strong, readonly) MTAnimationGroup *cornerRadius;
@property (nonatomic, strong, readonly) MTAnimationGroup *scale;
@property (nonatomic, strong, readonly) MTAnimationGroup *scaleX;
@property (nonatomic, strong, readonly) MTAnimationGroup *scaleY;
@property (nonatomic, strong, readonly) MTAnimationGroup *anchor;
@property (nonatomic, strong, readonly) MTAnimationGroup *rotateX;
@property (nonatomic, strong, readonly) MTAnimationGroup *rotateY;
@property (nonatomic, strong, readonly) MTAnimationGroup *rotateZ;
@property (nonatomic, strong, readonly) MTAnimationGroup *rotate;

@property (nonatomic, strong, readonly) MTAnimationGroup *xOffset;
@property (nonatomic, strong, readonly) MTAnimationGroup *yOffset;
@property (nonatomic, strong, readonly) MTAnimationGroup *widthOffset;
@property (nonatomic, strong, readonly) MTAnimationGroup *heightOffset;

@property (nonatomic, strong, readonly) MTAnimationGroup *path;
@property (nonatomic, strong, readonly) MTAnimationGroup *rotateOnPath;
@property (nonatomic, strong, readonly) MTAnimationGroup *reverseRotateOnPath;

- (instancetype)initWithView:(UIView *)view;
- (instancetype)initWithLayer:(CALayer *)layer;

- (void)animate:(void(^)(void))completion;

@end
