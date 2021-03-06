/* IWNovaController */

/* Don't edit this file if you opened it as NovaController.h, all changes will be lost. 
   Edit the first shell script build phase */
   
#import <Cocoa/Cocoa.h>
#import <PYMIDI/PYMIDIEndpoint.h>
#import "IWProg.h"
#import "IWGraphButton.h"
#import "IWCableView.h"
#import "IWDarkSliderCell.h"

#define SYSEXBUFSIZE 1024

@interface IWNovaController : NSObject
{
    NSUserDefaults *defaults;
    IBOutlet NSTextView *display;
    IBOutlet NSTextView *display2;
    IBOutlet NSPopUpButton *sourcePopUp;
    IBOutlet NSPopUpButton *destinationPopUp;
    IBOutlet NSMatrix *channelButtons;
    
    IBOutlet NSWindow *mainWindow;
    IBOutlet NSWindow *env1Window;
    IBOutlet NSWindow *env2Window;
    IBOutlet NSWindow *env3Window;
    IBOutlet NSWindow *lfo1Window;
    IBOutlet NSWindow *lfo2Window;
    IBOutlet NSWindow *osc1Window;
    IBOutlet NSWindow *osc2Window;
    IBOutlet NSWindow *osc3Window;
    IBOutlet NSWindow *noiseWindow;
    IBOutlet NSWindow *filterWindow;
    IBOutlet NSWindow *midiWindow;
    IBOutlet NSWindow *lfo1ControlsWindow;
    IBOutlet NSWindow *lfo2ControlsWindow;
    IBOutlet NSWindow *env2ControlsWindow;
    IBOutlet NSWindow *env3ControlsWindow;
    IBOutlet NSWindow *wheelControlsWindow;
    IBOutlet NSWindow *afterTouchControlsWindow;
    IBOutlet NSWindow *osc1ControlledWindow;
    IBOutlet NSWindow *osc2ControlledWindow;
    IBOutlet NSWindow *osc3ControlledWindow;
    IBOutlet NSWindow *ring13ControlledWindow;
    IBOutlet NSWindow *ring23ControlledWindow;
    IBOutlet NSWindow *noiseControlledWindow;
    IBOutlet NSWindow *filterControlledWindow;
    
    IBOutlet NSTextField *osc1FineText;
    IBOutlet NSTextField *osc2FineText;
    IBOutlet NSTextField *osc3FineText;
    IBOutlet NSTextField *osc1PitchText;
    IBOutlet NSTextField *osc2PitchText;
    IBOutlet NSTextField *osc3PitchText;

    IBOutlet IWGraphButton *osc1;
    IBOutlet IWGraphButton *osc2;
    IBOutlet IWGraphButton *osc3;
    IBOutlet IWGraphButton *noise;
    IBOutlet IWGraphButton *env1;
    IBOutlet IWGraphButton *env2;
    IBOutlet IWGraphButton *env3;
    IBOutlet IWGraphButton *lfo1;
    IBOutlet IWGraphButton *lfo2;
    IBOutlet IWGraphButton *filter;
    IBOutlet IWGraphButton *midi;

    IBOutlet IWGraphButton *test;

    IBOutlet IWCableView *cableView;

