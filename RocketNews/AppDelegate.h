//
//  AppDelegate.h
//  RocketNews
//
//  Created by Travis Hoover on 12/18/12.
//  Copyright (c) 2012 Travis Hoover. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StoryViewController.h"
#import "BackGroundViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, retain) UINavigationController *storyNavigationController;
@property (nonatomic, retain) StoryViewController *storyViewController;
@property (nonatomic, retain) UINavigationController *backGroundNavigationController;
@property (nonatomic, retain) BackGroundViewController *backGroundViewController;


- (void) messageFromChild;

@end