//
//  XYZMasterViewController.h
//  ControllingSource
//
//  Created by Mary Krombel on 11/16/13.
//  Copyright (c) 2013 JollyMystic. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface XYZMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
