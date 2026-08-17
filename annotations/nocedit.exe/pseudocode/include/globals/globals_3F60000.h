#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/dsound.h"
#include "system/ksproxy.h"
#include "system/mmsystem.h"
#include "system/windef.h"
#include "system/winnt.h"
#include "system/winuser.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDirectSoundDevice.h"
#include "types/classes/CLever.h"
#include "types/classes/CSfxOptions.h"
#include "types/classes/CSfxSample.h"
#include "types/classes/CSound.h"
#include "types/classes/CSoundDevice.h"
#include "types/classes/CSpotView.h"
#include "types/classes/CStrList.h"
#include "types/classes/CTextureList.h"
#include "types/classes/CVector3d.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWavInDevice.h"
#include "types/classes/CWavOutDevice.h"
#include "types/funcdefs/APIDLL_add3dLine.h"
#include "types/funcdefs/APIDLL_addParticle.h"
#include "types/funcdefs/APIDLL_beginScene.h"
#include "types/funcdefs/APIDLL_buildCardList.h"
#include "types/funcdefs/APIDLL_clear.h"
#include "types/funcdefs/APIDLL_clearZBox.h"
#include "types/funcdefs/APIDLL_clearZBuffer.h"
#include "types/funcdefs/APIDLL_drawPolyList.h"
#include "types/funcdefs/APIDLL_drawPolyList2.h"
#include "types/funcdefs/APIDLL_drawPolyList3.h"
#include "types/funcdefs/APIDLL_drawPolygon.h"
#include "types/funcdefs/APIDLL_drawPolygon2.h"
#include "types/funcdefs/APIDLL_endScene.h"
#include "types/funcdefs/APIDLL_flushLineList.h"
#include "types/funcdefs/APIDLL_flushParticleList.h"
#include "types/funcdefs/APIDLL_getDisplayContext.h"
#include "types/funcdefs/APIDLL_getTextureInfo.h"
#include "types/funcdefs/APIDLL_getVideoMemory.h"
#include "types/funcdefs/APIDLL_init.h"
#include "types/funcdefs/APIDLL_kill.h"
#include "types/funcdefs/APIDLL_lockFrame.h"
#include "types/funcdefs/APIDLL_lockFrameX.h"
#include "types/funcdefs/APIDLL_lockHoldBuffer.h"
#include "types/funcdefs/APIDLL_lockTexture.h"
#include "types/funcdefs/APIDLL_masterZBuffer.h"
#include "types/funcdefs/APIDLL_releaseDisplayContext.h"
#include "types/funcdefs/APIDLL_restoreVideoMode.h"
#include "types/funcdefs/APIDLL_restoreVideoModeX.h"
#include "types/funcdefs/APIDLL_restoreZBuffer.h"
#include "types/funcdefs/APIDLL_selectCard.h"
#include "types/funcdefs/APIDLL_selectTexture.h"
#include "types/funcdefs/APIDLL_selectTextureBGRA.h"
#include "types/funcdefs/APIDLL_setColorTable16.h"
#include "types/funcdefs/APIDLL_setFogColor.h"
#include "types/funcdefs/APIDLL_setMipMapLevel.h"
#include "types/funcdefs/APIDLL_setVideoMode.h"
#include "types/funcdefs/APIDLL_setVideoMode2.h"
#include "types/funcdefs/APIDLL_setVideoModeX.h"
#include "types/funcdefs/APIDLL_sync.h"
#include "types/funcdefs/APIDLL_toggle.h"
#include "types/funcdefs/APIDLL_toggleX.h"
#include "types/funcdefs/APIDLL_unknown.h"
#include "types/funcdefs/APIDLL_unlockFrame.h"
#include "types/funcdefs/APIDLL_unlockFrameX.h"
#include "types/funcdefs/APIDLL_unlockHoldBuffer.h"
#include "types/funcdefs/APIDLL_unlockTexture.h"
#include "types/funcdefs/APIDLL_updateTexture.h"
#include "types/funcdefs/APIDLL_updateTextureBGRA.h"
#include "types/structs/SDirectSoundDeviceInfo.h"
#include "types/structs/SRecordingDeviceInfo.h"
#include "types/structs/SSoundDeviceInfo.h"
#include "types/structs/STrainNoise.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3F60000
// =============================================================================

