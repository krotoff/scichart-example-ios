//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipModifierStyle.h is part of SCICHART®, High Performance Scientific Charts
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

#import <UIKit/UIKit.h>
#import "SCITooltipModifierStyleBase.h"
#import "ISCIPointMarker.h"

/**
 * The SCITooltipModifierStyle class.
 * @note Provides properties for styling the text and appearence of the TooltipMidifier.
 * @see `SCITooltipModifierStyleProtocol`
 * @see `SCITooltipModifier`
 * @see `SCIStyleProtocol`
 */
@interface SCITooltipModifierStyle : NSObject <SCITooltipModifierStyleProtocol>

/**
 * Changes appearance of targetMarker on the SCITooltipModifier.
 * @note You can change style of point marker. Ensure that instance implements SCIPointMarker protocol!
 * @code
 * let marker = SCIEllipsePointMarker()
 * marker.drawBorder = false
 * marker.fillBrush = SCIBrushSolid(color: UIColor.redColor())
 * tooltipModifier.style.targetMarker = marker
 * @endcode
 * @see SCIPointMarkerProtocol
 */
@property (nonatomic, strong) id<ISCIPointMarker> targetMarker;

/**
 * Changes target offset mode of hit test. Default is SCITooltipTargetOffset_Up.
 * By default hit test point is located above finger, you can change this bahaviour by changing this property
 * @see SCITooltipTargetOffsetMode
 */
@property (nonatomic) SCITooltipTargetOffsetMode targetOffsetMode;
/**
 * Changes target offset distance in pixels. By default it is 50.0
 * If you need to change target offset direction you can change **targetOffsetMode** property
 */
@property (nonatomic) float targetOffsetValue;
/**
 * defines starting offset of hit test point. By default it is (0;0)
 * If you need some custom offset, you can change this property and set targetOffsetMode to SCITooltipTargetOffset_None or targetOffsetValue to 0
 */
@property (nonatomic) CGPoint targetCustomOffset;

@end
