//
//  PaintCodeDemo.h
//
//  Created on 15/06/16.
//  Copyright © 2016 V2Solutions. All rights reserved.
//
//  Generated by PaintCode Plugin for Sketch
//  http://www.paintcodeapp.com/sketch
//

@import UIKit;
#import "MyStyleKit.h"
#import "ClockStyleKit.h"

@interface PaintCodeDemo : NSObject


#pragma mark - Canvas Drawings

//! Star
+ (void)drawStar;

//! random
+ (void)drawRandom;

//! Icon

+ (void)drawIcon;

//! Clock
+ (void)drawClockWithNumbersColor: (UIColor*)numbersColor darkHandsColor: (UIColor*)darkHandsColor lightHandColor: (UIColor*)lightHandColor rimColor: (UIColor*)rimColor tickColor: (UIColor*)tickColor faceColor: (UIColor*)faceColor hours: (CGFloat)hours minutes: (CGFloat)minutes seconds: (CGFloat)seconds;

+ (void)drawBubbleButtonWithFrame: (CGRect)frame title: (NSString*)title pressed: (BOOL)pressed;

+(void)drawGaugeWithPressure: (CGFloat)pressure;
@end