// APIDLL_add3dLine*
extern APIDLL_add3dLine* g_APIDLL_add3dLine;

// APIDLL_addParticle*
extern APIDLL_addParticle* g_APIDLL_addParticle;

// APIDLL_beginScene*
extern APIDLL_beginScene* g_APIDLL_beginScene;

// APIDLL_buildCardList*
extern APIDLL_buildCardList* g_APIDLL_buildCardList;

// APIDLL_clear*
extern APIDLL_clear* g_APIDLL_clear;

// APIDLL_clearZBox*
extern APIDLL_clearZBox* g_APIDLL_clearZBox;

// APIDLL_clearZBuffer*
extern APIDLL_clearZBuffer* g_APIDLL_clearZBuffer;

// APIDLL_drawPolyList*
extern APIDLL_drawPolyList* g_APIDLL_drawPolyList;

// APIDLL_drawPolyList2*
extern APIDLL_drawPolyList2* g_APIDLL_drawPolyList2;

// APIDLL_drawPolyList3*
extern APIDLL_drawPolyList3* g_APIDLL_drawPolyList3;

// APIDLL_drawPolygon*
extern APIDLL_drawPolygon* g_APIDLL_drawPolygon;

// APIDLL_drawPolygon2*
extern APIDLL_drawPolygon2* g_APIDLL_drawPolygon2;

// APIDLL_endScene*
extern APIDLL_endScene* g_APIDLL_endScene;

// APIDLL_flushLineList*
extern APIDLL_flushLineList* g_APIDLL_flushLineList;

// APIDLL_flushParticleList*
extern APIDLL_flushParticleList* g_APIDLL_flushParticleList;

// APIDLL_getDisplayContext*
extern APIDLL_getDisplayContext* g_APIDLL_getDisplayContext;

// APIDLL_getTextureInfo*
extern APIDLL_getTextureInfo* g_APIDLL_getTextureInfo;

// APIDLL_getVideoMemory*
extern APIDLL_getVideoMemory* g_APIDLL_getVideoMemory;

// APIDLL_init*
extern APIDLL_init* g_APIDLL_init;

// APIDLL_kill*
extern APIDLL_kill* g_APIDLL_kill;

// APIDLL_lockFrame*
extern APIDLL_lockFrame* g_APIDLL_lockFrame;

// APIDLL_lockFrameX*
extern APIDLL_lockFrameX* g_APIDLL_lockFrameX;

// APIDLL_lockHoldBuffer*
extern APIDLL_lockHoldBuffer* g_APIDLL_lockHoldBuffer;

// APIDLL_lockTexture*
extern APIDLL_lockTexture* g_APIDLL_lockTexture;

// APIDLL_masterZBuffer*
extern APIDLL_masterZBuffer* g_APIDLL_masterZBuffer;

// APIDLL_releaseDisplayContext*
extern APIDLL_releaseDisplayContext* g_APIDLL_releaseDisplayContext;

// APIDLL_restoreVideoMode*
extern APIDLL_restoreVideoMode* g_APIDLL_restoreVideoMode;

// APIDLL_restoreVideoModeX*
extern APIDLL_restoreVideoModeX* g_APIDLL_restoreVideoModeX;

// APIDLL_restoreZBuffer*
extern APIDLL_restoreZBuffer* g_APIDLL_restoreZBuffer;

// APIDLL_selectCard*
extern APIDLL_selectCard* g_APIDLL_selectCard;

// APIDLL_selectTexture*
extern APIDLL_selectTexture* g_APIDLL_selectTexture;

// APIDLL_selectTextureBGRA*
extern APIDLL_selectTextureBGRA* g_APIDLL_selectTextureBGRA;

// APIDLL_setColorTable16*
extern APIDLL_setColorTable16* g_APIDLL_setColorTable16;

// APIDLL_setFogColor*
extern APIDLL_setFogColor* g_APIDLL_setFogColor;

// APIDLL_setMipMapLevel*
extern APIDLL_setMipMapLevel* g_APIDLL_setMipMapLevel;

// APIDLL_setVideoMode*
extern APIDLL_setVideoMode* g_APIDLL_setVideoMode;

