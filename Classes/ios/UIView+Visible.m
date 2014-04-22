//
//  UIView+Visible.h
//
//  Created by Guillaume Cerquant on 21/03/13.
//  Install with: pod 'UIView+Visible'
//

#import "UIView+Visible.h"

@implementation UIView (Visible)


- (void) setVisible:(BOOL) visible {
    self.hidden = ! visible;
}

- (BOOL) isVisible {
    return ! self.isHidden;
}

@end
