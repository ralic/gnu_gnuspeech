//
// $Id: GSPronunciationDictionary.h,v 1.2 2004/05/01 00:05:44 nygard Exp $
//

//  This file is part of __APPNAME__, __SHORT_DESCRIPTION__.
//  Copyright (C) 2004 __OWNER__.  All rights reserved.

#import <Foundation/NSObject.h>

@interface GSPronunciationDictionary : NSObject
{
    NSString *version;
    NSMutableDictionary *pronunciations;
    NSMutableArray *suffixOrder;
    NSMutableDictionary *suffixes;
}

+ (GSPronunciationDictionary *)mainDictionary;

//- (id)initWithContentsOfFile:(NSString *)filename;
- (id)init;
- (void)dealloc;

- (NSString *)version;
- (void)setVersion:(NSString *)newVersion;

- (void)readFile:(NSString *)filename;
- (void)_readSuffixesFromFile:(NSString *)filename;

- (NSString *)pronunciationForWord:(NSString *)aWord;

- (void)testString:(NSString *)str;

- (NSString *)description;

@end
