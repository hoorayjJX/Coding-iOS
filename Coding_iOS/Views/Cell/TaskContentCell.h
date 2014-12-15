//
//  TaskContentCell.h
//  Coding_iOS
//
//  Created by 王 原闯 on 14-8-19.
//  Copyright (c) 2014年 Coding. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@interface TaskContentCell : UITableViewCell<UITextViewDelegate>
@property (strong, nonatomic) Task *task;
@property (nonatomic,copy) void(^textValueChangedBlock)(NSString *);
@property (nonatomic,copy) void(^textViewBecomeFirstResponderBlock)();
@property (nonatomic,copy) void(^deleteBtnClickedBlock)(Task *);

+ (CGFloat)cellHeightWithObj:(id)obj;
@end
