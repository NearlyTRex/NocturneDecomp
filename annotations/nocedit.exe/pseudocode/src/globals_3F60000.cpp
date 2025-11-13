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
HGLOBAL[8] g_WaveOutHeaderHandles = {};
LPWAVEHDR[8] g_WaveOutHeaders = {};
HGLOBAL[8] g_WaveOutBufferHandles = {};
LPVOID[8] g_WaveOutBuffers = {};
HGLOBAL[8] g_WaveInHeaderHandles = {};
LPWAVEHDR[8] g_WaveInHeaders = {};
LPVOID[8] DAT_03f6aec0 = {};
STrainNoise[10] STrainNoise_ARRAY_03f6b7bc = {};

