//
//  MQRecordView.h
//  MeChatSDK
//
//  Created by Injoy on 14/11/13.
//  Copyright (c) 2014年 MeChat. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MQRecordViewDelegate <NSObject>

/** 通知viewController完成录音 */
- (void)didFinishRecordingWithAMRFilePath:(NSString *)filePath;

/**
 *  录音的音量有更新
 *
 *  @param recordView 录音界面
 *  @param volume     音量
 */
- (void)didUpdateVolumeInRecordView:(UIView *)recordView volume:(CGFloat)volume;

@end

@interface MQRecordView : UIView

@property(nonatomic, weak)   id<MQRecordViewDelegate> recordViewDelegate;
@property(nonatomic, assign) float marginBottom;
/** 是否显示撤回语音 */
@property(nonatomic,assign) BOOL revoke;

-(instancetype)initWithFrame:(CGRect)frame maxRecordDuration:(NSTimeInterval)duration;

-(void)setupUI;

-(void)startRecording;
-(void)stopRecord;
- (void)reDisplayRecordView;
/** 语音音量的大小设置 */
-(void)setRecordingVolume:(float)volume;
//取消录音
- (void)cancelRecording;

/** 更新frame */
- (void)updateFrame:(CGRect)frame;

/** 当前是否在录音*/
- (BOOL)isRecording;

@end
