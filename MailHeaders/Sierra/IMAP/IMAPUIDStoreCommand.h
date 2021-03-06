//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPUIDCommand.h>

@class NSArray;

@interface IMAPUIDStoreCommand : IMAPUIDCommand
{
    NSArray *_flagsOrGmailLabels;	// 40 = 0x28
    BOOL _forGmailLabels;	// 48 = 0x30
    BOOL _add;	// 49 = 0x31
}

@property BOOL add; // @synthesize add=_add;
@property(readonly) BOOL forGmailLabels; // @synthesize forGmailLabels=_forGmailLabels;
- (void).cxx_destruct;	// IMP=0x00000000000714ea
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x0000000000071499
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x00000000000712af
@property(readonly, copy) NSArray *gmailLabels;
@property(readonly, copy) NSArray *serverFlags;
- (id)activityString;	// IMP=0x00000000000711de
- (id)commandTypeString;	// IMP=0x00000000000711bf
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2;	// IMP=0x00000000000710f0
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2;	// IMP=0x0000000000071021
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2 add:(BOOL)arg3 gmailLabels:(id)arg4;	// IMP=0x0000000000070f7b
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 add:(BOOL)arg3 gmailLabels:(id)arg4;	// IMP=0x0000000000070eca
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2 add:(BOOL)arg3 flags:(id)arg4;	// IMP=0x0000000000070e27
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 add:(BOOL)arg3 flags:(id)arg4;	// IMP=0x0000000000070d79
- (void)_imapClientUIDStoreCommonInitForGmailLabels:(BOOL)arg1 add:(BOOL)arg2 flagsOrGmailLabels:(id)arg3;	// IMP=0x0000000000070d31

@end

