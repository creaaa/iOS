//
//  AdditionQuestion.h
//  Maths
//
//  Created by Derrick Park on 2017-04-20.
//  Copyright © 2017 Derrick Park. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Question : NSObject

@property NSString *question;
@property NSInteger answer;
@property NSDate *startTime;
@property NSDate *endTime;
@property NSInteger rightValue;
@property NSInteger leftValue;

-(NSTimeInterval) answerTime;
-(void) generateQuestion;

@end
