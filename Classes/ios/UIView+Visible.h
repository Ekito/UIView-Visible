//
//  UIView+Visible.h
//
//  Created by Guillaume Cerquant on 21/03/13.
//  Install with: pod 'UIView+Visible'
//

#import <UIKit/UIKit.h>

@interface UIView (Visible)

/**
 * A Boolean value that determines whether the receiver is visible.
 *
 * This is a simple wrapper around `hidden` property.
 */
@property (assign, nonatomic, setter=setVisible:) BOOL isVisible;

@end