// APIDLL_setVideoMode2*
extern APIDLL_setVideoMode2* g_APIDLL_setVideoMode2;

// APIDLL_setVideoModeX*
extern APIDLL_setVideoModeX* g_APIDLL_setVideoModeX;

// APIDLL_sync*
extern APIDLL_sync* g_APIDLL_sync;

// APIDLL_toggle*
extern APIDLL_toggle* g_APIDLL_toggle;

// APIDLL_toggleX*
extern APIDLL_toggleX* g_APIDLL_toggleX;

// APIDLL_unknown*
extern APIDLL_unknown* g_APIDLL_setViewport;
extern APIDLL_unknown* g_APIDLL_setLightConstants;
extern APIDLL_unknown* g_APIDLL_setLightVector;
extern APIDLL_unknown* g_APIDLL_setAmbientLight;
extern APIDLL_unknown* g_APIDLL_setTransform;
extern APIDLL_unknown* g_APIDLL_polyList;
extern APIDLL_unknown* g_APIDLL_getTextureHandle;
extern APIDLL_unknown* g_APIDLL_selectTextureByHandle;
extern APIDLL_unknown* g_APIDLL_enableCulling;
extern APIDLL_unknown* g_APIDLL_enableClipping;
extern APIDLL_unknown* g_APIDLL_setTextureClamp;
extern APIDLL_unknown* g_APIDLL_setFog;

// APIDLL_unlockFrame*
extern APIDLL_unlockFrame* g_APIDLL_unlockFrame;

// APIDLL_unlockFrameX*
extern APIDLL_unlockFrameX* g_APIDLL_unlockFrameX;

// APIDLL_unlockHoldBuffer*
extern APIDLL_unlockHoldBuffer* g_APIDLL_unlockHoldBuffer;

// APIDLL_unlockTexture*
extern APIDLL_unlockTexture* g_APIDLL_unlockTexture;

// APIDLL_updateTexture*
extern APIDLL_updateTexture* g_APIDLL_updateTexture;

// APIDLL_updateTextureBGRA*
extern APIDLL_updateTextureBGRA* g_APIDLL_updateTextureBGRA;

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

// CLever*
extern CLever* g_StrangerLeverHandle;

// CSfxOptions[8]
extern CSfxOptions g_SfxOptions[8];

// CSfxSample*
extern CSfxSample* g_SfxSamplesEnd;

// CSfxSample[64]
extern CSfxSample g_SfxSamples[64];

// CSound
extern CSound g_CSoundInstance;

// CSoundDevice*
extern CSoundDevice* g_CSoundDevicePtr;
extern CSoundDevice* g_RecordingDeviceInterface;

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
extern CVector3f CVector3f_03f6ba9c;
extern CVector3f CVector3f_03f6bab0;
extern CVector3f CVector3f_03f6babc;

// CWavInDevice
extern CWavInDevice g_CWavInDeviceInstance;

// CWavOutDevice
extern CWavOutDevice g_CWavOutDeviceInstance;

// HANDLE
extern HANDLE g_SoundMutex;

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

// IDirectSound*
extern IDirectSound* g_DirectSound;

// IDirectSound3DBuffer*[31]
extern IDirectSound3DBuffer* g_DirectSound3DBufferInterfaces[31];

// IDirectSound3DListener*
extern IDirectSound3DListener* g_DirectSound3DListener;

// IDirectSoundBuffer*
extern IDirectSoundBuffer* g_DirectSoundPrimaryBuffer;
extern IDirectSoundBuffer* g_DirectSoundSecondaryBuffer;

// IDirectSoundBuffer*[25]
extern IDirectSoundBuffer* g_DirectSoundSampleBuffers[25];

// IDirectSoundBuffer*[31]
extern IDirectSoundBuffer* g_DirectSoundHardwareSfxBuffers[31];

// IDirectSoundBufferMetadata[25]
extern IDirectSoundBufferMetadata g_DirectSoundBufferMetadata[25];

// IKsPropertySet*
extern IKsPropertySet* g_DirectSoundPropertySet;

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

// byte
extern byte BYTE_03f6baac;

// char[40]
extern char g_SoundAmbientSoundName[40];

// char[40][40]
extern char g_SoundMatchedFilenames[40][40];

