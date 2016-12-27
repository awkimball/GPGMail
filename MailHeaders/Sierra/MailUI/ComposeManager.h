//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class ComposeWindowController, NSArray, NSMutableArray, NSMutableSet, NSTimer;

@interface ComposeManager : NSObject
{
    NSMutableSet *_composeViewControllers;	// 8 = 0x8
    NSMutableSet *_composeWindowControllers;	// 16 = 0x10
    NSMutableArray *_restorationDictionaries;	// 24 = 0x18
    NSTimer *_autosaveTimer;	// 32 = 0x20
    NSArray *_delayedComposeDictionaries;	// 40 = 0x28
    ComposeWindowController *_delayedWindowController;	// 48 = 0x30
    id <ComposeContext> _applicationRestoringContext;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000001001047a0
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001046e6
@property(nonatomic) __weak id <ComposeContext> applicationRestoringContext; // @synthesize applicationRestoringContext=_applicationRestoringContext;
@property(retain, nonatomic) ComposeWindowController *delayedWindowController; // @synthesize delayedWindowController=_delayedWindowController;
@property(copy, nonatomic) NSArray *delayedComposeDictionaries; // @synthesize delayedComposeDictionaries=_delayedComposeDictionaries;
@property(retain, nonatomic) NSTimer *autosaveTimer; // @synthesize autosaveTimer=_autosaveTimer;
- (void).cxx_destruct;	// IMP=0x0000000100106d94
- (id)composeBackEndsForScripting;	// IMP=0x0000000100106afe
- (void)invalidateApplicationActivationState;	// IMP=0x00000001001069ec
- (void)composeContext:(id)arg1 wantsToRestoreApplication:(id)arg2;	// IMP=0x000000010010693d
- (void)_addRestorationComposeDictionaries:(id)arg1 toWindowController:(id)arg2 isMiniaturized:(BOOL)arg3;	// IMP=0x0000000100106664
- (void)_messageViewerBecameFullScreen:(id)arg1;	// IMP=0x00000001001065c8
- (void)restorePendingDraftWindows;	// IMP=0x0000000100105cea
- (void)addRestorationDictionariesObject:(id)arg1;	// IMP=0x0000000100105c5a
- (void)windowControllerWillClose:(id)arg1;	// IMP=0x0000000100105c3d
- (id)composeViewControllerForShareUUID:(id)arg1;	// IMP=0x000000010010595a
- (void)willCloseAllEditors;	// IMP=0x00000001001057d1
- (void)_autosaveTimerFired:(id)arg1;	// IMP=0x000000010010574c
- (void)unregisterController:(id)arg1;	// IMP=0x0000000100105553
- (void)registerController:(id)arg1;	// IMP=0x0000000100105303
- (id)createWindowControllerWithViewController:(id)arg1;	// IMP=0x0000000100105254
- (id)existingControllerForBackEnd:(id)arg1;	// IMP=0x000000010010502f
- (id)existingControllerForMessage:(id)arg1;	// IMP=0x0000000100104e07
- (id)_windowControllerForContext:(id)arg1;	// IMP=0x0000000100104d7a
- (void)setContext:(id)arg1 forViewController:(id)arg2;	// IMP=0x0000000100104cd2
- (id)createController;	// IMP=0x0000000100104c70
- (id)createControllerWithContext:(id)arg1 withBackEnd:(id)arg2;	// IMP=0x0000000100104a7c
- (id)createControllerWithContext:(id)arg1;	// IMP=0x00000001001049f4
- (void)dealloc;	// IMP=0x0000000100104923
- (id)init;	// IMP=0x000000010010486b

@end
