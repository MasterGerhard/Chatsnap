//
//  FriendsViewController.h
//  SGRibbit
//
//  Created by Steven Gerhard on 2/7/14.
//  Copyright (c) 2014 Steven Gerhard. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
@interface FriendsViewController : UITableViewController
@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;
@end
