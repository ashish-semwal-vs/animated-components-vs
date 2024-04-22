
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNAnimatedComponentsVsSpec.h"

@interface AnimatedComponentsVs : NSObject <NativeAnimatedComponentsVsSpec>
#else
#import <React/RCTBridgeModule.h>

@interface AnimatedComponentsVs : NSObject <RCTBridgeModule>
#endif

@end
