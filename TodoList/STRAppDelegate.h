//
//  STRAppDelegate.h
//  TodoList
//
//  Created by Rik Lomas on 14/12/2013.
//  Copyright (c) 2013 Rik Lomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STRAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
