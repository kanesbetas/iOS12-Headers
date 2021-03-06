/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 20, 2019 at 11:33:29 AM Greenwich Mean Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/ControlCenter/Bundles/AudioModule.bundle/AudioModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/AudioModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <MediaPlayer/MPVolumeControllerDelegate.h>
#import <MediaPlayer/MPVolumeDisplaying.h>
#import <ControlCenterUIKit/CCUIGroupRendering.h>
#import <ControlCenterUIKit/CCUIContentModuleContentViewController.h>

@protocol CCUIAudioModuleViewControllerDelegate;
@class NSString, CALayer, CCUIVolumeSliderView, MPVolumeController, NSTimer;

@interface CCUIAudioModuleViewController : UIViewController <MPVolumeControllerDelegate, MPVolumeDisplaying, CCUIGroupRendering, CCUIContentModuleContentViewController> {

	CCUIVolumeSliderView* _sliderView;
	MPVolumeController* _volumeController;
	NSTimer* _updatesCommitTimer;
	float _previousValue;
	float _value;
	BOOL _expanded;
	id<CCUIAudioModuleViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CCUIAudioModuleViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentVolume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOnScreenForVolumeDisplay,nonatomic,readonly) BOOL onScreenForVolumeDisplay; 
@property (nonatomic,readonly) NSString * volumeAudioCategory; 
@property (getter=isOnScreen,nonatomic,readonly) BOOL onScreen; 
@property (getter=isGroupRenderingRequired,nonatomic,readonly) BOOL groupRenderingRequired; 
@property (nonatomic,readonly) CALayer * punchOutRootLayer; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
-(void)volumeControlAvailabilityDidChange;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(NSString *)volumeAudioCategory;
-(void)setGlyphPackageDescription:(id)arg1 ;
-(void)setGlyphState:(id)arg1 ;
-(double)preferredExpandedContentHeight;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(double)preferredExpandedContentWidth;
-(float)currentVolume;
-(BOOL)isGroupRenderingRequired;
-(CALayer *)punchOutRootLayer;
-(void)dealloc;
-(void)setDelegate:(id<CCUIAudioModuleViewControllerDelegate>)arg1 ;
-(id<CCUIAudioModuleViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)isOnScreen;
-(void)_sliderValueDidChange:(id)arg1 ;
@end

