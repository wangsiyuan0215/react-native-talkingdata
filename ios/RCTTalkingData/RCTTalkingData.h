//
//  RCTTalkingData.h
//  RCTTalkingData
//
//  Created by LvBingru on 1/11/16.
//  Copyright © 2016 erica. All rights reserved.
//

#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

@interface RCTTalkingData : NSObject <RCTBridgeModule>

+ (void)registerApp:(NSString *)appId channelID:(NSString *)channelID crashReport:(BOOL)report;
+ (void)registerSMS:(NSString *)appId secret:(NSString *)secretId;

@end
