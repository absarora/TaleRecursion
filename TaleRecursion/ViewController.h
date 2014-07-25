//
//  ViewController.h
//  TaleRecursion
//
//  Created by Ajaybir Singh on 7/24/14.
//  Copyright (c) 2014 Appcoders. All rights reserved.
//
#import <FacebookSDK/FacebookSDK.h>
#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <FBLoginViewDelegate>

@property (weak, nonatomic) IBOutlet FBLoginView *loginButton;

@property (weak, nonatomic) IBOutlet UILabel *lblLoginStatus;

@property (weak, nonatomic) IBOutlet UILabel *lblUsername;

@property (weak, nonatomic) IBOutlet UILabel *lblEmail;

@property (weak, nonatomic) IBOutlet FBProfilePictureView *profilePicture;

@end