    IBOutlet IWDarkSliderCell *bankSelect;
    IBOutlet IWDarkSliderCell *sustain;
    IBOutlet IWDarkSliderCell *masterVolume;
    IBOutlet IWDarkSliderCell *portamento;
    IBOutlet IWDarkSliderCell *osc1Fine;
    IBOutlet IWDarkSliderCell *osc1Soften;
    IBOutlet IWDarkSliderCell *osc1Width;
    IBOutlet IWDarkSliderCell *osc1Sync;
    IBOutlet IWDarkSliderCell *osc2Fine;
    IBOutlet IWDarkSliderCell *osc2Soften;
    IBOutlet IWDarkSliderCell *osc2Width;
    IBOutlet IWDarkSliderCell *osc2Sync;
    IBOutlet IWDarkSliderCell *osc3Fine;
    IBOutlet IWDarkSliderCell *osc3Soften;
    IBOutlet IWDarkSliderCell *osc3Width;
    IBOutlet IWDarkSliderCell *osc3Sync;
    IBOutlet IWDarkSliderCell *osc1Mix;
    IBOutlet IWDarkSliderCell *osc2Mix;
    IBOutlet IWDarkSliderCell *osc3Mix;
    IBOutlet IWDarkSliderCell *ring13Mix;
    IBOutlet IWDarkSliderCell *ring23Mix;
    IBOutlet IWDarkSliderCell *noiseMix;
    IBOutlet IWDarkSliderCell *lfo1Delay;
    IBOutlet IWDarkSliderCell *lfo1Offset;
    IBOutlet IWDarkSliderCell *lfo1Speed;
    IBOutlet IWDarkSliderCell *lfo2Delay;
    IBOutlet IWDarkSliderCell *lfo2Offset;
    IBOutlet IWDarkSliderCell *lfo2Speed;
    IBOutlet IWDarkSliderCell *env3Attack;
    IBOutlet IWDarkSliderCell *env3Decay;
    IBOutlet IWDarkSliderCell *env3Sustain;
    IBOutlet IWDarkSliderCell *env3Release;
    IBOutlet IWDarkSliderCell *env3Velocity;
    IBOutlet IWDarkSliderCell *env3Delay;
    IBOutlet IWDarkSliderCell *env2Attack;
    IBOutlet IWDarkSliderCell *env2Decay;
    IBOutlet IWDarkSliderCell *env2Sustain;
    IBOutlet IWDarkSliderCell *env2Release;
    IBOutlet IWDarkSliderCell *env2Velocity;
    IBOutlet IWDarkSliderCell *env2Delay;
    IBOutlet IWDarkSliderCell *env1Attack;
    IBOutlet IWDarkSliderCell *env1Decay;
    IBOutlet IWDarkSliderCell *env1Sustain;
    IBOutlet IWDarkSliderCell *env1Release;
    IBOutlet IWDarkSliderCell *env1Velocity;
    IBOutlet IWDarkSliderCell *noiseSoften;
    IBOutlet IWDarkSliderCell *filterOverdrive;
    IBOutlet IWDarkSliderCell *filterFrequency;
    IBOutlet IWDarkSliderCell *filterTracking;
    IBOutlet IWDarkSliderCell *filterResonance;
    IBOutlet IWDarkSliderCell *arpSpeed;
    IBOutlet IWDarkSliderCell *arpPattern;
    IBOutlet IWDarkSliderCell *arpLatch;
    IBOutlet IWDarkSliderCell *distortionSend;
    IBOutlet IWDarkSliderCell *distortionWheel;
    IBOutlet IWDarkSliderCell *panPosition;
    IBOutlet IWDarkSliderCell *reverbSend;
    IBOutlet IWDarkSliderCell *reverbWheel;
    IBOutlet IWDarkSliderCell *reverbDecay;
    IBOutlet IWDarkSliderCell *reverbHfDamp;
    IBOutlet IWDarkSliderCell *chorusSend;
    IBOutlet IWDarkSliderCell *chorusWheel;
    IBOutlet IWDarkSliderCell *chorusSpeed;
    IBOutlet IWDarkSliderCell *chorusModDepth;
    IBOutlet IWDarkSliderCell *chorusFeedback;
    IBOutlet IWDarkSliderCell *delaySend;
    IBOutlet IWDarkSliderCell *delayWheel;
    IBOutlet IWDarkSliderCell *delayTime;
    IBOutlet IWDarkSliderCell *delayFeedback;
    IBOutlet IWDarkSliderCell *delayHfDamp;
    IBOutlet IWDarkSliderCell *configMorph;
    IBOutlet IWDarkSliderCell *osc1PitchEnv2;
    IBOutlet IWDarkSliderCell *osc1PitchEnv3;
    IBOutlet IWDarkSliderCell *osc1PitchLfo1;
    IBOutlet IWDarkSliderCell *osc1SoftenEnv2;
    IBOutlet IWDarkSliderCell *osc1WidthEnv2;
    IBOutlet IWDarkSliderCell *osc1WidthLfo1;
    IBOutlet IWDarkSliderCell *osc1WidthLfo2;
    IBOutlet IWDarkSliderCell *osc1SyncEnv2;
    IBOutlet IWDarkSliderCell *osc1SyncLfo1;
    IBOutlet IWDarkSliderCell *osc2PitchEnv2;
    IBOutlet IWDarkSliderCell *osc2PitchEnv3;
    IBOutlet IWDarkSliderCell *osc2PitchLfo1;
    IBOutlet IWDarkSliderCell *osc2SoftenEnv2;
    IBOutlet IWDarkSliderCell *osc2WidthEnv2;
    IBOutlet IWDarkSliderCell *osc2WidthLfo1;
    IBOutlet IWDarkSliderCell *osc2WidthLfo2;
    IBOutlet IWDarkSliderCell *osc2SyncEnv2;
    IBOutlet IWDarkSliderCell *osc2SyncLfo1;
    IBOutlet IWDarkSliderCell *osc3PitchEnv2;
    IBOutlet IWDarkSliderCell *osc3PitchEnv3;
    IBOutlet IWDarkSliderCell *osc3PitchLfo1;
    IBOutlet IWDarkSliderCell *osc3SoftenEnv2;
    IBOutlet IWDarkSliderCell *osc3WidthEnv2;
    IBOutlet IWDarkSliderCell *osc3WidthLfo1;
    IBOutlet IWDarkSliderCell *osc3WidthLfo2;
    IBOutlet IWDarkSliderCell *osc3SyncEnv2;
    IBOutlet IWDarkSliderCell *osc3SyncLfo1;
    IBOutlet IWDarkSliderCell *osc1MixEnv2;
    IBOutlet IWDarkSliderCell *osc2MixEnv2;
    IBOutlet IWDarkSliderCell *osc3MixEnv2;
    IBOutlet IWDarkSliderCell *filterFrequencyEnv2;
    IBOutlet IWDarkSliderCell *filterFrequencyEnv3;
    IBOutlet IWDarkSliderCell *filterFrequencyLfo1;
    IBOutlet IWDarkSliderCell *filterFrequencyLfo2;
    IBOutlet IWDarkSliderCell *filterResonanceEnv2;
    IBOutlet IWDarkSliderCell *filterResonanceEnv3;
    IBOutlet IWDarkSliderCell *filterResonanceLfo1;
    IBOutlet IWDarkSliderCell *filterResonanceLfo2;
    IBOutlet IWDarkSliderCell *lfo1Env3SpeedMod;
    IBOutlet IWDarkSliderCell *lfo2Env3SpeedMod;
    IBOutlet IWDarkSliderCell *noiseMixEnv2;
    IBOutlet IWDarkSliderCell *osc1Pitch;
    IBOutlet IWDarkSliderCell *osc2Pitch;
    IBOutlet IWDarkSliderCell *osc3Pitch;
    IBOutlet IWDarkSliderCell *osc1FormantWidth;
    IBOutlet IWDarkSliderCell *osc2FormantWidth;
    IBOutlet IWDarkSliderCell *osc3FormantWidth;
    IBOutlet IWDarkSliderCell *osc1SyncKeyFollow;
    IBOutlet IWDarkSliderCell *osc2SyncKeyFollow;
    IBOutlet IWDarkSliderCell *osc3SyncKeyFollow;
    IBOutlet IWDarkSliderCell *osc1SyncSkew;
    IBOutlet IWDarkSliderCell *osc2SyncSkew;
    IBOutlet IWDarkSliderCell *osc3SyncSkew;
    IBOutlet IWDarkSliderCell *combFrequency;
    IBOutlet IWDarkSliderCell *combBoost;
    IBOutlet IWDarkSliderCell *panDryLevel;
    IBOutlet IWDarkSliderCell *panSpeed;
    IBOutlet IWDarkSliderCell *panDepth;
    IBOutlet IWDarkSliderCell *delayStereoWidth;
    IBOutlet IWDarkSliderCell *vocoderBalance;
    IBOutlet IWDarkSliderCell *eqTreble;
    IBOutlet IWDarkSliderCell *eqBass;
    IBOutlet IWDarkSliderCell *partSemiDetune;
    IBOutlet IWDarkSliderCell *partDetune;
    IBOutlet IWDarkSliderCell *partRangeHigh;
    IBOutlet IWDarkSliderCell *partRangeLow;
    IBOutlet IWDarkSliderCell *masterTune;
    IBOutlet IWDarkSliderCell *breathControlRemap;
    IBOutlet IWDarkSliderCell *arpTransposeMidi;
    IBOutlet IWDarkSliderCell *arpTransposeRef;
    IBOutlet IWDarkSliderCell *programMapEditLoc;
    IBOutlet IWDarkSliderCell *programMapProgram;
    IBOutlet IWDarkSliderCell *arpUserPatternEditLoc;
    IBOutlet IWDarkSliderCell *arpUserPatternStep;
    IBOutlet IWDarkSliderCell *arpUserPatternNote;
    IBOutlet IWDarkSliderCell *arpUserPatternVel;
    IBOutlet IWDarkSliderCell *arpUserPatternSteps;
    IBOutlet IWDarkSliderCell *filterQNorm;
    IBOutlet IWDarkSliderCell *osc1PitchLfo2;
    IBOutlet IWDarkSliderCell *osc1PitchWheel;
    IBOutlet IWDarkSliderCell *osc1WidthEnv3;
    IBOutlet IWDarkSliderCell *osc1WidthWheel;
    IBOutlet IWDarkSliderCell *osc1SyncEnv3;
    IBOutlet IWDarkSliderCell *osc1SyncLfo2;
    IBOutlet IWDarkSliderCell *osc1SyncWheel;
    IBOutlet IWDarkSliderCell *osc1SoftenEnv3;
    IBOutlet IWDarkSliderCell *osc1SoftenLfo1;
    IBOutlet IWDarkSliderCell *osc1SoftenLfo2;
    IBOutlet IWDarkSliderCell *osc1SoftenWheel;
    IBOutlet IWDarkSliderCell *osc1MixEnv3;
    IBOutlet IWDarkSliderCell *osc1MixLfo1;
    IBOutlet IWDarkSliderCell *osc1MixLfo2;
    IBOutlet IWDarkSliderCell *osc1MixWheel;
    IBOutlet IWDarkSliderCell *osc2PitchLfo2;
    IBOutlet IWDarkSliderCell *osc2PitchWheel;
    IBOutlet IWDarkSliderCell *osc2WidthEnv3;
    IBOutlet IWDarkSliderCell *osc2WidthWheel;
    IBOutlet IWDarkSliderCell *osc2SyncEnv3;
    IBOutlet IWDarkSliderCell *osc2SyncLfo2;
    IBOutlet IWDarkSliderCell *osc2SyncWheel;
    IBOutlet IWDarkSliderCell *osc2SoftenEnv3;
    IBOutlet IWDarkSliderCell *osc2SoftenLfo1;
    IBOutlet IWDarkSliderCell *osc2SoftenLfo2;
    IBOutlet IWDarkSliderCell *osc2SoftenWheel;
    IBOutlet IWDarkSliderCell *osc2MixEnv3;
    IBOutlet IWDarkSliderCell *osc2MixLfo1;
    IBOutlet IWDarkSliderCell *osc2MixLfo2;
    IBOutlet IWDarkSliderCell *osc2MixWheel;
    IBOutlet IWDarkSliderCell *osc3PitchLfo2;
    IBOutlet IWDarkSliderCell *osc3PitchWheel;
    IBOutlet IWDarkSliderCell *osc3WidthEnv3;
    IBOutlet IWDarkSliderCell *osc3WidthWheel;
    IBOutlet IWDarkSliderCell *osc3SyncEnv3;
    IBOutlet IWDarkSliderCell *osc3SyncLfo2;
    IBOutlet IWDarkSliderCell *osc3SyncWheel;
    IBOutlet IWDarkSliderCell *osc3SoftenEnv3;
    IBOutlet IWDarkSliderCell *osc3SoftenLfo1;
    IBOutlet IWDarkSliderCell *osc3SoftenLfo2;
    IBOutlet IWDarkSliderCell *osc3SoftenWheel;
    IBOutlet IWDarkSliderCell *osc3MixEnv3;
    IBOutlet IWDarkSliderCell *osc3MixLfo1;
    IBOutlet IWDarkSliderCell *osc3MixLfo2;
    IBOutlet IWDarkSliderCell *osc3MixWheel;
    IBOutlet IWDarkSliderCell *ringMod13MixEnv2;
    IBOutlet IWDarkSliderCell *ringMod13MixEnv3;
    IBOutlet IWDarkSliderCell *ringMod13MixLfo1;
    IBOutlet IWDarkSliderCell *ringMod13MixLfo2;
    IBOutlet IWDarkSliderCell *ringMod13MixWheel;
    IBOutlet IWDarkSliderCell *ringMod23MixEnv2;
    IBOutlet IWDarkSliderCell *ringMod23MixEnv3;
    IBOutlet IWDarkSliderCell *ringMod23MixLfo1;
    IBOutlet IWDarkSliderCell *ringMod23MixLfo2;
    IBOutlet IWDarkSliderCell *ringMod23MixWheel;
    IBOutlet IWDarkSliderCell *noiseSoftenEnv2;
    IBOutlet IWDarkSliderCell *noiseSoftenEnv3;
    IBOutlet IWDarkSliderCell *noiseSoftenLfo1;
    IBOutlet IWDarkSliderCell *noiseSoftenLfo2;
    IBOutlet IWDarkSliderCell *noiseSoftenWheel;
    IBOutlet IWDarkSliderCell *noiseMixEnv3;
    IBOutlet IWDarkSliderCell *noiseMixLfo1;
    IBOutlet IWDarkSliderCell *noiseMixLfo2;
    IBOutlet IWDarkSliderCell *noiseMixWheel;
    IBOutlet IWDarkSliderCell *osc1WheelLfo1;
    IBOutlet IWDarkSliderCell *osc2WheelLfo1;
    IBOutlet IWDarkSliderCell *osc3WheelLfo1;
    IBOutlet IWDarkSliderCell *osc1AfterTouchLfo1;
    IBOutlet IWDarkSliderCell *osc2AfterTouchLfo1;
    IBOutlet IWDarkSliderCell *osc3AfterTouchLfo1;
    IBOutlet IWDarkSliderCell *lfo1AfterTouchSpeedMod;
    IBOutlet IWDarkSliderCell *lfo2AfterTouchSpeedMod;
    IBOutlet IWDarkSliderCell *filterFrequencyWheel;
    IBOutlet IWDarkSliderCell *filterResonanceWheel;
    IBOutlet IWDarkSliderCell *filterFrequencyWheelLfo2;
    IBOutlet IWDarkSliderCell *filterResonanceWheelLfo2;
    IBOutlet IWDarkSliderCell *filterFrequencyAfterTouchLfo2;
    IBOutlet IWDarkSliderCell *filterResonanceAfterTouchLfo2;
    IBOutlet IWDarkSliderCell *filterFrequencyAfterTouch;
    IBOutlet IWDarkSliderCell *filterResonanceAfterTouch;
    IBOutlet IWDarkSliderCell *lfo1WheelSpeedMod;
    IBOutlet IWDarkSliderCell *lfo2WheelSpeedMod;
    IBOutlet IWDarkSliderCell *env1Wheel;
    IBOutlet IWDarkSliderCell *env1AfterTouch;
    IBOutlet NSMatrix     *osc1Wave;
    IBOutlet NSMatrix     *osc2Wave;
    IBOutlet NSMatrix     *osc3Wave;
    IBOutlet NSMatrix     *osc1Oct;
    IBOutlet NSMatrix     *osc2Oct;
    IBOutlet NSMatrix     *osc3Oct;
    IBOutlet NSMatrix     *portamentoType;
    IBOutlet NSMatrix     *lfo1DelayTrigger;
    IBOutlet NSMatrix     *lfo2DelayTrigger;
    IBOutlet NSMatrix     *filterDB;
    IBOutlet NSMatrix     *filterType;
    IBOutlet NSMatrix     *lfo1Shape;
    IBOutlet NSMatrix     *lfo2Shape;
    IBOutlet NSMatrix     *lfo1Trigger;
    IBOutlet NSMatrix     *lfo2Trigger;
    IBOutlet NSMatrix     *lfo1Range;
    IBOutlet NSMatrix     *lfo2Range;
    IBOutlet NSMatrix     *env1Trigger;
    IBOutlet NSMatrix     *env2Trigger;
    IBOutlet NSMatrix     *env3Trigger;
    IBOutlet NSMatrix     *glide;
    IBOutlet NSMatrix     *chorusType;
    IBOutlet NSMatrix     *panType;
    IBOutlet NSMatrix     *arpConstPitch;
    IBOutlet NSMatrix     *arpOn;
    IBOutlet NSMatrix     *arpKeyReset;
    IBOutlet NSMatrix     *arpPatternBank;
    IBOutlet NSMatrix     *arpLatchType;
    IBOutlet NSMatrix     *arpQuantize;
    IBOutlet NSMatrix     *arpVelocity;
    IBOutlet NSMatrix     *arpMute;
    IBOutlet NSMatrix     *arpRealTimeTranspose;
    IBOutlet NSMatrix     *arpUserPatternGate;
    IBOutlet NSMatrix     *partOutput;
    IBOutlet NSMatrix     *arpOutput;
    IBOutlet NSMatrix     *clock;
    IBOutlet NSMatrix     *programMapBank;
    IBOutlet NSMatrix     *arpFillin;
    IBOutlet NSMatrix     *partFx;
    IBOutlet NSMatrix     *partSustainMode;
    IBOutlet NSMatrix     *oscTrigger;
    IBOutlet NSMatrix     *polyphony;
    IBOutlet NSMatrix     *sysexTxOption;
    IBOutlet NSMatrix     *delaySync;
    IBOutlet NSMatrix     *arpOctRange;
    IBOutlet NSMatrix     *arpGateTime;
    IBOutlet NSMatrix     *sysexRx;
    IBOutlet NSMatrix     *partVelCurve;
    IBOutlet NSMatrix     *delayRatio;
    IBOutlet NSMatrix     *globalMidi;
    IBOutlet NSMatrix     *partMidi;
    IBOutlet NSMatrix     *arpSync;
    IBOutlet NSMatrix     *globalIncomingProgChange;
    IBOutlet NSMatrix     *progMapBank;
    IBOutlet NSMatrix     *lfo1Sync;
    IBOutlet NSMatrix     *globalIncomingContChange;
    IBOutlet NSMatrix     *partProgChangeFilter;
    IBOutlet NSMatrix     *arpOutputRanging;
    IBOutlet NSMatrix     *lfo2Sync;
    IBOutlet NSMatrix     *partControlChangeFilt;
    IBOutlet NSMatrix     *partPedal;
    IBOutlet NSMatrix     *partSustain;
    IBOutlet NSMatrix     *partPolyphony;
    IBOutlet NSMatrix     *pedalMode;
    IBOutlet NSMatrix     *vocoderSibilanceType;
    IBOutlet NSMatrix     *vocoderInput;
    IBOutlet NSMatrix     *vocoderInsert;
    IBOutlet NSMatrix     *fxConfig;
    IBOutlet NSMatrix     *partMute;
    IBOutlet NSMatrix     *fxSend;
    IBOutlet NSMatrix     *partSelect;
    IBOutlet NSMatrix     *arpEdit;
    IBOutlet NSMatrix     *breathMode;
    IBOutlet NSMatrix     *phonesOutput;
    IBOutlet IWDarkSliderCell *osc1Semi;
    IBOutlet IWDarkSliderCell *osc2Semi;
    IBOutlet IWDarkSliderCell *osc3Semi;
    IBOutlet IWDarkSliderCell *breathSens;
    IBOutlet IWDarkSliderCell *osc1PitchbendRange;
    IBOutlet IWDarkSliderCell *osc2PitchbendRange;
    IBOutlet IWDarkSliderCell *osc3PitchbendRange;
    IBOutlet IWDarkSliderCell *input1Trim;
    IBOutlet IWDarkSliderCell *input2Trim;
    IBOutlet IWDarkSliderCell *filterWidth;
    IBOutlet IWDarkSliderCell *vocoderSibilanceLevel;
    IBOutlet IWDarkSliderCell *vocoderWidth;

    
    NSColor *novaColour;
    