// char[50][80]
extern char g_TriListTextureNames[50][80];

// double
extern double g_AudioLatencySeconds;

// double[8]
extern double g_VirtualSpeakerXPositions[8];
extern double g_VirtualSpeakerYPositions[8];
extern double g_VirtualSpeakerZPositions[8];

// float
extern float g_CurrentVolumeMultiplier;
extern float g_TargetVolumeMultiplier;
extern float g_VolumeFadeTimeRemaining;
extern float g_TrainNoiseCooldown;
extern float FLOAT_03f6ba1c;
extern float FLOAT_03f6ba20;

// float*
extern float* g_TertiaryMixBuffer;
extern float* g_PrimaryMixBuffer;
extern float* g_SecondaryMixBuffer;

// float*[8]
extern float* g_ChannelTertiaryBuffers[8];
extern float* g_ChannelPrimaryBuffers[8];
extern float* g_ChannelSecondaryBuffersA[8];
extern float* g_ChannelSecondaryBuffersB[8];

// float[32]
extern float g_SfxChannelVolumes[32];

// int
extern int g_SfxLastSlot;
extern int g_LastSampleAccessIndex;
extern int g_SoundBusyFlag;
extern int g_HasHardware3DSound;
extern int g_SoundEnabled;
extern int g_MixBufferReadIndex;
extern int g_MixBufferWriteIndex;
extern int g_MixBufferSize;
extern int g_NumMixBuffers;
extern int g_MixBufferCount;
extern int g_AudioThreadRunning;
extern int g_AudioThreadShutdownFlag;
extern int g_SoundLockCount;
extern int g_SoundStartTime;
extern int isRecordingStarted;
extern int g_RecordingSamplesSigned;
extern int g_StreamBitsPerSample;
extern int g_StreamSampleRate;
extern int g_StreamChannelCount;
extern int g_StreamSamplesPerBlock;
extern int g_StreamBlockSizeBytes;
extern int g_StreamBlockCount;
extern int g_StreamCurrentBlock;
extern int g_WaveOutBitsPerSample;
extern int g_WaveOutChannels;
extern int g_WaveOutSampleRate;
extern int g_WaveOutBufferSize;
extern int g_WaveOutNumBuffers;
extern int g_WaveInBitsPerSample;
extern int g_WaveInChannels;
extern int g_WaveInSampleRate;
extern int g_WaveInIs8Bit;
extern int g_WaveInBufferSizeSamples;
extern int g_WaveInNumBuffers;
extern int g_WaveInRequestedBitsPerSample;
extern int g_WaveInRequestedChannels;
extern int g_WaveInRequestedSampleRate;
extern int g_WaveInStereoRequested;
extern int g_WaveInCurrentBufferIndex;
extern int g_WaveInCurrentSampleOffset;
extern int g_SoundMatchCount;
extern int g_SoundAmbientSfxHandle;
extern int g_SoundAudioInitialized;
extern int g_TrainLastCameraIndex;
extern int g_UseDirect3D;
extern int g_RendererCardIndex;
extern int g_AGPTextureMode;
extern int g_FrameBufferTestResult;
extern int g_LoadedExternalDLLRenderer;
extern int g_FogColorRed;
extern int g_FogColorGreen;
extern int g_FogColorBlue;
extern int g_ExternalBitsPerPixel;
extern int g_DLLFunctionsMissing;
extern int g_SavedBitsPerPixel;
extern int g_ExternalFrameLocked;
extern int g_VideoModeXBPP;
extern int g_LogInitialized;
extern int INT_03f6bbe4;
extern int g_TriListTextureCount;

// int[13]
extern int g_SuccubusIndices[13];

// int[19]
extern int g_SvetlanaBoneIndices[19];

// int[23]
extern int g_StrangerIndices[23];

// int[32]
extern int g_SfxChannelEnabled[32];

// int[4]
extern int g_TentacleIndices[4];

// uchar
extern uchar g_MissingSoundsInitFlag;

// uint
extern uint g_WindSoundHandle;
extern uint g_WaterSoundHandle;
extern uint g_TrainRailNoiseHandle;
extern uint g_TrainExteriorAmbientHandle;

// void*
extern void* g_FrameBufferPtr;

