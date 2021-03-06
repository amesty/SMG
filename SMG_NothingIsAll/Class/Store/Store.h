//
//  Store.h
//  SMG_NothingIsAll
//
//  Created by 贾  on 2017/4/8.
//  Copyright © 2017年 XiaoGang. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LogicStore,MemStore,MKStore;
@interface Store : NSObject


@property (strong,nonatomic) MemStore *memStore;    //记忆存储
@property (strong,nonatomic) MKStore *mkStore;      //知识图谱
@property (strong,nonatomic) LogicStore *logicStore;//逻辑存储



/**
 *  MARK:--------------------init--------------------
 */
-(id) init;


/**
 *  MARK:--------------------搜索关于文字的记忆--------------------
 *  searchMemStoreWithLanguageText:搜索精确匹配的记忆
 *  searchMemStoreContainerText:搜索相关的所有记忆
 */
-(NSDictionary*) searchMemStoreWithLanguageText:(NSString*)text;  //搜索精确匹配的记忆
-(NSMutableArray*) searchMemStoreContainerText:(NSString*)text limit:(NSInteger)limit;  //搜索相关话题的所有记忆






@end
