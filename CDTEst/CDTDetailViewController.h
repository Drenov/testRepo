//
//  CDTDetailViewController.h
//  CDTEst
//
//  Created by Dren Drenov on 7/10/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CDTDetailViewController : UIViewController

@property (strong, nonatomic, readwrite) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
