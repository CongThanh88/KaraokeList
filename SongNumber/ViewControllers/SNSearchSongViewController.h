//
//  SNSearchSongViewController.h
//  SongNumber
//
//  Created by Cong Thanh on 8/14/14.
//  Copyright (c) 2014 com.khoisang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SNSongTableViewCellDelegate.h"
#import "SNSelectBoxView.h"
#import "SNToggleButton.h"
#import "KSBasePopupView.h"

@interface SNSearchSongViewController : UIViewController<UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, SelectBoxDelegate, PopupViewDelegate, SNSongTableViewCellDelegate>

@property (weak, nonatomic) IBOutlet UIView *boundSearchView;
@property (weak, nonatomic) IBOutlet UITextField *txtSearchField;
@property (weak, nonatomic) IBOutlet SNSelectBoxView *btnNgonNgu;
@property (weak, nonatomic) IBOutlet SNSelectBoxView *btnTheLoai;
@property (weak, nonatomic) IBOutlet SNSelectBoxView *btnSort;
@property (weak, nonatomic) IBOutlet SNToggleButton *btnAll;
@property (weak, nonatomic) IBOutlet SNToggleButton *btnFree;
@property (weak, nonatomic) IBOutlet SNToggleButton *btnFavorite;
@property (weak, nonatomic) IBOutlet SNToggleButton *btnNew;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
//@property (nonatomic, strong) MBProgressHUD *loadingView;
@property (strong, nonatomic) UILabel *notifyView;

- (IBAction)btnDeleteText:(id)sender;
- (IBAction)btnSort:(id)sender;
- (IBAction)btnNgonNgu:(id)sender;
- (IBAction)btnTheLoai:(id)sender;
- (IBAction)btnAll:(id)sender;
- (IBAction)btnFree:(id)sender;
- (IBAction)btnFavorite:(id)sender;
- (IBAction)btnNew:(id)sender;

@end
