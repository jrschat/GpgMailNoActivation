//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray, NSString;

@protocol MCMessageSortingInterface <NSObject>
@property(readonly, nonatomic) id <MCMailbox> mailbox;
@property(readonly) double dateSentAsTimeIntervalSince1970;
@property(readonly) double dateReceivedAsTimeIntervalSince1970;
@property(readonly, copy) NSArray *to;
@property(readonly) unsigned long long subjectPrefixLength;
@property(readonly, copy) NSString *subject;
@property(readonly, nonatomic) unsigned long long numberOfAttachments;
@property(readonly, nonatomic) unsigned long long messageSize;
@property(readonly, copy, nonatomic) NSString *senderDisplayName;
@property(readonly, nonatomic) unsigned char flagColorSet;
@property(readonly, nonatomic) long long messageFlags;
@property(readonly) double dateLastViewedAsTimeIntervalSince1970;
@property(readonly, nonatomic) int colorForSort;
@end

