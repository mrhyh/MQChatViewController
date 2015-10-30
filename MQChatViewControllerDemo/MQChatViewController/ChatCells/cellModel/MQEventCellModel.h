//
//  MQEventCellModel.h
//  MeiQiaSDK
//
//  Created by dingnan on 15/10/29.
//  Copyright © 2015年 MeiQia Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MQCellModelProtocol.h"

/**
 * MQEventCellModel定义了消息事件的基本类型数据，包括产生cell的内部所有view的显示数据，cell内部元素的frame等
 * @warning MQEventCellModel必须满足MQCellModelProtocol协议
 */
@interface MQEventCellModel : NSObject <MQCellModelProtocol>

/**
 * @brief 事件文字
 */
@property (nonatomic, readonly, copy) NSString *eventText;

/**
 * @brief 事件消息的时间
 */
@property (nonatomic, readonly, copy) NSString *eventDate;

/**
 * @brief 消息气泡button的frame
 */
@property (nonatomic, readonly, assign) CGRect eventLabelFrame;


/**
 *  根据MQMessage内容来生成cell model
 */
- (MQEventCellModel *)initCellModelWithMessage:(MQMessage *)message;

@end
