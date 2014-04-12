//
//  EditFriendsViewController.h
//  SGRibbit
//
//  Created by Steven Gerhard on 2/6/14.
//  Copyright (c) 2014 Steven Gerhard. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface EditFriendsViewController : UITableViewController
@property (nonatomic, strong) NSArray *allUsers;
@property (nonatomic, strong) PFUser *currentUser;
@property (nonatomic, strong) NSMutableArray *friends;

- (BOOL)isFriend:(PFUser *)user;
@end