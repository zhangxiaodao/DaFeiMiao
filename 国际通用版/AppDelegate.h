//
//  AppDelegate.h
//  国际通用版
//
//  Created by 杭州阿尔法特 on 2016/11/15.
//  Copyright © 2016年 张海昌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

