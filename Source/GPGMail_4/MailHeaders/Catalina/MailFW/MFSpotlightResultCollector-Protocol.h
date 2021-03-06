//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <Mail/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol MFMessageConsumer;

@protocol MFSpotlightResultCollector <NSObject>
@property(nonatomic) BOOL queryIsCancelled;
@property(nonatomic) unsigned int options;
@property(retain, nonatomic) NSArray *excludedMailboxURLs;
@property(nonatomic) BOOL checkWhereFromsPaths;
@property(retain, nonatomic) id /*<MFMessageConsumer>*/ target;
- (void)cancelQuery;
- (void)receivedSpotlightCallback:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
@end

