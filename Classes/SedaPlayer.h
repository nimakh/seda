//
//  SedaPlayer.h
//  Seda
//  @author Nima

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

#define kNumberBuffers 3

typedef struct {
    AudioStreamBasicDescription mDataFormat;
    AudioQueueRef mQueue;
    AudioQueueBufferRef mBuffers[kNumberBuffers];
    SInt64 mCurrentPacket;
    UInt32 mNumPacketsToRead;
    UInt32 bufferByteSize;
    bool mIsRunning;
    const char * mMessage;
    UInt32 mMessageLength;
    float mTheta;
    id mSelf;
} AQPlayState;

@interface SedaPlayer : NSObject
@property (nonatomic, assign) AQPlayState playState;
@property (retain, nonatomic) IBOutlet UIButton *recordButton;
@property (retain, nonatomic) IBOutlet UIButton *playButton;
@property (retain, nonatomic) IBOutlet UITextView *messageTextView;
- (IBAction)playMessage:(id)sender;
- (void)play:(NSString *)message;
@end
