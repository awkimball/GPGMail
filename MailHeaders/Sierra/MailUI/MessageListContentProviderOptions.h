//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSCopying.h"

@class MessageSortOrder, NSPredicate;

@interface MessageListContentProviderOptions : NSObject <NSCopying>
{
    BOOL _threadMessages;	// 8 = 0x8
    BOOL _showDeletedMessages;	// 9 = 0x9
    MessageSortOrder *_primarySortOrder;	// 16 = 0x10
    MessageSortOrder *_secondarySortOrder;	// 24 = 0x18
    NSPredicate *_filterPredicate;	// 32 = 0x20
}

@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(copy, nonatomic) MessageSortOrder *secondarySortOrder; // @synthesize secondarySortOrder=_secondarySortOrder;
@property(copy, nonatomic) MessageSortOrder *primarySortOrder; // @synthesize primarySortOrder=_primarySortOrder;
@property(nonatomic) BOOL showDeletedMessages; // @synthesize showDeletedMessages=_showDeletedMessages;
@property(nonatomic) BOOL threadMessages; // @synthesize threadMessages=_threadMessages;
- (void).cxx_destruct;	// IMP=0x000000010020e4c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010020e31c

@end

