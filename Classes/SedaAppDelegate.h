//
//  SedaAppDelegate.h
//  Seda
//  @author Nima

#import <UIKit/UIKit.h>
#import "SedaRecorder.h"
#import "SedaPlayer.h"

@interface SedaAppDelegate : UIResponder <UIApplicationDelegate> {
    SedaRecorder * _recorder;
    SedaPlayer * _player;
}
@property (strong, nonatomic) IBOutlet UIWindow * window;
@end
