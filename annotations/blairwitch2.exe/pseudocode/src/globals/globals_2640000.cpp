#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2640000
// =============================================================================

// CDemonActorType
CDemonActorType g_CSpikeClassInfo = {};
CDemonActorType g_CStairsClassInfo = {};
CDemonActorType g_CTempleStoneClassInfo = {};
CDemonActorType g_CStrangerClassInfo = {};
CDemonActorType g_CSuccubusClassInfo = {};
CDemonActorType g_CSvetlanaClassInfo = {};
CDemonActorType g_CBassPlayerClassInfo = {};
CDemonActorType g_CDemonActorType_0264bffc = {};
CDemonActorType g_CTeleportDestClassInfo = {};
CDemonActorType g_CDemonActorType_0264c074 = {};
CDemonActorType g_CTentacleClassInfo = {};

// CDirectSoundDevice
CDirectSoundDevice g_CDirectSoundDeviceInstance = {};

// CLever*
CLever* g_CLever_PTR_0264be0c = {};

// CSfxOptions[8]
CSfxOptions g_CSfxOptions_ARRAY_02641620[8] = {};

// CSfxSample[64]
CSfxSample g_SfxSamples[64] = {};

// CSound
CSound g_CSoundInstance = {};

// CSoundDevice*
CSoundDevice* g_CSoundDevicePtr = {};
CSoundDevice* g_RecordingDeviceInterface = {};

// CSpotView
CSpotView g_CSpotView_0264bd44 = {};

// CStrList
CStrList g_CStrListInstance = {};

// CTextureList
CTextureList g_CTextureListInstance = {};

// CVector3d
CVector3d g_CVector3d_02648458 = {};

// CVector3f
CVector3f g_CVector3f_0264bb84 = {};
CVector3f g_CVector3f_0264be00 = {};
CVector3f g_StrangerWeaponEulerPlusX = {};
CVector3f g_StrangerWeaponEulerMinusX = {};

// CWavInDevice
CWavInDevice g_CWavInDeviceInstance = {};

// CWavOutDevice
CWavOutDevice g_CWavOutDeviceInstance = {};

// HANDLE
HANDLE g_SoundMutex = {};

// HGLOBAL[20]
HGLOBAL g_WaveInHeaderHandles[20] = {};
HGLOBAL g_WaveInBufferHandles[20] = {};

// HGLOBAL[8]
HGLOBAL g_WaveOutHeaderHandles[8] = {};
HGLOBAL g_WaveOutBufferHandles[8] = {};

// HMODULE
HMODULE g_RendererDLLHandle = {};

// HWND
HWND g_StoredWindowHandle = {};

// IDirectSound*
IDirectSound* g_DirectSound = {};

// IDirectSound3DListener*
IDirectSound3DListener* g_DirectSound3DListener = {};

// IDirectSoundBuffer*
IDirectSoundBuffer* g_DirectSoundPrimaryBuffer = {};
IDirectSoundBuffer* g_DirectSoundSecondaryBuffer = {};

// IDirectSoundBuffer*[25]
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4[25] = {};

// IDirectSoundBuffer*[31]
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[31] = {};

// IKsPropertySet*
IKsPropertySet* g_DirectSoundPropertySet = {};

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

// SReverbSettings
SReverbSettings g_CachedReverb = {};
SReverbSettings g_SoundReverb = {};

// SSoundDeviceInfo[8]
SSoundDeviceInfo g_SoundDevices[8] = {};

// STrainNoise[10]
STrainNoise g_TrainNoiseArray[10] = {};

// byte
byte g_BYTE_02649024 = {};
byte g_BYTE_02649027 = {};
byte g_BYTE_0264be10 = {};

// char[40]
char g_SoundAmbientSoundName[40] = {};

// char[40][40]
char g_SoundMatchedFilenames[40][40] = {};

