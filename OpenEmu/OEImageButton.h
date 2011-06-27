//
//  OEToolbarButton.h
//  OpenEmuMockup
//
//  Created by Christoph Leimbrock on 16.04.11.
//  Copyright 2011 none. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OEUIDrawingUtils.h"
@interface OEImageButton : NSButton {
@private
}
@end

@interface OEImageButtonCell : NSButtonCell {
@private
    NSImage* image;
}
- (BOOL)displaysHover;
- (NSRect)imageRectForButtonState:(OEButtonState)state;
@property (retain, readwrite) NSImage* image;
@end

// displays normal, inactive, disabled, pressed
@interface OEToolbarButtonPushCell : OEImageButtonCell {
@private
}
@end
// displays normal, inactive, disabled, pressed for Selected / Unselected
@interface OEToolbarButtonSelectableCell : OEImageButtonCell {
@private
}
@end

// Displays normal, hover and pressed
@interface OEImageButtonHoverPressed : OEImageButtonCell {
@private
}
@end

// Displays normal, hover and pressed for Selected / Unselected
@interface OEImageButtonHoverSelectable : OEImageButtonCell{
}
@end

// Displays normal, pressed
@interface OEImageButtonPressed : OEImageButtonCell{
}
@end