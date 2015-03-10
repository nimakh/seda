//
//  SedaRecorder.h
//  Seda
//  @author Nima

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#include <limits.h>
#include <Accelerate/Accelerate.h>

typedef struct {
    id mSelf;
    AudioStreamBasicDescription mDataFormat;
    AudioQueueRef mQueue;
    AudioQueueBufferRef mBuffers[kNumberBuffers];
    UInt32 bufferByteSize;
    SInt64 mCurrentPacket;
    bool mIsRunning;
} AQRecordState;

@interface SedaRecorder : NSObject
@property (nonatomic, assign) AQRecordState recordState;
@property (retain, nonatomic) IBOutlet UIButton *playButton;
@property (retain, nonatomic) IBOutlet UIButton *recordButton;
@property (retain, nonatomic) IBOutlet UITextView *receiverTextView;
- (IBAction)recordMessage:(id)sender;
- (void)startRecording;
- (void)stopRecording;
- (void)updateTextView;
@end
