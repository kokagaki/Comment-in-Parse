//
//  PhotoDetailsFooterView.h
//  :)
//
//  Created by Kenny Okagaki on 7/6/15.
//

#import <UIKit/UIKit.h>

@interface PhotoDetailsFooterView : UIView

@property (nonatomic, strong) UITextField *commentField;
@property (nonatomic) BOOL hideDropShadow;

+ (CGRect)rectForView;

@end
