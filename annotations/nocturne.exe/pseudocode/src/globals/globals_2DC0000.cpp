#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2DC0000
// =============================================================================

// APIDLL_add3dLine*
APIDLL_add3dLine* g_APIDLL_add3dLine = {};

// APIDLL_addParticle*
APIDLL_addParticle* g_APIDLL_addParticle = {};

// APIDLL_beginScene*
APIDLL_beginScene* g_APIDLL_beginScene = {};

// APIDLL_buildCardList*
APIDLL_buildCardList* g_APIDLL_buildCardList = {};

// APIDLL_clear*
APIDLL_clear* g_APIDLL_clear = {};

// APIDLL_clearZBox*
APIDLL_clearZBox* g_APIDLL_clearZBox = {};

// APIDLL_clearZBuffer*
APIDLL_clearZBuffer* g_APIDLL_clearZBuffer = {};

// APIDLL_drawPolyList*
APIDLL_drawPolyList* g_APIDLL_drawPolyList = {};

// APIDLL_drawPolyList2*
APIDLL_drawPolyList2* g_APIDLL_drawPolyList2 = {};

// APIDLL_drawPolygon*
APIDLL_drawPolygon* g_APIDLL_drawPolygon = {};

// APIDLL_drawPolygon2*
APIDLL_drawPolygon2* g_APIDLL_drawPolygon2 = {};

// APIDLL_endScene*
APIDLL_endScene* g_APIDLL_endScene = {};

// APIDLL_flushLineList*
APIDLL_flushLineList* g_APIDLL_flushLineList = {};

// APIDLL_flushParticleList*
APIDLL_flushParticleList* g_APIDLL_flushParticleList = {};

// APIDLL_getDisplayContext*
APIDLL_getDisplayContext* g_APIDLL_getDisplayContext = {};

// APIDLL_getVideoMemory*
APIDLL_getVideoMemory* g_APIDLL_getVideoMemory = {};

// APIDLL_init*
APIDLL_init* g_APIDLL_init = {};

// APIDLL_kill*
APIDLL_kill* g_APIDLL_kill = {};

// APIDLL_lockFrame*
APIDLL_lockFrame* g_APIDLL_lockFrame = {};

// APIDLL_lockHoldBuffer*
APIDLL_lockHoldBuffer* g_APIDLL_lockHoldBuffer = {};

// APIDLL_masterZBuffer*
APIDLL_masterZBuffer* g_APIDLL_masterZBuffer = {};

// APIDLL_releaseDisplayContext*
APIDLL_releaseDisplayContext* g_APIDLL_releaseDisplayContext = {};

// APIDLL_restoreVideoMode*
APIDLL_restoreVideoMode* g_APIDLL_restoreVideoMode = {};

// APIDLL_restoreZBuffer*
APIDLL_restoreZBuffer* g_APIDLL_restoreZBuffer = {};

// APIDLL_selectCard*
APIDLL_selectCard* g_APIDLL_selectCard = {};

// APIDLL_selectTexture*
APIDLL_selectTexture* g_APIDLL_selectTexture = {};

// APIDLL_setColorTable16*
APIDLL_setColorTable16* g_APIDLL_setColorTable16 = {};

// APIDLL_setFogColor*
APIDLL_setFogColor* g_APIDLL_setFogColor = {};

// APIDLL_setMipMapLevel*
APIDLL_setMipMapLevel* g_APIDLL_setMipMapLevel = {};

// APIDLL_setVideoMode*
APIDLL_setVideoMode* g_APIDLL_setVideoMode = {};

// APIDLL_setVideoMode2*
APIDLL_setVideoMode2* g_APIDLL_setVideoMode2 = {};

// APIDLL_sync*
APIDLL_sync* g_APIDLL_sync = {};

// APIDLL_toggle*
APIDLL_toggle* g_APIDLL_toggle = {};

// APIDLL_unlockFrame*
APIDLL_unlockFrame* g_APIDLL_unlockFrame = {};

// APIDLL_unlockHoldBuffer*
APIDLL_unlockHoldBuffer* g_APIDLL_unlockHoldBuffer = {};

// APIDLL_updateTexture*
APIDLL_updateTexture* g_APIDLL_updateTexture = {};

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

// CLever*
CLever* g_CLever_PTR_02dc9f2c = {};

// CSfxOptions[8]
CSfxOptions g_CSfxOptions_ARRAY_02dc1b78[8] = {};

// CSfxSample[64]
CSfxSample g_SfxSamples[64] = {};

// CSound
CSound g_CSoundInstance = {};

// CSoundDevice*
CSoundDevice* g_CSoundDevicePtr = {};

// CSpotView
CSpotView g_CSpotViewInstance = {};

// CStrList
CStrList g_SoundFileList = {};

// CTextureList
CTextureList g_CTextureListInstance = {};

// CVector3d
CVector3d g_Cached3DListenerOrientUp = {};
CVector3d g_Cached3DListenerOrientRight = {};

// CVector3f
CVector3f g_TrainVelocityVector = {};
CVector3f g_CVector3f_02dc9f20 = {};
CVector3f g_StrangerWeaponEulerPlusX = {};
CVector3f g_StrangerWeaponEulerMinusX = {};

