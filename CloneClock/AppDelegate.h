//
//  AppDelegate.h
//  CloneClock
//
//  Created by DavidTran on 2/21/18.
//  Copyright © 2018 DavidTran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

