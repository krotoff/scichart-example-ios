//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieHitTestInfo.h is part of SCICHART®, High Performance Scientific Charts
// For full terms and conditions of the license, see http://www.scichart.com/scichart-eula/
//
// This source code is protected by international copyright law. Unauthorized
// reproduction, reverse-engineering, or distribution of all or any portion of
// this source code is strictly prohibited.
//
// This source code contains confidential and proprietary trade secrets of
// SciChart Ltd., and should at no time be copied, transferred, sold,
// distributed or made available without express written permission.
//******************************************************************************

#import <Foundation/Foundation.h>

@protocol ISCIPieRenderableSeries;
@class SCIPieSegment;

/// :nodoc:
@interface SCIPieHitTestInfo : NSObject

@property (nonatomic, weak) id<ISCIPieRenderableSeries> renderableSeries;
@property (nonatomic, weak) SCIPieSegment * segment;
@property (nonatomic) BOOL isHit;
@property (nonatomic) int segmentIndex;

-(instancetype)initWithSeries:(id<ISCIPieRenderableSeries>)series segment:(SCIPieSegment*)segment isHit:(BOOL)isHit segmentIndex:(int)index;

@end
