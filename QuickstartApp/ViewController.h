//
//  ViewController.h
//  QuickstartApp
//
//  Created by Prsenjit Goswami on 12/12/16.
//  Copyright © 2016 CTS. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GTMOAuth2ViewControllerTouch.h"
#import "GTLDrive.h"

@interface ViewController : UIViewController

@property (nonatomic, strong) GTLServiceDrive *service;
@property (nonatomic, strong) UITextView *output;

@end


