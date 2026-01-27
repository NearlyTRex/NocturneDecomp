#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F60000
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

// APIDLL_drawPolyList3*
APIDLL_drawPolyList3* g_APIDLL_drawPolyList3 = {};

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

// APIDLL_getTextureInfo*
APIDLL_getTextureInfo* g_APIDLL_getTextureInfo = {};

// APIDLL_getVideoMemory*
APIDLL_getVideoMemory* g_APIDLL_getVideoMemory = {};

// APIDLL_init*
APIDLL_init* g_APIDLL_init = {};

// APIDLL_kill*
APIDLL_kill* g_APIDLL_kill = {};

// APIDLL_lockFrame*
APIDLL_lockFrame* g_APIDLL_lockFrame = {};

// APIDLL_lockFrameX*
APIDLL_lockFrameX* g_APIDLL_lockFrameX = {};

// APIDLL_lockHoldBuffer*
APIDLL_lockHoldBuffer* g_APIDLL_lockHoldBuffer = {};

// APIDLL_lockTexture*
APIDLL_lockTexture* g_APIDLL_lockTexture = {};

// APIDLL_masterZBuffer*
APIDLL_masterZBuffer* g_APIDLL_masterZBuffer = {};

// APIDLL_restoreVideoMode*
APIDLL_restoreVideoMode* g_APIDLL_restoreVideoMode = {};

// APIDLL_restoreVideoModeX*
APIDLL_restoreVideoModeX* g_APIDLL_restoreVideoModeX = {};

// APIDLL_restoreZBuffer*
APIDLL_restoreZBuffer* g_APIDLL_restoreZBuffer = {};

// APIDLL_selectCard*
APIDLL_selectCard* g_APIDLL_selectCard = {};

// APIDLL_selectTexture*
APIDLL_selectTexture* g_APIDLL_selectTexture = {};

// APIDLL_selectTextureBGRA*
APIDLL_selectTextureBGRA* g_APIDLL_selectTextureBGRA = {};

// APIDLL_setColorTable16*
APIDLL_setColorTable16* g_APIDLL_setColorTable16 = {};

// APIDLL_setFogColor*
APIDLL_setFogColor* g_APIDLL_setFogColor = {};

// APIDLL_setMipMapLevel*
APIDLL_setMipMapLevel* g_APIDLL_setMipMapLevel = {};

// APIDLL_setVideoMode2*
APIDLL_setVideoMode2* g_APIDLL_setVideoMode2 = {};

// APIDLL_setVideoModeX*
APIDLL_setVideoModeX* g_APIDLL_setVideoModeX = {};

// APIDLL_sync*
APIDLL_sync* g_APIDLL_sync = {};

// APIDLL_toggle*
APIDLL_toggle* g_APIDLL_toggle = {};

// APIDLL_toggleX*
APIDLL_toggleX* g_APIDLL_toggleX = {};

// APIDLL_unlockFrame*
APIDLL_unlockFrame* g_APIDLL_unlockFrame = {};

// APIDLL_unlockFrameX*
APIDLL_unlockFrameX* g_APIDLL_unlockFrameX = {};

// APIDLL_unlockHoldBuffer*
APIDLL_unlockHoldBuffer* g_APIDLL_unlockHoldBuffer = {};

// APIDLL_unlockTexture*
APIDLL_unlockTexture* g_APIDLL_unlockTexture = {};

// APIDLL_updateTexture*
APIDLL_updateTexture* g_APIDLL_updateTexture = {};

// APIDLL_updateTextureBGRA*
APIDLL_updateTextureBGRA* g_APIDLL_updateTextureBGRA = {};

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

// CSfxSample*
CSfxSample* g_SfxSamplesEnd = {};

// CSfxSample[64]
CSfxSample g_SfxSamples[64] = {};

// CSound
CSound g_CSoundInstance = {};

// CSoundDevice*
CSoundDevice* g_CSoundDevicePtr = {};

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

// HWAVEIN
HWAVEIN g_WaveInHandle = {};

