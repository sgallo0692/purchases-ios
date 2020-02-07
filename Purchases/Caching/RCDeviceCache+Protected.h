//
// Created by RevenueCat on 2/3/20.
// Copyright (c) 2020 Purchases. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCDeviceCache.h"
#import "RCInMemoryCachedObject.h"
#import "RCOfferings.h"


@interface RCDeviceCache (Protected)

@property (nonatomic, nullable) NSDate *purchaserInfoCachesLastUpdated;

- (instancetype)initWith:(nullable NSUserDefaults *)userDefaults
   offeringsCachedObject:(nullable RCInMemoryCachedObject<RCOfferings *> *)offeringsCachedObject;

@end

