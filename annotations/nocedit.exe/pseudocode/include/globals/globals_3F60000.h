#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/dsound.h"
#include "system/mmsystem.h"
#include "system/windef.h"
#include "system/wingdi.h"
#include "types/classes/CSfxOptions.h"
#include "types/classes/CSfxSample.h"
#include "types/structs/SDirectSoundDeviceInfo.h"
#include "types/structs/SRecordingDeviceInfo.h"
#include "types/structs/SSoundDeviceInfo.h"
#include "types/structs/STrainNoise.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3F60000
// =============================================================================

extern CSfxOptions g_SfxOptions[8];
extern CSfxSample g_SfxSamples[64];
extern int g_SfxChannelEnabled[32];
extern SSoundDeviceInfo g_SoundDevices[8];
extern void* g_ChannelPrimaryBuffers[8];
extern SRecordingDeviceInfo g_RecordingDevices[8];
extern SDirectSoundDeviceInfo g_DirectSoundDevices[8];
extern IDirectSoundBuffer* g_DirectSoundSampleBuffers[25];
extern IDirectSoundBuffer* g_DirectSoundHardwareSfxBuffers[31];
extern IDirectSound3DBuffer* g_DirectSound3DBufferInterfaces[31];
extern IDirectSoundBufferMetadata g_DirectSoundBufferMetadata[25];
extern HGLOBAL g_WaveOutHeaderHandles[8];
extern LPWAVEHDR g_WaveOutHeaders[8];
extern HGLOBAL g_WaveOutBufferHandles[8];
extern LPVOID g_WaveOutBuffers[8];
extern HGLOBAL g_WaveInHeaderHandles[20];
extern LPWAVEHDR g_WaveInHeaders[20];
extern HGLOBAL g_WaveInBufferHandles[20];
extern LPVOID g_WaveInBuffers[20];
extern STrainNoise g_TrainNoiseArray[10];

