//
//  RNMGoogleMapManager.h
//  Maps
//
//  Created by Gil Birman on 9/1/16.
//

#ifdef HAVE_GOOGLE_MAPS

#import <React/RCTViewManager.h>

@interface RNMGoogleMapManager : RCTViewManager
@property (nonatomic) BOOL isGesture;

@end

#endif