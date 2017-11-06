//
//  MainScreen.h
//  Calories Counter
//
//  Created by Ataa Sawafta on 10/17/17.
//  Copyright © 2017 Ataa Sawafta. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DBManager.h"
@interface MainScreen : UITableViewController

+(NSDate *)  currentDate;
+(DBManager *) Connection;
@end
