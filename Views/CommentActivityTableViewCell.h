//
//  CommentActivityTableViewCell.h
//  :)
//
//  Created by Kenny Okagaki on 6/25/15.
//

#import <UIKit/UIKit.h>
#import "CommentBaseTableViewCell.h"

@protocol CommentActivityTableViewCellDelegate;

@interface CommentActivityTableViewCell : CommentBaseTableViewCell

/*! Setter for the activity associated with this cell */
@property (nonatomic, strong) PFObject *activity;

/*! Set the new state. This changes the background of the cell. */
- (void)setIsNew:(BOOL)isNew;

@end


/*!
 The protocol defines methods a delegate of a PAPBaseTextCell should implement.
 */
@protocol CommentActivityTableViewCellDelegate <CommentBaseTableViewCellDelegate>
@optional

/*!
 Sent to the delegate when the activity button is tapped
 @param activity the PFObject of the activity that was tapped
 */
- (void)cell:(CommentActivityTableViewCell *)cellView didTapActivityButton:(PFObject *)activity;

@end
