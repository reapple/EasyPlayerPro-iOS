//
//  FileListViewController.h
//  EasyPlayer
//
//  Created by yingengyue on 2017/9/15.
//  Copyright © 2017年 duowan. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 文件列表：录像、截图
 */
@interface FileListViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) IBOutlet UITableView *myTabel;

@end
