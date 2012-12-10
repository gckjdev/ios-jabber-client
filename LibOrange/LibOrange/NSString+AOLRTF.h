//
//  NSString+AOLRTF.h
//  LibOrange
//
//  Created by Alex Nichol on 6/9/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (AOLRTF)

- (NSString *)stringByRemovingAOLRTFTags;
- (NSString *)stringByAddingAOLRTFTags;

@end
