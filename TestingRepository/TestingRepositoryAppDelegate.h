//
//  TestingRepositoryAppDelegate.h
//  TestingRepository
//
//  Created by John Paul on 15/08/11.
//  Copyright 2011 Plackal Techno Systems Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestingRepositoryAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
