//
//  Campaign.h
//  Westwing
//
//  Created by Robin Mukanganise on 2014/08/10.
//  Copyright (c) 2014 Robin Mukanganise. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Campaign : NSManagedObject

@property (nonatomic, retain) NSString * description_;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * navigation_url;
@property (nonatomic, retain) NSString * start_time_formatted;
@property (nonatomic, retain) NSNumber * state;
@property (nonatomic, retain) NSString * subline;
@property (nonatomic, retain) NSString * id_campaign;

@end
