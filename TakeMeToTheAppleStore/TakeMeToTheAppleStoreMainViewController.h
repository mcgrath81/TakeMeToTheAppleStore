//
//  TakeMeToTheAppleStoreMainViewController.h
//  TakeMeToTheAppleStore
//
//  Created by admin on 14/02/2013.
//  Copyright (c) 2013 emuse. All rights reserved.
//

#import "TakeMeToTheAppleStoreFlipsideViewController.h"

@interface TakeMeToTheAppleStoreMainViewController : UIViewController <TakeMeToTheAppleStoreFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end