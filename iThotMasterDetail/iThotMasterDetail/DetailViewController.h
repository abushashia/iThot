//
//  DetailViewController.h
//  iThotMasterDetail
//
//  Created by Isaac Paquette on 1/13/13.
//  Copyright (c) 2013 Adam Bushashia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
