#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F60000
// =============================================================================

CSfxOptions[8] g_SfxOptions = {};
CSfxSample[64] g_SfxSamples = {};
int[32] g_SfxChannelEnabled = {};
SSoundDeviceInfo[8] g_SoundDevices = {};
void*[8] g_ChannelPrimaryBuffers = {};
SRecordingDeviceInfo[8] g_RecordingDevices = {};
SDirectSoundDeviceInfo[8] g_DirectSoundDevices = {};
IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers = {};
IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers = {};
IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces = {};
IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata = {};
HGLOBAL[8] g_WaveOutHeaderHandles = {};
LPWAVEHDR[8] g_WaveOutHeaders = {};
HGLOBAL[8] g_WaveOutBufferHandles = {};
LPVOID[8] g_WaveOutBuffers = {};
HGLOBAL[20] g_WaveInHeaderHandles = {};
LPWAVEHDR[20] g_WaveInHeaders = {};
HGLOBAL[20] g_WaveInBufferHandles = {};
LPVOID[20] g_WaveInBuffers = {};
STrainNoise[10] STrainNoise_ARRAY_03f6b7bc = {};