// HWAVEOUT
HWAVEOUT g_WaveOutHandle = {};

// HWND
HWND g_StoredWindowHandle = {};

// IDirectSound*
IDirectSound* g_DirectSound = {};

// IDirectSound3DBuffer*[31]
IDirectSound3DBuffer* g_DirectSound3DBufferInterfaces[31] = {};

// IDirectSound3DListener*
IDirectSound3DListener* g_DirectSound3DListener = {};

// IDirectSoundBuffer*
IDirectSoundBuffer* g_DirectSoundPrimaryBuffer = {};
IDirectSoundBuffer* g_DirectSoundSecondaryBuffer = {};

// IDirectSoundBuffer*[25]
IDirectSoundBuffer* g_DirectSoundSampleBuffers[25] = {};

// IDirectSoundBuffer*[31]
IDirectSoundBuffer* g_DirectSoundHardwareSfxBuffers[31] = {};

// IDirectSoundBufferMetadata[25]
IDirectSoundBufferMetadata g_DirectSoundBufferMetadata[25] = {};

// IDirectSoundCapture*
IDirectSoundCapture* g_RecordingDeviceInterface = {};

// IKsPropertySet*
IKsPropertySet* g_DirectSoundPropertySet = {};

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

// double
double g_AudioLatencySeconds = {};

// double[8]
double g_VirtualSpeakerXPositions[8] = {};
double g_VirtualSpeakerYPositions[8] = {};
double g_VirtualSpeakerZPositions[8] = {};

// float
float g_CurrentVolumeMultiplier = {};
float g_TargetVolumeMultiplier = {};
float g_VolumeFadeTimeRemaining = {};
float g_TrainNoiseCooldown = {};
float FLOAT_03f6ba1c = {};
float FLOAT_03f6ba20 = {};
float FLOAT_03f6ba9c = {};
float FLOAT_03f6baa0 = {};
float FLOAT_03f6baa4 = {};
float FLOAT_03f6bab0 = {};
float FLOAT_03f6bab4 = {};
float FLOAT_03f6bab8 = {};
float FLOAT_03f6babc = {};
float FLOAT_03f6bac0 = {};
float FLOAT_03f6bac4 = {};

// float*
float* g_TertiaryMixBuffer = {};
float* g_SecondaryMixBuffer = {};

// float*[8]
float* g_ChannelTertiaryBuffers[8] = {};
float* g_ChannelSecondaryBuffersA[8] = {};
float* g_ChannelSecondaryBuffersB[8] = {};

// float[32]
float g_SfxChannelVolumes[32] = {};

