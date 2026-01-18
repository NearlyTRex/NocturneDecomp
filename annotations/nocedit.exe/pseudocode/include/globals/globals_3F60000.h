#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/dsound.h"
#include "system/mmsystem.h"
#include "system/windef.h"
#include "system/wingdi.h"
#include "system/winuser.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDirectSoundDevice.h"
#include "types/classes/CSfxOptions.h"
#include "types/classes/CSfxSample.h"
#include "types/classes/CSound.h"
#include "types/classes/CSpotView.h"
#include "types/classes/CStrList.h"
#include "types/classes/CTextureList.h"
#include "types/classes/CVector3d.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWavInDevice.h"
#include "types/classes/CWavOutDevice.h"
#include "types/structs/SDirectSoundDeviceInfo.h"
#include "types/structs/SRecordingDeviceInfo.h"
#include "types/structs/SSoundDeviceInfo.h"
#include "types/structs/STrainNoise.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3F60000
// =============================================================================

extern CSfxOptions g_SfxOptions[8];
extern CSfxSample g_SfxSamples[64];
extern CVector3d g_Cached3DListenerPos;
extern CVector3d g_Cached3DListenerVelocity;
extern CVector3d g_Cached3DListenerOrientFront;
extern CVector3d g_Cached3DListenerOrientUp;
extern CVector3d g_Cached3DListenerOrientRight;
extern int g_SfxChannelEnabled[32];
extern SSoundDeviceInfo g_SoundDevices[8];
extern void* g_ChannelPrimaryBuffers[8];
extern CVector3f g_DeferredOrientRight;
extern SRecordingDeviceInfo g_RecordingDevices[8];
extern SDirectSoundDeviceInfo g_DirectSoundDevices[8];
extern IDirectSoundBuffer* g_DirectSoundSampleBuffers[25];
extern IDirectSoundBuffer* g_DirectSoundHardwareSfxBuffers[31];
extern IDirectSound3DBuffer* g_DirectSound3DBufferInterfaces[31];
extern IDirectSoundBufferMetadata g_DirectSoundBufferMetadata[25];
extern CDirectSoundDevice g_CDirectSoundDeviceInstance;
extern HWAVEOUT g_WaveOutHandle;
extern HGLOBAL g_WaveOutHeaderHandles[8];
extern LPWAVEHDR g_WaveOutHeaders[8];
extern HGLOBAL g_WaveOutBufferHandles[8];
extern LPVOID g_WaveOutBuffers[8];
extern HWAVEIN g_WaveInHandle;
extern HGLOBAL g_WaveInHeaderHandles[20];
extern LPWAVEHDR g_WaveInHeaders[20];
extern HGLOBAL g_WaveInBufferHandles[20];
extern LPVOID g_WaveInBuffers[20];
extern CWavOutDevice g_CWavOutDeviceInstance;
extern CWavInDevice g_CWavInDeviceInstance;
extern CStrList g_MissingSoundsList;
extern CSound g_CSoundInstance;
extern CVector3f g_SoundListenerPrev;
extern CVector3f CVector3f_03f6af7c;
extern CVector3f g_SoundListenerOrient;
extern CStrList g_SoundFileList;
extern STrainNoise g_TrainNoiseArray[10];
extern CVector3f g_TrainVelocityVector;
extern HMODULE g_RendererDLLHandle;
extern HWND g_StoredWindowHandle;
extern CDemonActorType g_CSpikeClassInfo;
extern CSpotView g_CSpotViewInstance;
extern CDemonActorType g_CStairsClassInfo;
extern CDemonActorType g_CTempleStoneClassInfo;
extern CDemonActorType g_CStrangerClassInfo;
extern CDemonActorType g_CSuccubusClassInfo;
extern CDemonActorType g_CSvetlanaClassInfo;
extern CDemonActorType g_CBassPlayerClassInfo;
extern CDemonActorType g_CDrummerClassInfo;
extern CDemonActorType g_CTeleportDestClassInfo;
extern CDemonActorType g_CTeleportClassInfo;
extern CDemonActorType g_CTentacleClassInfo;
extern CTextureList g_CTextureListInstance;