// CWavOutDevice
CWavOutDevice g_CWavOutDeviceInstance = {};

// HANDLE
HANDLE g_SoundMutex = {};

// HGLOBAL[8]
HGLOBAL g_WaveOutBufferHandles[8] = {};
HGLOBAL g_HGLOBAL_ARRAY_02dc9408[8] = {};

// HMODULE
HMODULE g_RendererDLLHandle = {};

// HWAVEOUT
HWAVEOUT g_WaveOutHandle = {};

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
IDirectSoundBuffer* g_DirectSoundSampleBuffers[25] = {};

// IDirectSoundBuffer*[31]
IDirectSoundBuffer* g_DirectSoundHardwareSfxBuffers[31] = {};

// IKsPropertySet*
IKsPropertySet* g_DirectSoundPropertySet = {};

// LPVOID[8]
LPVOID g_WaveOutBuffers[8] = {};

// LPWAVEHDR[8]
LPWAVEHDR g_LPWAVEHDR_ARRAY_02dc93a8[8] = {};

// SDirectSoundDeviceInfo[8]
SDirectSoundDeviceInfo g_DirectSoundDevices[8] = {};

// SReverbSettings
SReverbSettings g_CachedReverb = {};
SReverbSettings g_SoundReverb = {};

// SSoundDeviceInfo[8]
SSoundDeviceInfo g_SoundDevices[8] = {};

// STrainNoise[10]
STrainNoise g_TrainNoiseArray[10] = {};

// byte
byte g_BYTE_02dc9f30 = {};

// char[40]
char g_SoundAmbientSoundName[40] = {};

// char[40][40]
char g_SoundMatchedFilenames[40][40] = {};

// double
double g_DOUBLE_02dc78e0 = {};
double g_DOUBLE_02dc78e8 = {};
double g_DOUBLE_02dc78f0 = {};
double g_DOUBLE_02dc78f8 = {};
double g_DOUBLE_02dc7900 = {};
double g_DOUBLE_02dc7908 = {};
double g_DOUBLE_02dc7910 = {};
double g_DOUBLE_02dc7918 = {};
double g_DOUBLE_02dc7920 = {};
double g_AudioLatencySeconds = {};

// double[8]
double g_VirtualSpeakerXPositions[8] = {};
double g_VirtualSpeakerYPositions[8] = {};
double g_VirtualSpeakerZPositions[8] = {};

// float
float g_FLOAT_02dc945c = {};
float g_FLOAT_02dc9460 = {};
float g_FLOAT_02dc9464 = {};
float g_FLOAT_02dc9468 = {};
float g_FLOAT_02dc946c = {};
float g_FLOAT_02dc9470 = {};
float g_CurrentVolumeMultiplier = {};
float g_TargetVolumeMultiplier = {};
float g_VolumeFadeTimeRemaining = {};
float g_TrainNoiseCooldown = {};
float g_FLOAT_02dc9ea0 = {};
float g_FLOAT_02dc9ea4 = {};
float g_FLOAT_02dc9fe8 = {};

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
int g_StreamBitsPerSample = {};
int g_StreamSampleRate = {};
int g_StreamChannelCount = {};
int g_StreamSamplesPerBlock = {};
int g_StreamBlockSizeBytes = {};
int g_StreamBlockCount = {};
int g_StreamCurrentBlock = {};
int g_INT_02dc9428 = {};
int g_INT_02dc942c = {};
int g_INT_02dc9430 = {};
int g_INT_02dc9434 = {};
int g_INT_02dc9438 = {};
int g_WaveOutNumBuffers = {};
int g_SoundMatchCount = {};
int g_SoundAmbientSfxHandle = {};
int g_SoundAudioInitialized = {};
int g_TrainLastCameraIndex = {};
int g_UseDirect3D = {};
int g_RendererCardIndex = {};
int g_AGPTextureMode = {};
int g_FrameBufferTestResult = {};
int g_LoadedExternalDLLRenderer = {};
int g_FogColorRed = {};
int g_FogColorGreen = {};
int g_FogColorBlue = {};
int g_ExternalBitsPerPixel = {};
int g_SavedBitsPerPixel = {};
int g_ExternalFrameLocked = {};
int g_INT_02dc9fec = {};
int g_INT_02dca000 = {};
int g_INT_02dca004 = {};
int g_INT_02dca010 = {};
int g_INT_02dca018 = {};
int g_INT_02dca1d0 = {};
int g_INT_02dca1d4 = {};
int g_INT_02dca1d8 = {};
int g_INT_02dca1dc = {};

// int[19]
int g_SvetlanaBoneIndices[19] = {};

// int[23]
int g_StrangerIndices[23] = {};

// int[25]
int g_INT_ARRAY_02dc9324[25] = {};

// int[32]
int g_SfxChannelEnabled[32] = {};

// uint
uint g_WindSoundHandle = {};
uint g_WaterSoundHandle = {};
uint g_TrainRailNoiseHandle = {};
uint g_TrainExteriorAmbientHandle = {};

// void*
void* g_FrameBufferPtr = {};

