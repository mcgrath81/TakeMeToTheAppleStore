//
//  TakeMeToTheAppleStoreFlipsideViewController.h
//  TakeMeToTheAppleStore
//
//  Created by admin on 14/02/2013.
//  Copyright (c) 2013 emuse. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TakeMeToTheAppleStoreFlipsideViewController;

@protocol TakeMeToTheAppleStoreFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(TakeMeToTheAppleStoreFlipsideViewController *)controller;
@end

@interface TakeMeToTheAppleStoreFlipsideViewController : UIViewController

@property (weak, nonatomic) id <TakeMeToTheAppleStoreFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