// double
double g_DOUBLE_02648428 = {};
double g_DOUBLE_02648430 = {};
double g_DOUBLE_02648438 = {};
double g_DOUBLE_02648440 = {};
double g_DOUBLE_02648448 = {};
double g_DOUBLE_02648450 = {};

// double[8]
double g_VirtualSpeakerXPositions[8] = {};
double g_VirtualSpeakerYPositions[8] = {};
double g_VirtualSpeakerZPositions[8] = {};

// float
float g_FLOAT_0264900c = {};
float g_FLOAT_0264b29c = {};
float g_FLOAT_0264b2a0 = {};
float g_FLOAT_0264b2a4 = {};
float g_FLOAT_0264b2a8 = {};
float g_FLOAT_0264b2ac = {};
float g_FLOAT_0264b2b0 = {};
float g_CurrentVolumeMultiplier = {};
float g_TargetVolumeMultiplier = {};
float g_VolumeFadeTimeRemaining = {};
float g_TrainNoiseCooldown = {};
float g_FLOAT_0264bd80 = {};
float g_FLOAT_0264bd84 = {};
float g_FLOAT_0264bec8 = {};

// float*
float* g_TertiaryMixBuffer = {};
float* g_PrimaryMixBuffer = {};
float* g_SecondaryMixBuffer = {};

// float*[8]
float* g_ChannelTertiaryBuffers[8] = {};
float* g_ChannelPrimaryBuffers[8] = {};
float* g_ChannelSecondaryBuffersA[8] = {};
float* g_ChannelSecondaryBuffersB[8] = {};

// float[32]
float g_SfxChannelVolumes[32] = {};

// int
int g_SfxLastSlot = {};
int g_LastSampleAccessIndex = {};
int g_INT_026484b8 = {};
int g_INT_026484bc = {};
int g_SoundBusyFlag = {};
int g_HasHardware3DSound = {};
int g_SoundMuted = {};
int g_MixBufferReadIndex = {};
int g_MixBufferWriteIndex = {};
int g_MixBufferSize = {};
int g_NumMixBuffers = {};
int g_MixBufferCount = {};
int g_AudioThreadRunning = {};
int g_AudioThreadShutdownFlag = {};
int g_SoundLockCount = {};
int g_SoundStartTime = {};
int isRecordingStarted = {};
int g_RecordingSamplesSigned = {};
int g_StreamBitsPerSample = {};
int g_StreamSampleRate = {};
int g_StreamChannelCount = {};
int g_StreamSamplesPerBlock = {};
int g_StreamBlockSizeBytes = {};
int g_StreamBlockCount = {};
int g_StreamCurrentBlock = {};
int g_INT_0264ac0c = {};
int g_WaveOutHandle = {};
int g_WaveOutBitsPerSample = {};
int g_WaveOutChannels = {};
int g_WaveOutSampleRate = {};
int g_WaveOutBufferSize = {};
int g_WaveOutNumBuffers = {};
int g_WaveInHandle = {};
int g_WaveInBitsPerSample = {};
int g_WaveInChannels = {};
int g_WaveInSampleRate = {};
int g_WaveInIs8Bit = {};
int g_WaveInBufferSizeSamples = {};
int g_WaveInNumBuffers = {};
int g_WaveInRequestedBitsPerSample = {};
int g_WaveInRequestedChannels = {};
int g_WaveInRequestedSampleRate = {};
int g_WaveInStereoRequested = {};
int g_WaveInCurrentBufferIndex = {};
int g_WaveInCurrentSampleOffset = {};
int g_SoundMatchCount = {};
int g_SoundAmbientSfxHandle = {};
int g_SoundAudioInitialized = {};
int g_TrainLastCameraIndex = {};
int g_INT_0264bba0 = {};
int g_INT_0264bba4 = {};
int g_INT_0264bbac = {};
int g_FrameBufferTestResult = {};
int g_INT_0264bbc4 = {};
int g_LoadedExternalDLLRenderer = {};
int g_FogColorRed = {};
int g_FogColorGreen = {};
int g_FogColorBlue = {};
int g_ExternalBitsPerPixel = {};
int g_INT_0264bcf8 = {};
int g_INT_0264bcfc = {};
int g_ExternalFrameLocked = {};
int g_INT_0264bd04 = {};
int g_INT_0264becc = {};
int g_INT_0264bee0 = {};
int g_INT_0264bee4 = {};
int g_INT_0264bef0 = {};
int g_INT_0264bef8 = {};

