//
//  CommentTableViewController.h
//
//  Created by Kenny Okagaki on 6/25/15. Sourced from Parse's Anypic example!
//  :)
//

#import <UIKit/UIKit.h>
#import <ParseUI/ParseUI.h>
#import "CommentBaseTableViewCell.h"

@protocol CommentTableViewControllerDelegate;

@interface CommentTableViewController : PFQueryTableViewController <UITextFieldDelegate, UIActionSheetDelegate, CommentBaseTableViewCellDelegate>

// below is trying to fit the architecture for calling closeup VC from timeline VC... 7/7
//- (instancetype)initWithTrophy:(TATrophy *)trophy;
@property (nonatomic, weak) id<CommentTableViewControllerDelegate> delegate;

@property (nonatomic, strong) PFObject *photo;

- (id)initWithPhoto:(PFObject*)aPhoto;

@end

