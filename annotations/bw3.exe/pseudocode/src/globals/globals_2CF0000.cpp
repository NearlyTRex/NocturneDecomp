#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2CF0000
// =============================================================================

// CDemonActorType
CDemonActorType g_CSpawnerClassInfo = {};
CDemonActorType g_CSpikeClassInfo = {};
CDemonActorType g_CSpsClassInfo = {};
CDemonActorType g_CStairsClassInfo = {};
CDemonActorType g_CTempleStoneClassInfo = {};
CDemonActorType g_CStormClassInfo = {};
CDemonActorType g_CTeleportDestClassInfo = {};
CDemonActorType g_CDemonActorType_02cf62e0 = {};
CDemonActorType g_CTommyGunClassInfo = {};
CDemonActorType g_CTheHandClassInfo = {};
CDemonActorType g_CTrapClassInfo = {};
CDemonActorType g_CTrashClassInfo = {};
CDemonActorType g_CTriggerClassInfo = {};
CDemonActorType g_CTVBatClassInfo = {};
CDemonActorType g_CCryptVesselClassInfo = {};

// CDirectSoundDevice
CDirectSoundDevice g_CDirectSoundDeviceInstance = {};

// COutStreamDebug
COutStreamDebug g_COutStreamDebugInstance = {};

// CSound
CSound g_CSoundInstance = {};

// CSoundDevice*
CSoundDevice* g_CSoundDevicePtr = {};
CSoundDevice* g_RecordingDeviceInterface = {};

// CSpotView
CSpotView g_CSpotView_02cf6170 = {};

// CStrList
CStrList g_CStrListInstance = {};

// CTerrain
CTerrain g_CTerrainInstance = {};

// CTextureCache*
CTextureCache* g_TextureCacheInstance = {};

// CTextureList
CTextureList g_CTextureListInstance = {};

// CVector3d
CVector3d g_CVector3d_02cf2858 = {};

// CVector3f
CVector3f g_CVector3f_02cf5f74 = {};
CVector3f g_ZeroVector = {};

// CWater
CWater g_CWaterInstance = {};

// CWavInDevice
CWavInDevice g_CWavInDeviceInstance = {};

// CWavOutDevice
CWavOutDevice g_CWavOutDeviceInstance = {};

// HANDLE
HANDLE g_SoundMutex = {};
HANDLE g_HANDLE_02cfd8a8 = {};

// HGLOBAL[20]
HGLOBAL g_WaveInHeaderHandles[20] = {};
HGLOBAL g_WaveInBufferHandles[20] = {};

// HGLOBAL[8]
HGLOBAL g_WaveOutHeaderHandles[8] = {};
HGLOBAL g_WaveOutBufferHandles[8] = {};

// HMODULE
HMODULE g_HMODULE_02cf610c = {};

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
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[25] = {};

// IDirectSoundBuffer*[31]
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_02cf500c[31] = {};

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

// SMRGLTextureBasic
SMRGLTextureBasic g_SMRGLTextureBasic_02cfd080 = {};

// SMRGLTextureModel
SMRGLTextureModel g_SMRGLTextureModel_02cfd714 = {};

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
byte g_BYTE_02cf3424 = {};
byte g_BYTE_02cf3427 = {};

// char[40]
char g_SoundAmbientSoundName[40] = {};

// char[40][40]
char g_SoundMatchedFilenames[40][40] = {};

// char[516]
char g_CHAR_ARRAY_02cfd0d8[516] = {};

// char[532]
char g_CHAR_ARRAY_02cfd2ec[532] = {};
char g_CHAR_ARRAY_02cfd500[532] = {};

// double
double g_DOUBLE_02cf2828 = {};
double g_DOUBLE_02cf2830 = {};
double g_DOUBLE_02cf2838 = {};
double g_DOUBLE_02cf2840 = {};
double g_DOUBLE_02cf2848 = {};
double g_DOUBLE_02cf2850 = {};

// double[8]
double g_VirtualSpeakerXPositions[8] = {};
double g_VirtualSpeakerYPositions[8] = {};
double g_VirtualSpeakerZPositions[8] = {};

