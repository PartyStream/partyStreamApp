//
//  PSLocation.h
//  partyStreamApp
//
//  Created by Mike De Wolfe on 2013-06-14.
//  Copyright (c) 2013 Salvatore D'Agostino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface PSLocation : NSManagedObject

@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSManagedObject *event;

@end
