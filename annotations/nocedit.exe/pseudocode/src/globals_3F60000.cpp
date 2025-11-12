#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F60000
// =============================================================================

CSfxOptions[8] g_SfxOptions = {};
CSfxSample[64] g_SfxSamples = {};
SSoundDeviceInfo[8] g_SoundDevices = {};
void*[8] g_ChannelTertiaryBuffers = {};
void*[8] g_ChannelPrimaryBuffers = {};
void*[8] g_ChannelSecondaryBuffersA = {};
void*[8] g_ChannelSecondaryBuffersB = {};
SRecordingDeviceInfo[8] g_RecordingDevices = {};
SDirectSoundDeviceInfo[8] g_DirectSoundDevices = {};
IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers = {};
int[31] g_DirectSoundBufferInUse = {};
IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata = {};
STrainNoise[10] STrainNoise_ARRAY_03f6b7bc = {};

