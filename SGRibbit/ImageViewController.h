//
//  ImageViewController.h
//  SGRibbit
//
//  Created by Steven Gerhard on 2/8/14.
//  Copyright (c) 2014 Steven Gerhard. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ImageViewController : UIViewController
@property (nonatomic, strong)PFObject *message;

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@end
