//
//  BuildDashboard.h
//  iBroke
//
//  Created by Mujtaba Hussain on 20/10/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BuildDashboard : NSObject

-(id)initWithBuildData:(NSDictionary *)buildInfo;

@property (nonatomic, retain) NSMutableArray *builds;

@end
