//
//  AppDelegate.h
//  QuickstartApp
//
//  Created by Prsenjit Goswami on 12/12/16.
//  Copyright © 2016 CTS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "AppAuthExampleViewController.h"
#import "AppAuth.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;

@property(nonatomic, strong) id<OIDAuthorizationFlowSession> currentAuthorizationFlow;

@end

