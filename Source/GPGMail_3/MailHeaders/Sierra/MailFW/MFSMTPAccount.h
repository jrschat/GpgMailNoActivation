//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFDeliveryAccount.h>

@class MFSMTPConnection, NSOperationQueue, NSTimer;

@interface MFSMTPAccount : MFDeliveryAccount
{
    MFSMTPConnection *_connection;	// 8 = 0x8
    id _smtpAccountLock;	// 16 = 0x10
    NSTimer *_timer;	// 24 = 0x18
    NSOperationQueue *_connectionCleanupQueue;	// 32 = 0x20
    long long _lastTimerSetTime;	// 40 = 0x28
}

+ (id)standardSSLPorts;	// IMP=0x0000000000262254
+ (id)standardPorts;	// IMP=0x000000000026218b
+ (id)accountTypeString;	// IMP=0x0000000000261f6a
@property(nonatomic) long long lastTimerSetTime; // @synthesize lastTimerSetTime=_lastTimerSetTime;
@property(readonly, nonatomic) NSOperationQueue *connectionCleanupQueue; // @synthesize connectionCleanupQueue=_connectionCleanupQueue;
- (void).cxx_destruct;	// IMP=0x0000000000263502
- (unsigned long long)hash;	// IMP=0x000000000026348b
- (BOOL)isEqual:(id)arg1;	// IMP=0x00000000002633cd
- (void)_disconnect:(id)arg1;	// IMP=0x00000000002633b8
- (void)releaseAllConnections;	// IMP=0x000000000026316a
- (void)_connectionExpired:(id)arg1;	// IMP=0x0000000000262fcf
- (void)_setTimer;	// IMP=0x0000000000262efd
- (void)checkInConnection:(id)arg1;	// IMP=0x0000000000262dcf
- (BOOL)connectAndAuthenticate:(id)arg1;	// IMP=0x0000000000262c86
- (id)authenticatedConnection;	// IMP=0x0000000000262b30
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;	// IMP=0x0000000000262a69
- (id)saslProfileName;	// IMP=0x0000000000262a4a
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)arg1 changedSystemAccount:(char *)arg2;	// IMP=0x0000000000262647
- (id)usesSSLObject;	// IMP=0x0000000000262520
- (id)_hostnameFromParentAccount:(id)arg1;	// IMP=0x00000000002624b6
- (id)portNumberObject;	// IMP=0x00000000002622f1
- (long long)defaultPortNumber;	// IMP=0x00000000002622e6
- (id)newDelivererWithMessage:(id)arg1;	// IMP=0x000000000026212e
- (id)init;	// IMP=0x000000000026208e
- (id)initWithSystemAccount:(id)arg1;	// IMP=0x0000000000261f7e
- (id)objectSpecifier;	// IMP=0x0000000000263553

@end

