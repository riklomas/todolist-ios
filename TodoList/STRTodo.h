//
//  STRTodo.h
//  TodoList
//
//  Created by Rik Lomas on 14/12/2013.
//  Copyright (c) 2013 Rik Lomas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface STRTodo : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
