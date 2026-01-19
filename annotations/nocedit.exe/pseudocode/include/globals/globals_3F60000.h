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

// CDemonActorType
extern CDemonActorType g_CSpikeClassInfo;
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

// CDirectSoundDevice
extern CDirectSoundDevice g_CDirectSoundDeviceInstance;

// CSfxOptions[8]
extern CSfxOptions g_SfxOptions[8];

// CSfxSample[64]
extern CSfxSample g_SfxSamples[64];

// CSound
extern CSound g_CSoundInstance;

// CSpotView
extern CSpotView g_CSpotViewInstance;

// CStrList
extern CStrList g_MissingSoundsList;
extern CStrList g_SoundFileList;

// CTextureList
extern CTextureList g_CTextureListInstance;

// CVector3d
extern CVector3d g_Cached3DListenerPos;
extern CVector3d g_Cached3DListenerVelocity;
extern CVector3d g_Cached3DListenerOrientFront;
extern CVector3d g_Cached3DListenerOrientUp;
extern CVector3d g_Cached3DListenerOrientRight;

// CVector3f
extern CVector3f g_DeferredOrientRight;
extern CVector3f g_SoundListenerPrev;
extern CVector3f CVector3f_03f6af7c;
extern CVector3f g_SoundListenerOrient;
extern CVector3f g_TrainVelocityVector;

// CWavInDevice
extern CWavInDevice g_CWavInDeviceInstance;

// CWavOutDevice
extern CWavOutDevice g_CWavOutDeviceInstance;

// HGLOBAL[20]
extern HGLOBAL g_WaveInHeaderHandles[20];
extern HGLOBAL g_WaveInBufferHandles[20];

// HGLOBAL[8]
extern HGLOBAL g_WaveOutHeaderHandles[8];
extern HGLOBAL g_WaveOutBufferHandles[8];

// HMODULE
extern HMODULE g_RendererDLLHandle;

// HWAVEIN
extern HWAVEIN g_WaveInHandle;

// HWAVEOUT
extern HWAVEOUT g_WaveOutHandle;

// HWND
extern HWND g_StoredWindowHandle;

// IDirectSound3DBuffer*[31]
extern IDirectSound3DBuffer* g_DirectSound3DBufferInterfaces[31];

// IDirectSoundBuffer*[25]
extern IDirectSoundBuffer* g_DirectSoundSampleBuffers[25];

// IDirectSoundBuffer*[31]
extern IDirectSoundBuffer* g_DirectSoundHardwareSfxBuffers[31];

// IDirectSoundBufferMetadata[25]
extern IDirectSoundBufferMetadata g_DirectSoundBufferMetadata[25];

// LPVOID[20]
extern LPVOID g_WaveInBuffers[20];

// LPVOID[8]
extern LPVOID g_WaveOutBuffers[8];

// LPWAVEHDR[20]
extern LPWAVEHDR g_WaveInHeaders[20];

// LPWAVEHDR[8]
extern LPWAVEHDR g_WaveOutHeaders[8];

// SDirectSoundDeviceInfo[8]
extern SDirectSoundDeviceInfo g_DirectSoundDevices[8];

// SRecordingDeviceInfo[8]
extern SRecordingDeviceInfo g_RecordingDevices[8];

// SSoundDeviceInfo[8]
extern SSoundDeviceInfo g_SoundDevices[8];

// STrainNoise[10]
extern STrainNoise g_TrainNoiseArray[10];

// char[40]
extern char g_SoundAmbientSoundName[40];

// char[40][40]
extern char g_SoundMatchedFilenames[40][40];

// double[8]
extern double g_VirtualSpeakerXPositions[8];
extern double g_VirtualSpeakerYPositions[8];
extern double g_VirtualSpeakerZPositions[8];

// float*[8]
extern float* g_ChannelTertiaryBuffers[8];
extern float* g_ChannelSecondaryBuffersA[8];
extern float* g_ChannelSecondaryBuffersB[8];

// float[32]
extern float g_SfxChannelVolumes[32];

// int[32]
extern int g_SfxChannelEnabled[32];

// void*[8]
extern void* g_ChannelPrimaryBuffers[8];

