//
//  FiltersViewController.h
//  Yelp
//
//  Created by King Chen on 6/25/15.
//  Copyright (c) 2015 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FiltersViewController;

@protocol FiltersViewControllerDelegate <NSObject>

- (void)filtersViewController:(FiltersViewController *)
filterviewcontroller didChangeFilters:(NSDictionary *)filters;

@end

@interface FiltersViewController : UIViewController

@property (nonatomic,weak) id<FiltersViewControllerDelegate>delegate;

@end
