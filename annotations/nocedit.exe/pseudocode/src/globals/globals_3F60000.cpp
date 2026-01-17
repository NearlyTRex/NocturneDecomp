#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F60000
// =============================================================================

CSfxOptions g_SfxOptions[8] = {};
CSfxSample g_SfxSamples[64] = {};
int g_SfxChannelEnabled[32] = {};
SSoundDeviceInfo g_SoundDevices[8] = {};
void* g_ChannelPrimaryBuffers[8] = {};
SRecordingDeviceInfo g_RecordingDevices[8] = {};
SDirectSoundDeviceInfo g_DirectSoundDevices[8] = {};
IDirectSoundBuffer* g_DirectSoundSampleBuffers[25] = {};
IDirectSoundBuffer* g_DirectSoundHardwareSfxBuffers[31] = {};
IDirectSound3DBuffer* g_DirectSound3DBufferInterfaces[31] = {};
IDirectSoundBufferMetadata g_DirectSoundBufferMetadata[25] = {};
HGLOBAL g_WaveOutHeaderHandles[8] = {};
LPWAVEHDR g_WaveOutHeaders[8] = {};
HGLOBAL g_WaveOutBufferHandles[8] = {};
LPVOID g_WaveOutBuffers[8] = {};
HGLOBAL g_WaveInHeaderHandles[20] = {};
LPWAVEHDR g_WaveInHeaders[20] = {};
HGLOBAL g_WaveInBufferHandles[20] = {};
LPVOID g_WaveInBuffers[20] = {};
STrainNoise g_TrainNoiseArray[10] = {};

