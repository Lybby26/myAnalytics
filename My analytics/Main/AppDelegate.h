//
//  AppDelegate.h
//  My analytics
//
//  Created by Mac Mini on 11/15/17.
//  Copyright © 2017 lybby26. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