// int[19]
int g_SvetlanaBoneIndices[19] = {};

// int[20]
int g_WaveInBuffers[20] = {};

// int[23]
int g_StrangerIndices[23] = {};

// int[32]
int g_SfxChannelEnabled[32] = {};

// int[4]
int g_TentacleIndices[4] = {};

// uint
uint g_WindSoundHandle = {};
uint g_UINT_0264b298 = {};
uint g_TrainRailNoiseHandle = {};
uint g_TrainExteriorAmbientHandle = {};

// void*
void* g_APIDLL_init = {};
void* g_PTR_0264bbbc = {};
void* g_PTR_0264bbc0 = {};
void* g_PTR_0264bbc8 = {};
void* g_PTR_0264bbcc = {};
void* g_PTR_0264bbd0 = {};
void* g_PTR_0264bbd4 = {};
void* g_PTR_0264bbd8 = {};
void* g_PTR_0264bbdc = {};
void* g_PTR_0264bbe0 = {};
void* g_PTR_0264bbe4 = {};
void* g_PTR_0264bbe8 = {};
void* g_PTR_0264bbec = {};
void* g_PTR_0264bbf0 = {};
void* g_PTR_0264bbf4 = {};
void* g_PTR_0264bbf8 = {};
void* g_PTR_0264bbfc = {};
void* g_PTR_0264bc00 = {};
void* g_PTR_0264bc04 = {};
void* g_PTR_0264bc08 = {};
void* g_PTR_0264bc0c = {};
void* g_PTR_0264bc10 = {};
void* g_PTR_0264bc14 = {};
void* g_PTR_0264bc18 = {};
void* g_PTR_0264bc1c = {};
void* g_PTR_0264bc20 = {};
void* g_PTR_0264bc24 = {};
void* g_PTR_0264bc28 = {};
void* g_PTR_0264bc2c = {};
void* g_PTR_0264bc38 = {};
void* g_PTR_0264bc3c = {};
void* g_PTR_0264bc40 = {};
void* g_PTR_0264bc44 = {};
void* g_PTR_0264bc48 = {};
void* g_PTR_0264bc4c = {};
void* g_PTR_0264bc50 = {};
void* g_PTR_0264bc54 = {};
void* g_PTR_0264bc58 = {};
void* g_PTR_0264bc5c = {};
void* g_PTR_0264bc60 = {};
void* g_APIDLL_getDisplayContext = {};
void* g_PTR_0264bc70 = {};
void* g_PTR_0264bc74 = {};
void* g_PTR_0264bc78 = {};
void* g_PTR_0264bc7c = {};
void* g_PTR_0264bc80 = {};
void* g_APIDLL_lockHoldBuffer = {};
void* g_APIDLL_unlockHoldBuffer = {};
void* g_APIDLL_lockTexture = {};
void* g_APIDLL_unlockTexture = {};
void* g_APIDLL_getTextureInfo = {};
void* g_APIDLL_setVideoModeX = {};
void* g_APIDLL_restoreVideoModeX = {};
void* g_APIDLL_lockFrameX = {};
void* g_APIDLL_setLightConstants = {};
void* g_APIDLL_setLightVector = {};
void* g_APIDLL_setAmbientLight = {};
void* g_APIDLL_setTransform = {};
void* g_APIDLL_getTextureHandle = {};
void* g_APIDLL_selectTextureByHandle = {};
void* g_APIDLL_enableCulling = {};
void* g_APIDLL_enableClipping = {};
void* g_APIDLL_setTextureClamp = {};
void* g_APIDLL_setFog = {};

