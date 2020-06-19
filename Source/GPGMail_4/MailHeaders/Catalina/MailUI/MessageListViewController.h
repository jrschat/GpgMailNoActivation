//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSViewController.h>

#import "MessageFilterSelectorViewControllerDelegate-Protocol.h"
//#import "NSPopoverDelegate-Protocol.h"
#import "SortTitleSetter-Protocol.h"
#import "TableViewManagerDelegate-Protocol.h"

@class MailTableView, MessageFilterSelectorViewController, MessageListSearchProgressView, MessageViewer, NSArray, NSAttributedString, NSButton, NSLayoutConstraint, NSPopover, NSString, NSTextField, RichMessageListSortView, TableViewManager;

@interface MessageListViewController : NSViewController <NSPopoverDelegate, MessageFilterSelectorViewControllerDelegate, SortTitleSetter, TableViewManagerDelegate>
{
    MessageFilterSelectorViewController *_filterSelectorViewController;
    NSArray *_selectedFilters;
    BOOL _isSearching;
    BOOL _primitiveFilterEnabled;
    BOOL _shouldShowSearchRadarButton;
    RichMessageListSortView *_sortView;
    NSButton *_sortButton;
    MailTableView *_messagesTableView;
    RichMessageListSortView *_topHitsHeaderView;
    MessageListSearchProgressView *_searchProgressView;
    NSPopover *_filterPopover;
    NSButton *_filterDescriptionButton;
    NSTextField *_filterLabelTextField;
    NSLayoutConstraint *_sortBarTopAlignmentConstraint;
    NSLayoutConstraint *_viewWidthConstraint;
    TableViewManager *_tableViewManager;
    MessageViewer *_messageViewer;
}

+ (id)keyPathsForValuesAffectingSelectedFilterDescription;
+ (id)keyPathsForValuesAffectingFilterEnabled;
@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
@property(retain, nonatomic) TableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(nonatomic) BOOL shouldShowSearchRadarButton; // @synthesize shouldShowSearchRadarButton=_shouldShowSearchRadarButton;
@property(nonatomic) __weak NSLayoutConstraint *viewWidthConstraint; // @synthesize viewWidthConstraint=_viewWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *sortBarTopAlignmentConstraint; // @synthesize sortBarTopAlignmentConstraint=_sortBarTopAlignmentConstraint;
@property(nonatomic) BOOL primitiveFilterEnabled; // @synthesize primitiveFilterEnabled=_primitiveFilterEnabled;
@property(retain, nonatomic) NSTextField *filterLabelTextField; // @synthesize filterLabelTextField=_filterLabelTextField;
@property(retain, nonatomic) NSButton *filterDescriptionButton; // @synthesize filterDescriptionButton=_filterDescriptionButton;
@property(retain, nonatomic) NSPopover *filterPopover; // @synthesize filterPopover=_filterPopover;
@property(retain, nonatomic) MessageListSearchProgressView *searchProgressView; // @synthesize searchProgressView=_searchProgressView;
@property(retain, nonatomic) RichMessageListSortView *topHitsHeaderView; // @synthesize topHitsHeaderView=_topHitsHeaderView;
@property(nonatomic) __weak MailTableView *messagesTableView; // @synthesize messagesTableView=_messagesTableView;
@property(nonatomic) __weak NSButton *sortButton; // @synthesize sortButton=_sortButton;
@property(nonatomic) __weak RichMessageListSortView *sortView; // @synthesize sortView=_sortView;
@property(nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
//- (void).cxx_destruct;
- (void)performScrollTest:(id)arg1;
- (id)searchProgressViewForTableViewManager:(id)arg1;
- (id)topHitsViewForTableViewManager:(id)arg1;
- (id)sortViewForTableViewManager:(id)arg1;
- (void)recordSearchEngagement;
- (id)accessibilityLinkTargetForTableViewManager:(id)arg1;
- (void)tableViewManagerNeedsUndoStackReset:(id)arg1 unconditionally:(BOOL)arg2;
- (void)tableViewManagerContentUpdated:(id)arg1;
- (void)tableViewManagerDidFinishSearch:(id)arg1;
- (void)tableViewManagerDidUpdateSearch:(id)arg1;
- (void)tableViewManagerWillBeginSearch:(id)arg1;
- (void)tableViewManager:(id)arg1 archiveMessages:(id)arg2 allowUndo:(BOOL)arg3 withAnimationOptions:(unsigned long long)arg4;
- (void)tableViewManager:(id)arg1 deleteMessages:(id)arg2 allowMoveToTrash:(BOOL)arg3 allowUndo:(BOOL)arg4 selectingNextMessage:(BOOL)arg5 withAnimationOptions:(unsigned long long)arg6;
- (id)currentReadMessage;
- (void)tableViewManagerRequestSelectionChange:(id)arg1;
- (void)tableViewManagerRequestSelectionOpen:(id)arg1;
- (void)tableViewManager:(id)arg1 didMarkMessagesAsUnread:(id)arg2;
- (void)tableViewManager:(id)arg1 didMarkMessagesAsRead:(id)arg2;
- (void)tableViewManagerDidChangeMessageSelection:(id)arg1;
- (void)tableViewManager:(id)arg1 showFollowupsToMessage:(id)arg2;
- (void)messageFilterSelectorViewControllerDidChangeSelection:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)_setMessageListContentController:(id)arg1;
- (void)dismissController:(id)arg1;
- (void)viewDidLoad;
- (void)sortBarClicked:(id)arg1;
- (void)setAccessibilityLinkedUIElementForMessageList:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *selectedFilterDescription;
- (void)selectFilter:(id)arg1;
- (void)radarButtonClicked:(id)arg1;
- (id)_searchRadarDescription;
- (void)clearSearch;
- (void)searchForSuggestions:(id)arg1 in:(long long)arg2 withOptions:(long long)arg3 fromSuggestionsSearchField:(id)arg4;
- (void)_updateShouldShowSearchRadarButton;
- (void)reload;
@property(copy, nonatomic) NSArray *selectedFilters;
@property(nonatomic) BOOL filterEnabled;
- (id)_predicateForCurrentFilterSelection;
@property(retain, nonatomic) MessageFilterSelectorViewController *filterSelectorViewController;
- (void)_restoreSettingsForMailbox:(id)arg1;
- (void)_saveSettingsForMailbox:(id)arg1;
@property(retain) NSArray *representedObject;
@property(copy, nonatomic) NSArray *selectedMessages;
@property(readonly, nonatomic) BOOL isSortedAscending;
@property(readonly, nonatomic) long long sortColumn;
- (void)setSortTitle:(id)arg1;
- (void)updateViewConstraints;
- (void)_updateFilter;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
