//
//  SignupViewController.h
//  SGRibbit
//
//  Created by Steven Gerhard on 2/5/14.
//  Copyright (c) 2014 Steven Gerhard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignupViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;
- (IBAction)signUp:(id)sender;


@end