// int
int g_SfxLastSlot = {};
int g_LastSampleAccessIndex = {};
int g_SoundBusyFlag = {};
int g_HasHardware3DSound = {};
int g_SoundEnabled = {};
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
int g_WaveOutBitsPerSample = {};
int g_WaveOutChannels = {};
int g_WaveOutSampleRate = {};
int g_WaveOutBufferSize = {};
int g_WaveOutNumBuffers = {};
int g_WaveInBitsPerSample = {};
int g_WaveInChannels = {};
int g_WaveInSampleRate = {};
int g_WaveInIs8Bit = {};
int g_WaveInBufferSizeSamples = {};
int g_WaveInNumBuffers = {};
int g_WaveInRequestedChannels = {};
int g_WaveInRequestedSampleRate = {};
int g_WaveInRequestedBitsPerSample = {};
int g_WaveInStereoRequested = {};
int g_WaveInCurrentBufferIndex = {};
int g_WaveInCurrentSampleOffset = {};
int g_SoundMatchCount = {};
int g_SoundAmbientSfxHandle = {};
int g_SoundAudioInitialized = {};
int g_TrainLastCameraIndex = {};
int g_FullscreenMode = {};
int g_RendererHandle = {};
int g_PodSystemVersion = {};
int g_FrameBufferTestResult = {};
int g_ExternalRendererActive = {};
int g_FogColorRed = {};
int g_FogColorGreen = {};
int g_FogColorBlue = {};
int g_ExternalBitsPerPixel = {};
int g_DLLFunctionsMissing = {};
int g_SavedBitsPerPixel = {};
int g_ExternalFrameLocked = {};
int g_VideoModeXBPP = {};
int INT_03f6bacc = {};
int INT_03f6bad0 = {};
int INT_03f6bad4 = {};
int INT_03f6bad8 = {};
int INT_03f6badc = {};
int INT_03f6bae0 = {};
int INT_03f6bae4 = {};
int INT_03f6bae8 = {};
int INT_03f6baec = {};
int INT_03f6baf0 = {};
int INT_03f6baf4 = {};
int INT_03f6baf8 = {};
int INT_03f6bafc = {};
int INT_03f6bb00 = {};
int INT_03f6bb04 = {};
int INT_03f6bb08 = {};
int INT_03f6bb0c = {};
int INT_03f6bb10 = {};
int INT_03f6bb14 = {};
int INT_03f6bb18 = {};
int INT_03f6bb64 = {};
int INT_03f6bb68 = {};
int INT_03f6bb6c = {};
int INT_03f6bb70 = {};
int INT_03f6bb74 = {};
int INT_03f6bb78 = {};
int INT_03f6bb7c = {};
int INT_03f6bb80 = {};
int INT_03f6bb84 = {};
int INT_03f6bb88 = {};
int INT_03f6bb8c = {};
int INT_03f6bb90 = {};
int INT_03f6bb94 = {};
int g_LogInitialized = {};
int INT_03f6cb90 = {};
int INT_03f6cb94 = {};
int INT_03f6cb98 = {};
int INT_03f6cb9c = {};
int INT_03f6cba0 = {};
int INT_03f6cba4 = {};
int INT_03f6cba8 = {};
int INT_03f6cbac = {};
int INT_03f6cbb0 = {};
int INT_03f6cbb4 = {};
int INT_03f6cbb8 = {};
int INT_03f6cbbc = {};
int INT_03f6cbc0 = {};
int INT_03f6cbc4 = {};
int INT_03f6cbc8 = {};
int INT_03f6cbcc = {};
int INT_03f6cbd0 = {};
int INT_03f6cbd4 = {};
int INT_03f6cbd8 = {};

// int[32]
int g_SfxChannelEnabled[32] = {};

// uchar
uchar g_MissingSoundsInitFlag = {};

// uint
uint g_WindSoundHandle = {};
uint g_WaterSoundHandle = {};
uint g_TrainRailNoiseHandle = {};
uint g_TrainExteriorAmbientHandle = {};

// undefined1
undefined1 DAT_03f6baac = {};

// undefined4
undefined4 DAT_03f6baa8 = {};
undefined4 DAT_03f6bb1c = {};
undefined4 DAT_03f6bb20 = {};
undefined4 DAT_03f6bb24 = {};
undefined4 DAT_03f6bbe4 = {};
undefined4 DAT_03f6bbe8 = {};
undefined4 DAT_03f6cd08 = {};
undefined4 DAT_03f6cd0c = {};
undefined4 DAT_03f6cd10 = {};
undefined4 DAT_03f6cd14 = {};

// void*
void* g_PrimaryMixBuffer = {};
void* g_FrameBufferPtr = {};
void* g_APIDLL_setVideoMode = {};
void* g_APIDLL_GetDisplayContext = {};
void* g_APIDLL_ReleaseDisplayContext = {};
void* g_APIDLL_setViewport = {};
void* g_APIDLL_setLightConstants = {};
void* g_APIDLL_setLightVector = {};
void* g_APIDLL_setAmbientLight = {};
void* g_APIDLL_setTransform = {};
void* g_APIDLL_polyList = {};
void* g_APIDLL_getTextureHandle = {};
void* g_APIDLL_selectTextureByHandle = {};
void* g_APIDLL_enableCulling = {};
void* g_APIDLL_enableClipping = {};
void* g_APIDLL_setTextureClamp = {};
void* g_APIDLL_setFog = {};

// void*[8]
void* g_ChannelPrimaryBuffers[8] = {};

