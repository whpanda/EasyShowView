//
//  EasyShowLodingView.h
//  EasyShowViewDemo
//
//  Created by nf on 2017/12/14.
//  Copyright © 2017年 chenliangloveyou. All rights reserved.
//

#import "EasyShowView.h"

@interface EasyShowLodingView : EasyShowView


+ (void)showLoding ;
+ (void)showLodingText:(NSString *)text ;
+ (void)showLodingText:(NSString *)text inView:(UIView *)superView ;
+ (void)showLodingText:(NSString *)text image:(UIImage *)image ;
+ (void)showLodingText:(NSString *)text image:(UIImage *)image inView:(UIView *)superView ;



+ (void)hidenLoding ;
+ (void)hidenLoingInView:(UIView *)superView ;
+ (void)hidenAllLoding ;



@end
