//
//  LibTest.h
//  LibTest
//
//  Created by cy on 2018/1/14.
//  Copyright © 2018年 cy. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for LibTest.
FOUNDATION_EXPORT double LibTestVersionNumber;

//! Project version string for LibTest.
FOUNDATION_EXPORT const unsigned char LibTestVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LibTest/PublicHeader.h>

#if __has_include(<LibTest/LibTest.h>)
#import <LibTest/CYPrint.h>
#else
#import "CYPrint.h"
#endif

