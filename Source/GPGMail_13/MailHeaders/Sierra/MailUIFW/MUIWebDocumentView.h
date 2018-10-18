//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MUIWKWebViewController, MUIWebDocument;

@interface MUIWebDocumentView : NSView
{
    unsigned long long _loadedState;	// 152 = 0x98
    struct CGSize _contentSize;	// 160 = 0xa0
    double _preferredMinLayoutWidth;	// 176 = 0xb0
    BOOL _preparingToLayoutSynchronously;	// 184 = 0xb8
    BOOL _supportsAttachments;	// 185 = 0xb9
    NSView *_snapshotView;	// 192 = 0xc0
    MUIWKWebViewController *_wkWebViewController;	// 200 = 0xc8
    CDUnknownBlockType _prepareToLayoutSynchronouslyCompletionHandler;	// 208 = 0xd0
    id <MUIWebDocumentViewDelegate> _delegate;	// 216 = 0xd8
}

+ (id)keyPathsForValuesAffectingEditable;	// IMP=0x0000000000027b84
+ (id)keyPathsForValuesAffectingPageZoom;	// IMP=0x00000000000257b4
+ (id)keyPathsForValuesAffectingWebDocument;	// IMP=0x0000000000025675
+ (BOOL)requiresConstraintBasedLayout;	// IMP=0x0000000000024fdb
@property(nonatomic) BOOL supportsAttachments; // @synthesize supportsAttachments=_supportsAttachments;
@property(nonatomic) __weak id <MUIWebDocumentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType prepareToLayoutSynchronouslyCompletionHandler; // @synthesize prepareToLayoutSynchronouslyCompletionHandler=_prepareToLayoutSynchronouslyCompletionHandler;
@property(nonatomic) BOOL preparingToLayoutSynchronously; // @synthesize preparingToLayoutSynchronously=_preparingToLayoutSynchronously;
@property(retain, nonatomic) MUIWKWebViewController *wkWebViewController; // @synthesize wkWebViewController=_wkWebViewController;
@property(readonly, nonatomic) NSView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void).cxx_destruct;	// IMP=0x0000000000028be2
- (void)toggleAutomaticListInsertion:(id)arg1;	// IMP=0x0000000000028a8f
- (void)reloadDocument;	// IMP=0x0000000000028a52
- (void)exportAttachmentsToApplication:(id)arg1;	// IMP=0x00000000000289a1
- (BOOL)canExportAttachmentsToApplication:(id)arg1;	// IMP=0x00000000000288e5
- (void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3;	// IMP=0x000000000002882c
- (void)saveAttachmentsWithPanel:(id)arg1;	// IMP=0x00000000000287bc
- (void)quickLookAttachments:(id)arg1;	// IMP=0x000000000002872f
- (id)_attachmentControllersForAttachments:(id)arg1;	// IMP=0x00000000000284f0
- (id)description;	// IMP=0x00000000000282ed
- (BOOL)shouldHandleClickForURL:(id)arg1;	// IMP=0x00000000000282e2
- (void)getSelectedText:(CDUnknownBlockType)arg1;	// IMP=0x000000000002825b
- (void)selectFindMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000281b5
- (void)findMatchesForString:(id)arg1 relativeToMatch:(id)arg2 findOptions:(unsigned long long)arg3 maxResults:(unsigned long long)arg4 resultCollector:(CDUnknownBlockType)arg5;	// IMP=0x00000000000280da
- (void)discardEditing;	// IMP=0x000000000002809d
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void *)arg3;	// IMP=0x0000000000028020
- (BOOL)commitEditingAndReturnError:(id *)arg1;	// IMP=0x000000000002800e
- (BOOL)commitEditing;	// IMP=0x0000000000027fc9
- (void)generateSelectionWebDocument:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027f57
- (void)generateStyleInlinedWebDocument:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027ee5
- (void)removeAttachment:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027e5d
- (void)appendAttributedString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027dd5
- (void)appendString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027d4d
- (void)appendAttachment:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027cc5
- (void)setAttachments:(id)arg1 asHidden:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027c35
@property(nonatomic) BOOL editable;
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x000000000002772a
- (void)mui_cancelSynchronousLayout;	// IMP=0x00000000000276a4
- (void)mui_performLayoutSynchronously;	// IMP=0x000000000002764b
- (void)_readyToLayoutSynchronously;	// IMP=0x00000000000275db
- (void)mui_prepareToLayoutSynchronously:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027519
- (void)mui_cancelAnimation;	// IMP=0x000000000002744a
- (void)mui_performAnimation;	// IMP=0x0000000000027184
- (void)mui_prepareToAnimate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000265a2
- (void)mui_didCacheDisplayInRect;	// IMP=0x0000000000026502
- (void)mui_prepareToCacheDisplayInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025d18
- (id)printOperationWithPrintInfo:(id)arg1;	// IMP=0x0000000000025c74
- (void)prepareTilesInRect:(struct CGRect)arg1;	// IMP=0x0000000000025b92
- (id)evaluateJavaScriptSynchronously:(id)arg1;	// IMP=0x0000000000025b0c
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025a84
@property(nonatomic) BOOL drawsBackground;
@property(nonatomic) BOOL shouldPaintToBounds;
@property(nonatomic) double pageZoom;
@property(retain, nonatomic) MUIWebDocument *webDocument;
@property(nonatomic) unsigned long long loadedState;
@property(nonatomic) double preferredMinLayoutWidth;
@property(nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) __weak NSView *contentView;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;	// IMP=0x00000000000253aa
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;	// IMP=0x00000000000252ef
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000251ce
- (void)_updatePreferredMinLayoutWidth;	// IMP=0x0000000000025075
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;	// IMP=0x0000000000025033
- (void)viewDidMoveToSuperview;	// IMP=0x0000000000024ff1
- (BOOL)isFlipped;	// IMP=0x0000000000024fe6
- (void)tearDown;	// IMP=0x0000000000024f9e
- (void)_muiWebDocumentViewCommonInit;	// IMP=0x0000000000024da5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000024d3d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024cf8

@end