    PYMIDIEndpoint *source;
    PYMIDIEndpoint *destination;
    Boolean receivingSysex;
    Boolean receivingNRPN;
    Byte messageBuffer[SYSEXBUFSIZE];
    int messageCounter;
    bool messageComplete;
    NSData *message;
    IWProg *program;
    Byte channel;
    Byte midiMessage[9];
    Byte savedSysexBuffer[SYSEXBUFSIZE];
    NSMutableString *previousSlider;
}


-(IBAction)bankSelectIn:(id)sender;
-(IBAction)sustainIn:(id)sender;
-(IBAction)masterVolumeIn:(id)sender;
-(IBAction)portamentoIn:(id)sender;
-(IBAction)osc1FineIn:(id)sender;
-(IBAction)osc1SoftenIn:(id)sender;
-(IBAction)osc1WidthIn:(id)sender;
-(IBAction)osc1SyncIn:(id)sender;
-(IBAction)osc2FineIn:(id)sender;
-(IBAction)osc2SoftenIn:(id)sender;
-(IBAction)osc2WidthIn:(id)sender;
-(IBAction)osc2SyncIn:(id)sender;
-(IBAction)osc3FineIn:(id)sender;
-(IBAction)osc3SoftenIn:(id)sender;
-(IBAction)osc3WidthIn:(id)sender;
-(IBAction)osc3SyncIn:(id)sender;
-(IBAction)osc1MixIn:(id)sender;
-(IBAction)osc2MixIn:(id)sender;
-(IBAction)osc3MixIn:(id)sender;
-(IBAction)ring13MixIn:(id)sender;
-(IBAction)ring23MixIn:(id)sender;
-(IBAction)noiseMixIn:(id)sender;
-(IBAction)lfo1DelayIn:(id)sender;
-(IBAction)lfo1OffsetIn:(id)sender;
-(IBAction)lfo1SpeedIn:(id)sender;
-(IBAction)lfo2DelayIn:(id)sender;
-(IBAction)lfo2OffsetIn:(id)sender;
-(IBAction)lfo2SpeedIn:(id)sender;
-(IBAction)env3AttackIn:(id)sender;
-(IBAction)env3DecayIn:(id)sender;
-(IBAction)env3SustainIn:(id)sender;
-(IBAction)env3ReleaseIn:(id)sender;
-(IBAction)env3VelocityIn:(id)sender;
-(IBAction)env3DelayIn:(id)sender;
-(IBAction)env2AttackIn:(id)sender;
-(IBAction)env2DecayIn:(id)sender;
-(IBAction)env2SustainIn:(id)sender;
-(IBAction)env2ReleaseIn:(id)sender;
-(IBAction)env2VelocityIn:(id)sender;
-(IBAction)env2DelayIn:(id)sender;
-(IBAction)env1AttackIn:(id)sender;
-(IBAction)env1DecayIn:(id)sender;
-(IBAction)env1SustainIn:(id)sender;
-(IBAction)env1ReleaseIn:(id)sender;
-(IBAction)env1VelocityIn:(id)sender;
-(IBAction)noiseSoftenIn:(id)sender;
-(IBAction)filterOverdriveIn:(id)sender;
-(IBAction)filterFrequencyIn:(id)sender;
-(IBAction)filterTrackingIn:(id)sender;
-(IBAction)filterResonanceIn:(id)sender;
-(IBAction)arpSpeedIn:(id)sender;
-(IBAction)arpPatternIn:(id)sender;
-(IBAction)arpLatchIn:(id)sender;
-(IBAction)distortionSendIn:(id)sender;
-(IBAction)distortionWheelIn:(id)sender;
-(IBAction)panPositionIn:(id)sender;
-(IBAction)reverbSendIn:(id)sender;
-(IBAction)reverbWheelIn:(id)sender;
-(IBAction)reverbDecayIn:(id)sender;
-(IBAction)reverbHfDampIn:(id)sender;
-(IBAction)chorusSendIn:(id)sender;
-(IBAction)chorusWheelIn:(id)sender;
-(IBAction)chorusSpeedIn:(id)sender;
-(IBAction)chorusModDepthIn:(id)sender;
-(IBAction)chorusFeedbackIn:(id)sender;
-(IBAction)delaySendIn:(id)sender;
-(IBAction)delayWheelIn:(id)sender;
-(IBAction)delayTimeIn:(id)sender;
-(IBAction)delayFeedbackIn:(id)sender;
-(IBAction)delayHfDampIn:(id)sender;
-(IBAction)configMorphIn:(id)sender;
-(IBAction)osc1PitchEnv2In:(id)sender;
-(IBAction)osc1PitchEnv3In:(id)sender;
-(IBAction)osc1PitchLfo1In:(id)sender;
-(IBAction)osc1SoftenEnv2In:(id)sender;
-(IBAction)osc1WidthEnv2In:(id)sender;
-(IBAction)osc1WidthLfo1In:(id)sender;
-(IBAction)osc1WidthLfo2In:(id)sender;
-(IBAction)osc1SyncEnv2In:(id)sender;
-(IBAction)osc1SyncLfo1In:(id)sender;
-(IBAction)osc2PitchEnv2In:(id)sender;
-(IBAction)osc2PitchEnv3In:(id)sender;
-(IBAction)osc2PitchLfo1In:(id)sender;
-(IBAction)osc2SoftenEnv2In:(id)sender;
-(IBAction)osc2WidthEnv2In:(id)sender;
-(IBAction)osc2WidthLfo1In:(id)sender;
-(IBAction)osc2WidthLfo2In:(id)sender;
-(IBAction)osc2SyncEnv2In:(id)sender;
-(IBAction)osc2SyncLfo1In:(id)sender;
-(IBAction)osc3PitchEnv2In:(id)sender;
-(IBAction)osc3PitchEnv3In:(id)sender;
-(IBAction)osc3PitchLfo1In:(id)sender;
-(IBAction)osc3SoftenEnv2In:(id)sender;
-(IBAction)osc3WidthEnv2In:(id)sender;
-(IBAction)osc3WidthLfo1In:(id)sender;
-(IBAction)osc3WidthLfo2In:(id)sender;
-(IBAction)osc3SyncEnv2In:(id)sender;
-(IBAction)osc3SyncLfo1In:(id)sender;
-(IBAction)osc1MixEnv2In:(id)sender;
-(IBAction)osc2MixEnv2In:(id)sender;
-(IBAction)osc3MixEnv2In:(id)sender;
-(IBAction)filterFrequencyEnv2In:(id)sender;
-(IBAction)filterFrequencyEnv3In:(id)sender;
-(IBAction)filterFrequencyLfo1In:(id)sender;
-(IBAction)filterFrequencyLfo2In:(id)sender;
-(IBAction)filterResonanceEnv2In:(id)sender;
-(IBAction)filterResonanceEnv3In:(id)sender;
-(IBAction)filterResonanceLfo1In:(id)sender;
-(IBAction)filterResonanceLfo2In:(id)sender;
-(IBAction)lfo1Env3SpeedModIn:(id)sender;
-(IBAction)lfo2Env3SpeedModIn:(id)sender;
-(IBAction)noiseMixEnv2In:(id)sender;
-(IBAction)osc1PitchIn:(id)sender;
-(IBAction)osc2PitchIn:(id)sender;
-(IBAction)osc3PitchIn:(id)sender;
-(IBAction)osc1FormantWidthIn:(id)sender;
-(IBAction)osc2FormantWidthIn:(id)sender;
-(IBAction)osc3FormantWidthIn:(id)sender;
-(IBAction)osc1SyncKeyFollowIn:(id)sender;
-(IBAction)osc2SyncKeyFollowIn:(id)sender;
-(IBAction)osc3SyncKeyFollowIn:(id)sender;
-(IBAction)osc1SyncSkewIn:(id)sender;
-(IBAction)osc2SyncSkewIn:(id)sender;
-(IBAction)osc3SyncSkewIn:(id)sender;
-(IBAction)combFrequencyIn:(id)sender;
-(IBAction)combBoostIn:(id)sender;
-(IBAction)panDryLevelIn:(id)sender;
-(IBAction)panSpeedIn:(id)sender;
-(IBAction)panDepthIn:(id)sender;
-(IBAction)delayStereoWidthIn:(id)sender;
-(IBAction)vocoderBalanceIn:(id)sender;
-(IBAction)eqTrebleIn:(id)sender;
-(IBAction)eqBassIn:(id)sender;
-(IBAction)partSemiDetuneIn:(id)sender;
-(IBAction)partDetuneIn:(id)sender;
-(IBAction)partRangeHighIn:(id)sender;
-(IBAction)partRangeLowIn:(id)sender;
-(IBAction)masterTuneIn:(id)sender;
-(IBAction)breathControlRemapIn:(id)sender;
-(IBAction)arpTransposeMidiIn:(id)sender;
-(IBAction)arpTransposeRefIn:(id)sender;
-(IBAction)programMapEditLocIn:(id)sender;
-(IBAction)programMapProgramIn:(id)sender;
-(IBAction)arpUserPatternEditLocIn:(id)sender;
-(IBAction)arpUserPatternStepIn:(id)sender;
-(IBAction)arpUserPatternNoteIn:(id)sender;
-(IBAction)arpUserPatternVelIn:(id)sender;
-(IBAction)arpUserPatternStepsIn:(id)sender;
-(IBAction)filterQNormIn:(id)sender;
-(IBAction)osc1PitchLfo2In:(id)sender;
-(IBAction)osc1PitchWheelIn:(id)sender;
-(IBAction)osc1WidthEnv3In:(id)sender;
-(IBAction)osc1WidthWheelIn:(id)sender;
-(IBAction)osc1SyncEnv3In:(id)sender;
-(IBAction)osc1SyncLfo2In:(id)sender;
-(IBAction)osc1SyncWheelIn:(id)sender;
-(IBAction)osc1SoftenEnv3In:(id)sender;
-(IBAction)osc1SoftenLfo1In:(id)sender;
-(IBAction)osc1SoftenLfo2In:(id)sender;
-(IBAction)osc1SoftenWheelIn:(id)sender;
-(IBAction)osc1MixEnv3In:(id)sender;
-(IBAction)osc1MixLfo1In:(id)sender;
-(IBAction)osc1MixLfo2In:(id)sender;
-(IBAction)osc1MixWheelIn:(id)sender;
-(IBAction)osc2PitchLfo2In:(id)sender;
-(IBAction)osc2PitchWheelIn:(id)sender;
-(IBAction)osc2WidthEnv3In:(id)sender;
-(IBAction)osc2WidthWheelIn:(id)sender;
-(IBAction)osc2SyncEnv3In:(id)sender;
-(IBAction)osc2SyncLfo2In:(id)sender;
-(IBAction)osc2SyncWheelIn:(id)sender;
-(IBAction)osc2SoftenEnv3In:(id)sender;
-(IBAction)osc2SoftenLfo1In:(id)sender;
-(IBAction)osc2SoftenLfo2In:(id)sender;
-(IBAction)osc2SoftenWheelIn:(id)sender;
-(IBAction)osc2MixEnv3In:(id)sender;
-(IBAction)osc2MixLfo1In:(id)sender;
-(IBAction)osc2MixLfo2In:(id)sender;
-(IBAction)osc2MixWheelIn:(id)sender;
-(IBAction)osc3PitchLfo2In:(id)sender;
-(IBAction)osc3PitchWheelIn:(id)sender;
-(IBAction)osc3WidthEnv3In:(id)sender;
-(IBAction)osc3WidthWheelIn:(id)sender;
-(IBAction)osc3SyncEnv3In:(id)sender;
-(IBAction)osc3SyncLfo2In:(id)sender;
-(IBAction)osc3SyncWheelIn:(id)sender;
-(IBAction)osc3SoftenEnv3In:(id)sender;
-(IBAction)osc3SoftenLfo1In:(id)sender;
-(IBAction)osc3SoftenLfo2In:(id)sender;
-(IBAction)osc3SoftenWheelIn:(id)sender;
-(IBAction)osc3MixEnv3In:(id)sender;
-(IBAction)osc3MixLfo1In:(id)sender;
-(IBAction)osc3MixLfo2In:(id)sender;
-(IBAction)osc3MixWheelIn:(id)sender;
-(IBAction)ringMod13MixEnv2In:(id)sender;
-(IBAction)ringMod13MixEnv3In:(id)sender;
-(IBAction)ringMod13MixLfo1In:(id)sender;
-(IBAction)ringMod13MixLfo2In:(id)sender;
-(IBAction)ringMod13MixWheelIn:(id)sender;
-(IBAction)ringMod23MixEnv2In:(id)sender;
-(IBAction)ringMod23MixEnv3In:(id)sender;
-(IBAction)ringMod23MixLfo1In:(id)sender;
-(IBAction)ringMod23MixLfo2In:(id)sender;
-(IBAction)ringMod23MixWheelIn:(id)sender;
-(IBAction)noiseSoftenEnv2In:(id)sender;
-(IBAction)noiseSoftenEnv3In:(id)sender;
-(IBAction)noiseSoftenLfo1In:(id)sender;
-(IBAction)noiseSoftenLfo2In:(id)sender;
-(IBAction)noiseSoftenWheelIn:(id)sender;
-(IBAction)noiseMixEnv3In:(id)sender;
-(IBAction)noiseMixLfo1In:(id)sender;
-(IBAction)noiseMixLfo2In:(id)sender;
-(IBAction)noiseMixWheelIn:(id)sender;
-(IBAction)osc1WheelLfo1In:(id)sender;
-(IBAction)osc2WheelLfo1In:(id)sender;
-(IBAction)osc3WheelLfo1In:(id)sender;
-(IBAction)osc1AfterTouchLfo1In:(id)sender;
-(IBAction)osc2AfterTouchLfo1In:(id)sender;
-(IBAction)osc3AfterTouchLfo1In:(id)sender;
-(IBAction)lfo1AfterTouchSpeedModIn:(id)sender;
-(IBAction)lfo2AfterTouchSpeedModIn:(id)sender;
-(IBAction)filterFrequencyWheelIn:(id)sender;
-(IBAction)filterResonanceWheelIn:(id)sender;
-(IBAction)filterFrequencyWheelLfo2In:(id)sender;
-(IBAction)filterResonanceWheelLfo2In:(id)sender;
-(IBAction)filterFrequencyAfterTouchLfo2In:(id)sender;
-(IBAction)filterResonanceAfterTouchLfo2In:(id)sender;
-(IBAction)filterFrequencyAfterTouchIn:(id)sender;
-(IBAction)filterResonanceAfterTouchIn:(id)sender;
-(IBAction)lfo1WheelSpeedModIn:(id)sender;
-(IBAction)lfo2WheelSpeedModIn:(id)sender;
-(IBAction)env1WheelIn:(id)sender;
-(IBAction)env1AfterTouchIn:(id)sender;
-(IBAction)osc1WaveIn:(id)sender;
-(IBAction)osc2WaveIn:(id)sender;
-(IBAction)osc3WaveIn:(id)sender;
-(IBAction)osc1OctIn:(id)sender;
-(IBAction)osc2OctIn:(id)sender;
-(IBAction)osc3OctIn:(id)sender;
-(IBAction)portamentoTypeIn:(id)sender;
-(IBAction)lfo1DelayTriggerIn:(id)sender;
-(IBAction)lfo2DelayTriggerIn:(id)sender;
-(IBAction)filterDBIn:(id)sender;
-(IBAction)filterTypeIn:(id)sender;
-(IBAction)lfo1ShapeIn:(id)sender;
-(IBAction)lfo2ShapeIn:(id)sender;
-(IBAction)lfo1TriggerIn:(id)sender;
-(IBAction)lfo2TriggerIn:(id)sender;
-(IBAction)lfo1RangeIn:(id)sender;
-(IBAction)lfo2RangeIn:(id)sender;
-(IBAction)env1TriggerIn:(id)sender;
-(IBAction)env2TriggerIn:(id)sender;
-(IBAction)env3TriggerIn:(id)sender;
-(IBAction)glideIn:(id)sender;
-(IBAction)chorusTypeIn:(id)sender;
-(IBAction)panTypeIn:(id)sender;
-(IBAction)arpConstPitchIn:(id)sender;
-(IBAction)arpOnIn:(id)sender;
-(IBAction)arpKeyResetIn:(id)sender;
-(IBAction)arpPatternBankIn:(id)sender;
-(IBAction)arpLatchTypeIn:(id)sender;
-(IBAction)arpQuantizeIn:(id)sender;
-(IBAction)arpVelocityIn:(id)sender;
-(IBAction)arpMuteIn:(id)sender;
-(IBAction)arpRealTimeTransposeIn:(id)sender;
-(IBAction)arpUserPatternGateIn:(id)sender;
-(IBAction)partOutputIn:(id)sender;
-(IBAction)arpOutputIn:(id)sender;
-(IBAction)clockIn:(id)sender;
-(IBAction)programMapBankIn:(id)sender;
-(IBAction)arpFillinIn:(id)sender;
-(IBAction)partFxIn:(id)sender;
-(IBAction)partSustainModeIn:(id)sender;
-(IBAction)oscTriggerIn:(id)sender;
-(IBAction)polyphonyIn:(id)sender;
-(IBAction)sysexTxOptionIn:(id)sender;
-(IBAction)delaySyncIn:(id)sender;
-(IBAction)arpOctRangeIn:(id)sender;
-(IBAction)arpGateTimeIn:(id)sender;
-(IBAction)sysexRxIn:(id)sender;
-(IBAction)partVelCurveIn:(id)sender;
-(IBAction)delayRatioIn:(id)sender;
-(IBAction)globalMidiIn:(id)sender;
-(IBAction)partMidiIn:(id)sender;
-(IBAction)arpSyncIn:(id)sender;
-(IBAction)globalIncomingProgChangeIn:(id)sender;
-(IBAction)progMapBankIn:(id)sender;
-(IBAction)lfo1SyncIn:(id)sender;
-(IBAction)globalIncomingContChangeIn:(id)sender;
-(IBAction)partProgChangeFilterIn:(id)sender;
-(IBAction)arpOutputRangingIn:(id)sender;
-(IBAction)lfo2SyncIn:(id)sender;
-(IBAction)partControlChangeFiltIn:(id)sender;
-(IBAction)partPedalIn:(id)sender;
-(IBAction)partSustainIn:(id)sender;
-(IBAction)partPolyphonyIn:(id)sender;
-(IBAction)pedalModeIn:(id)sender;
-(IBAction)vocoderSibilanceTypeIn:(id)sender;
-(IBAction)vocoderInputIn:(id)sender;
-(IBAction)vocoderInsertIn:(id)sender;
-(IBAction)fxConfigIn:(id)sender;
-(IBAction)partMuteIn:(id)sender;
-(IBAction)fxSendIn:(id)sender;
-(IBAction)partSelectIn:(id)sender;
-(IBAction)arpEditIn:(id)sender;
-(IBAction)breathModeIn:(id)sender;
-(IBAction)phonesOutputIn:(id)sender;
-(IBAction)osc1SemiIn:(id)sender;
-(IBAction)osc2SemiIn:(id)sender;
-(IBAction)osc3SemiIn:(id)sender;
-(IBAction)breathSensIn:(id)sender;
-(IBAction)osc1PitchbendRangeIn:(id)sender;
-(IBAction)osc2PitchbendRangeIn:(id)sender;
-(IBAction)osc3PitchbendRangeIn:(id)sender;
-(IBAction)input1TrimIn:(id)sender;
-(IBAction)input2TrimIn:(id)sender;
-(IBAction)filterWidthIn:(id)sender;
-(IBAction)vocoderSibilanceLevelIn:(id)sender;
-(IBAction)vocoderWidthIn:(id)sender;

