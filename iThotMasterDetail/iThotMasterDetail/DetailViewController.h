//
//  DetailViewController.h
//  iThotMasterDetail
//
//  Created by Isaac Paquette on 1/13/13.
//  Copyright (c) 2013 Adam Bushashia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Thot.h"

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) Thot *detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UITextView *detailText;


@end
