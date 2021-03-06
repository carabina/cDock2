//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSDictionary, NSString;

@interface LKImageExporter : NSObject
{
    CALayer *_layer;
    struct CGRect _bounds;
    NSDictionary *_options;
    struct CGColorSpace *_colorSpace;
    NSString *_format;
    BOOL _flipped;
    unsigned int _padding;
}

@property(nonatomic) unsigned int padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (_Bool)exportFromTime:(double)arg1 data:(id)arg2;
- (_Bool)exportFromTime:(double)arg1 URL:(id)arg2;
- (struct CGImage *)copyImageForTime:(double)arg1;
- (void)dealloc;
- (id)initWithLayer:(id)arg1 bounds:(struct CGRect)arg2 options:(id)arg3;

@end

