//
//  AppDelegate.h
//  Map_Alarm
//
//  Created by Lidia Chou on 3/2/15.
//  Copyright (c) 2015 Lidia Chou. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ArrayAlarmes.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    ArrayAlarmes *alarms;
}

@property (strong, nonatomic) UIWindow *window;


@end

