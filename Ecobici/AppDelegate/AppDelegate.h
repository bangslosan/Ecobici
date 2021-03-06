//
//  AppDelegate.h
//  Ecobici
//
//  Created by Christian Roman on 25/01/14.
//  Copyright (c) 2014 Christian Roman. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MSDynamicsDrawerViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MSDynamicsDrawerViewController *dynamicsDrawerViewController;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
