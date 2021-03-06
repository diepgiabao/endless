/*
 * Endless
 * Copyright (c) 2014-2015 joshua stein <jcs@jcs.org>
 *
 * See LICENSE file for redistribution terms.
 */

#import <UIKit/UIKit.h>
#import "IASKAppSettingsViewController.h"
#import "SettingsViewController.h"
#import "WebViewTab.h"
#import "TutorialViewController.h"

#define TOOLBAR_HEIGHT 44

#define PAN_GESTURE_RECOGNIZER_NONE 0
#define PAN_GESTURE_RECOGNIZER_UP 1
#define PAN_GESTURE_RECOGNIZER_DOWN 2
#define PAN_GESTURE_RECOGNIZER_SIDE 3

@interface WebViewController : UIViewController <UITableViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, TutorialViewControllerDelegate, FinalPageObserver, PsiphonSettingsViewControllerDelegate>

- (NSMutableArray *)webViewTabs;
- (__strong WebViewTab *)curWebViewTab;

- (id)settingsButton;


-(void) addWebViewTab:(WebViewTab*) wvt andSetCurrent:(BOOL)current;
- (WebViewTab *)addNewTabForURL:(NSURL *)url;

- (void)removeTab:(NSNumber *)tabNumber andFocusTab:(NSNumber *)toFocus;
- (void)removeTab:(NSNumber *)tabNumber;
- (void)removeTabOpenedByHash:(NSNumber *)tabNumber;
- (void)removeAllTabs;
- (void)removeAllTabsForBackgrounded;

- (void)webViewTouched;
- (void)updateProgress;
- (void)updateSearchBarDetails;
- (void)refresh;
- (void)forceRefresh;
- (void)prepareForNewURLFromString:(NSString *)url;

- (void) stopLoading;

- (void) overlayTutorial;
- (void) focusTabWithIndex:(int)tabIndex andRefresh:(BOOL)refresh animated:(BOOL)animated;
- (void) openPsiphonHomePage:(NSString *) homePage;
- (void) showPsiphonConnectionStatusAlert;
- (void) adjustLayoutForNewHTTPResponse:(WebViewTab*)tab;

- (long)curWebViewTabHttpsRulesCount;
- (void)settingsWillDismissWithForceReconnect:(BOOL)forceReconnect;

@property (nonatomic) BOOL showTutorial;
@property (nonatomic) BOOL resumePsiphonStart;
@property (nonatomic) BOOL openSettingImmediatelyOnViewDidAppear;
@property (strong) NSNumber *tabIndexFromRestoration;

@end
