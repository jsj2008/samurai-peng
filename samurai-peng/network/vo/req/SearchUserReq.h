//  
//  此文件请勿修改，如需扩展请在外部实现

//  
//  SearchUserReq.h
//  PENG
//
//  此文件请勿修改，如需扩展请在外部实现.
//  Copyright (c) 2015年 星盛. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Req.h"

@interface SearchUserReq : Req

//(必填) 
@property(nonatomic,strong) NSString * keyword;
@end