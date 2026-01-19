#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F60000
// =============================================================================

// CDemonActorType
CDemonActorType g_CSpikeClassInfo = {};
CDemonActorType g_CStairsClassInfo = {};
CDemonActorType g_CTempleStoneClassInfo = {};
CDemonActorType g_CStrangerClassInfo = {};
CDemonActorType g_CSuccubusClassInfo = {};
CDemonActorType g_CSvetlanaClassInfo = {};
CDemonActorType g_CBassPlayerClassInfo = {};
CDemonActorType g_CDrummerClassInfo = {};
CDemonActorType g_CTeleportDestClassInfo = {};
CDemonActorType g_CTeleportClassInfo = {};
CDemonActorType g_CTentacleClassInfo = {};

// CDirectSoundDevice
CDirectSoundDevice g_CDirectSoundDeviceInstance = {};

// CSfxOptions[8]
CSfxOptions g_SfxOptions[8] = {};

// CSfxSample[64]
CSfxSample g_SfxSamples[64] = {};

// CSound
CSound g_CSoundInstance = {};

// CSpotView
CSpotView g_CSpotViewInstance = {};

// CStrList
CStrList g_MissingSoundsList = {};
CStrList g_SoundFileList = {};

// CTextureList
CTextureList g_CTextureListInstance = {};

// CVector3d
CVector3d g_Cached3DListenerPos = {};
CVector3d g_Cached3DListenerVelocity = {};
CVector3d g_Cached3DListenerOrientFront = {};
CVector3d g_Cached3DListenerOrientUp = {};
CVector3d g_Cached3DListenerOrientRight = {};

// CVector3f
CVector3f g_DeferredOrientRight = {};
CVector3f g_SoundListenerPrev = {};
CVector3f CVector3f_03f6af7c = {};
CVector3f g_SoundListenerOrient = {};
CVector3f g_TrainVelocityVector = {};

// CWavInDevice
CWavInDevice g_CWavInDeviceInstance = {};

// CWavOutDevice
CWavOutDevice g_CWavOutDeviceInstance = {};

// HGLOBAL[20]
HGLOBAL g_WaveInHeaderHandles[20] = {};
HGLOBAL g_WaveInBufferHandles[20] = {};

// HGLOBAL[8]
HGLOBAL g_WaveOutHeaderHandles[8] = {};
HGLOBAL g_WaveOutBufferHandles[8] = {};

// HMODULE
HMODULE g_RendererDLLHandle = {};

// HWAVEIN
HWAVEIN g_WaveInHandle = {};

// HWAVEOUT
HWAVEOUT g_WaveOutHandle = {};

// HWND
HWND g_StoredWindowHandle = {};

// IDirectSound3DBuffer*[31]
IDirectSound3DBuffer* g_DirectSound3DBufferInterfaces[31] = {};

// IDirectSoundBuffer*[25]
IDirectSoundBuffer* g_DirectSoundSampleBuffers[25] = {};

// IDirectSoundBuffer*[31]
IDirectSoundBuffer* g_DirectSoundHardwareSfxBuffers[31] = {};

// IDirectSoundBufferMetadata[25]
IDirectSoundBufferMetadata g_DirectSoundBufferMetadata[25] = {};

// LPVOID[20]
LPVOID g_WaveInBuffers[20] = {};

// LPVOID[8]
LPVOID g_WaveOutBuffers[8] = {};

// LPWAVEHDR[20]
LPWAVEHDR g_WaveInHeaders[20] = {};

// LPWAVEHDR[8]
LPWAVEHDR g_WaveOutHeaders[8] = {};

// SDirectSoundDeviceInfo[8]
SDirectSoundDeviceInfo g_DirectSoundDevices[8] = {};

// SRecordingDeviceInfo[8]
SRecordingDeviceInfo g_RecordingDevices[8] = {};

// SSoundDeviceInfo[8]
SSoundDeviceInfo g_SoundDevices[8] = {};

// STrainNoise[10]
STrainNoise g_TrainNoiseArray[10] = {};

// char[40]
char g_SoundAmbientSoundName[40] = {};

// char[40][40]
char g_SoundMatchedFilenames[40][40] = {};

// double[8]
double g_VirtualSpeakerXPositions[8] = {};
double g_VirtualSpeakerYPositions[8] = {};
double g_VirtualSpeakerZPositions[8] = {};

// float*[8]
float* g_ChannelTertiaryBuffers[8] = {};
float* g_ChannelSecondaryBuffersA[8] = {};
float* g_ChannelSecondaryBuffersB[8] = {};

// float[32]
float g_SfxChannelVolumes[32] = {};

// int[32]
int g_SfxChannelEnabled[32] = {};

// void*[8]
void* g_ChannelPrimaryBuffers[8] = {};

