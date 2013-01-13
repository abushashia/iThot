//
//  MasterViewController.h
//  iThotMasterDetail
//
//  Created by Isaac Paquette on 1/13/13.
//  Copyright (c) 2013 Adam Bushashia. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
