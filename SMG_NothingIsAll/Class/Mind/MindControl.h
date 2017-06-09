//
//  MindControll.h
//  SMG_NothingIsAll
//
//  Created by 贾  on 2017/5/6.
//  Copyright © 2017年 XiaoGang. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol MindControlDelegate <NSObject>


-(void) mindControl_AddDemand:(id)demand withType:(MindType)type;//新增需求;

@end

/**
 *  MARK:--------------------Mind引擎(七情六欲)--------------------
 *
 *  <引擎>
 *  1,驱动input
 *  2,驱动output
 *
 *  <mind策略>
 *  最简单策略(><=)依赖于博弈;
 *
 *  <各类>
 *  1,欲望需求:(外界索取)
 *      比较各mind元的minValue;并以此策略展开decision;
 *  2,兴趣需求:(自身行动)
 *      比较各mind元的maxValue;并以此策略展开decision;
 */
@class Mine;
@interface MindControl : NSObject

@property (weak, nonatomic) id<MindControlDelegate> delegate;
@property (strong,nonatomic) Mine *mine;

/**
 *  MARK:--------------------是否喜欢pointer--------------------
 *  参数:(应该是数组/model)
 */
-(void) commitOutAttention:(AIPointer*)pointer;

@end