// float
float g_FLOAT_02cf340c = {};
float g_FLOAT_02cf568c = {};
float g_FLOAT_02cf5690 = {};
float g_FLOAT_02cf5694 = {};
float g_FLOAT_02cf5698 = {};
float g_FLOAT_02cf569c = {};
float g_FLOAT_02cf56a0 = {};
float g_FLOAT_02cf5ec8 = {};
float g_TargetVolumeMultiplier = {};
float g_VolumeFadeTimeRemaining = {};
float g_FLOAT_02cf5f80 = {};
float g_FLOAT_02cf61ac = {};
float g_FLOAT_02cf61b0 = {};
float g_FLOAT_02cfd960 = {};
float g_FLOAT_02cfd964 = {};
float g_FLOAT_02cfd968 = {};
float g_FLOAT_02cfd96c = {};
float g_FLOAT_02cfd970 = {};

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
int g_INT_02cf28b8 = {};
int g_INT_02cf28bc = {};
int g_SoundBusyFlag = {};
int g_HasHardware3DSound = {};
int g_HardwareMixingEnabled = {};
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
int g_INT_02cf5fcc = {};
int g_RendererCardIndex = {};
int g_VideoMemorySize = {};
int g_INT_02cf5fd8 = {};
int g_FrameBufferTestResult = {};
int g_INT_02cf6108 = {};
int g_FogColorRed = {};
int g_FogColorGreen = {};
int g_FogColorBlue = {};
int g_INT_02cf6120 = {};
int g_INT_02cf6124 = {};
int g_INT_02cf6128 = {};
int g_INT_02cf612c = {};
int g_INT_02cf6130 = {};
int g_INT_02cfd0cc = {};
int g_INT_02cfd0d4 = {};
int g_INT_02cfd798 = {};
int g_INT_02cfd79c = {};
int g_INT_02cfd7a0 = {};
int g_INT_02cfd7a4 = {};
int g_INT_02cfd8b4 = {};
int g_WaterAnimationTimer = {};
int g_INT_02cfd978 = {};
int g_VisibleWaterTileCount = {};

// int[20]
int g_WaveInBuffers[20] = {};

// int[32]
int g_SfxChannelEnabled[32] = {};

// int[4096]
int g_VisibleWaterTilesX[4096] = {};

// uchar[4]
uchar g_BroadcastIP[4] = {};
uchar g_AnyAddressIP[4] = {};

// uint
uint g_WindSoundHandle = {};
uint g_WaterSoundHandle = {};
uint g_TrainRailNoiseHandle = {};
uint g_TrainExteriorAmbientHandle = {};

// ulong
ulong g_ULONG_02cfd2dc = {};

// void*
void* g_APIDLL_init = {};
void* g_APIDLL_kill = {};
void* g_APIDLL_toggle = {};
void* g_APIDLL_setVideoMode2 = {};
void* g_APIDLL_restoreVideoMode = {};
void* g_APIDLL_beginScene = {};
void* g_APIDLL_endScene = {};
void* g_APIDLL_lockFrame = {};
void* g_APIDLL_unlockFrame = {};
void* g_APIDLL_selectTexture = {};
void* g_APIDLL_updateTexture = {};
void* g_APIDLL_selectTextureBGRA = {};
void* g_APIDLL_updateTextureBGRA = {};
void* g_APIDLL_setMipMapLevel = {};
void* g_APIDLL_drawPolygon = {};
void* g_APIDLL_drawPolygon2 = {};
void* g_APIDLL_drawPolyList = {};
void* g_APIDLL_drawPolyList2 = {};
void* g_APIDLL_drawPolyList3 = {};
void* g_APIDLL_addParticle = {};
void* g_APIDLL_flushParticleList = {};
void* g_APIDLL_add3dLine = {};
void* g_APIDLL_flushLineList = {};
void* g_APIDLL_clear = {};
void* g_APIDLL_setFogColor = {};
void* g_APIDLL_sync = {};
void* g_APIDLL_clearZBuffer = {};
void* g_APIDLL_clearZBox = {};
void* g_APIDLL_setColorTable16 = {};
void* g_APIDLL_masterZBuffer = {};
void* g_APIDLL_restoreZBuffer = {};
void* g_APIDLL_getVideoMemory = {};
void* g_APIDLL_selectCard = {};
void* g_APIDLL_buildCardList = {};
void* g_APIDLL_lockHoldBuffer = {};
void* g_APIDLL_unlockHoldBuffer = {};
void* g_APIDLL_lockTexture = {};
void* g_APIDLL_unlockTexture = {};
void* g_APIDLL_getTextureInfo = {};
void* g_APIDLL_setVideoModeX = {};
void* g_APIDLL_lockFrameX = {};
void* g_APIDLL_toggleX = {};
void* g_APIDLL_setViewport = {};
void* g_APIDLL_setLightConstants = {};
void* g_APIDLL_setLightVector = {};
void* g_APIDLL_setAmbientLight = {};
void* g_APIDLL_setTransform = {};
void* g_APIDLL_polyList = {};
void* g_APIDLL_getTextureHandle = {};
void* g_PTR_02cf60bc = {};
void* g_PTR_02cf60c0 = {};
void* g_PTR_02cf60c4 = {};
void* g_PTR_02cf60c8 = {};
void* g_PTR_02cf60cc = {};
void* g_APIDLL_setTextureClamp = {};
void* g_PTR_02cf60e0 = {};
void* g_APIDLL_setFog = {};
void* g_PTR_02cf60e8 = {};
void* g_PTR_02cf60ec = {};
void* g_PTR_02cf60f0 = {};
void* g_PTR_02cf60f4 = {};
void* g_PTR_02cf60f8 = {};
void* g_PTR_02cf60fc = {};
void* g_PTR_02cf6100 = {};
void* g_PTR_02cf6104 = {};
void* g_PTR_02cfd8ac = {};
void* g_PTR_02cfd8b0 = {};