+(void)initialize;
-(void)initIBOutlets;
-(void)initGraphButtons;
-(void)initPitchText;
-(void)initAll;
//-(void)setAllUnlit;
-(IBAction)channelButtonsIn:(id)sender;
//-(IBAction)osc1FineTextIn:(id)sender;
-(IBAction)showEnv1Window:(id)sender;
-(IBAction)showEnv2Window:(id)sender;
-(IBAction)showEnv3Window:(id)sender;
-(IBAction)showLFO1Window:(id)sender;
-(IBAction)showLFO2Window:(id)sender;
-(IBAction)showOsc1Window:(id)sender;
-(IBAction)showOsc2Window:(id)sender;
-(IBAction)showOsc3Window:(id)sender;
-(IBAction)showFilterWindow:(id)sender;
-(IBAction)showMidiWindow:(id)sender;
-(IBAction)showLFO1ControlsWindow:(id)sender;
-(IBAction)showLFO2ControlsWindow:(id)sender;
-(IBAction)showEnv2ControlsWindow:(id)sender;
-(IBAction)showEnv3ControlsWindow:(id)sender;
-(IBAction)showWheelControlsWindow:(id)sender;
-(IBAction)showAfterTouchControlsWindow:(id)sender;
-(IBAction)showOsc1ControlledWindow:(id)sender;
-(IBAction)showOsc2ControlledWindow:(id)sender;
-(IBAction)showOsc3ControlledWindow:(id)sender;
-(IBAction)showNoiseControlledWindow:(id)sender;
-(IBAction)showRing13ControlledWindow:(id)sender;
-(IBAction)showRing23ControlledWindow:(id)sender;
-(IBAction)showFilterControlledWindow:(id)sender;

-(IBAction)sendMidi:(id)sender;
-(IBAction)requestProg:(id)sender;
-(void)sendMidiNoteOn;
-(void)sendMidiNoteOff;

-(void)nrpnIn:(id)progr number:(Byte)number value:(Byte)value;
-(void)ccIn:(id)progr number:(Byte)number value:(Byte)value;

-(IBAction)saveProgram:(id)sender;
-(IBAction)loadProgram:(id)sender;

//-(IBAction)refresh:(id)sender;



//-(id)getColour;
@end
