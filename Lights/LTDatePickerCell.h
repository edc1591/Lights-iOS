//
//  LTDatePickerCell.h
//  Lights
//
//  Created by Evan Coleman on 12/19/13.
//  Copyright (c) 2013 Evan Coleman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LTDatePickerCell : UITableViewCell

- (id)initWithReuseIdentifier:(NSString *)reuseIdentifier;

@property (nonatomic) UIDatePicker *datePicker;

@end
