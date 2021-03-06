//
//  PlayerManager.h
//  UCloudMediaRecorderDemo
//
//  Created by yisanmao on 16/1/4.
//  Copyright © 2016年 zmw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UCloudMediaViewController.h"

@interface PlayerManager : NSObject

@property(strong, nonatomic) UCloudMediaPlayer *mediaPlayer;

@property (assign, nonatomic) BOOL isFullscreen;                             //是否横屏
@property (assign, nonatomic) BOOL isPortrait;
@property (assign, nonatomic) UIInterfaceOrientation currentOrientation;     //当前屏幕方向
@property (assign, nonatomic) UIInterfaceOrientationMask supportInterOrtation;

@property (strong, nonatomic) NSMutableArray *equalArray;
@property (strong, nonatomic) NSMutableArray *exchangeArray;
@property (strong, nonatomic) NSLayoutConstraint *vcBottomConstraint;
@property (strong, nonatomic) NSLayoutConstraint *playerCenterXContraint;
@property (strong, nonatomic) NSLayoutConstraint *playerHeightContraint;
@property (strong, nonatomic) NSLayoutConstraint *danmuBottomContraint;
@property (strong, nonatomic) NSArray *playerContraints;

@property (assign, nonatomic) BOOL isPrepared;
@property (assign, nonatomic) CGFloat current;

@property (strong, nonatomic) UIView *view;
@property (strong, nonatomic) UIViewController *viewContorller;
@property (strong, nonatomic) UCloudMediaViewController *controlVC;

/**
 *  竖屏的时候播放器高度
 */
@property (assign, nonatomic) float portraitViewHeight;
/**
 *  是否支持播放器自动旋转(改变设备物理方向，自动改变播放器画面)
 */
@property (assign, nonatomic) BOOL supportAutomaticRotation;
/**
 *  是否支持角度旋转(支持表示播放画面会随着推流端旋转而旋转)
 */
@property (assign, nonatomic) BOOL supportAngleChange;


/**
 初始化播放器

 @param path 播放地址
 @param urlType url类型
 */
- (void)buildMediaPlayer:(NSString *)playString urlType:(UrlType)urlType;

- (void)rotateBegin:(UIInterfaceOrientation)noti;
- (void)rotateEnd;
- (void)awakeSupportInterOrtation:(UIViewController *)showVC completion:(void(^)(void))block;

@end
