//
//  XYZDetailViewController.h
//  ControllingSource
//
//  Created by Mary Krombel on 11/16/13.
//  Copyright (c) 2013 JollyMystic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
