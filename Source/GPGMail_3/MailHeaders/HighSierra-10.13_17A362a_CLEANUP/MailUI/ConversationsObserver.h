//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSCountedSet, NSMutableDictionary, NSOperationQueue;

@interface ConversationsObserver : NSObject
{
    NSCountedSet *_registeredConversationIDs;
    NSMutableDictionary *_mailboxCriterionByConversationID;
    NSOperationQueue *_workQueue;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
//- (void).cxx_destruct;
- (void)_libraryMessagesFlagsChanged:(id)arg1;
- (void)_libraryMessagesUpdated:(id)arg1;
- (void)_libraryMessagesCompacted:(id)arg1;
- (void)_libraryConversationsWereChanged:(id)arg1;
- (void)_updateRegistrationForConversation:(id)arg1 withNewConversationID:(id)arg2;
- (BOOL)_isRegistered:(id)arg1;
- (void)unregisterConversationID:(long long)arg1;
- (void)registerConversationID:(long long)arg1 withMailboxCriterion:(id)arg2;
- (unsigned int)_loadOptions;
- (id)_criterionForConversationID:(id)arg1;
- (id)_primaryMessagesForConversationIDNumber:(id)arg1;
- (id)_primaryMessagesForConversations:(id)arg1;
- (id)_allMessagesForConversationIDNumber:(id)arg1;
- (id)_allMessagesForConversations:(id)arg1;
- (void)dealloc;
- (id)init;

@end

