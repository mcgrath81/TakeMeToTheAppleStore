//
//  TakeMeToTheAppleStoreFlipsideViewController.m
//  TakeMeToTheAppleStore
//
//  Created by admin on 14/02/2013.
//  Copyright (c) 2013 emuse. All rights reserved.
//

#import "TakeMeToTheAppleStoreFlipsideViewController.h"

@interface TakeMeToTheAppleStoreFlipsideViewController ()

@end

@implementation TakeMeToTheAppleStoreFlipsideViewController

- (void)awakeFromNib
{
    self.contentSizeForViewInPopover = CGSizeMake(320.0, 480.0);
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
