#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2C80000
// =============================================================================

// CDemonActorType
CDemonActorType g_CSpikeClassInfo = {};
CDemonActorType g_CStairsClassInfo = {};
CDemonActorType g_CTempleStoneClassInfo = {};
CDemonActorType g_CStrangerClassInfo = {};
CDemonActorType g_CSuccubusClassInfo = {};
CDemonActorType g_CSvetlanaClassInfo = {};
CDemonActorType g_CBassPlayerClassInfo = {};
CDemonActorType g_CDemonActorType_02c837cc = {};
CDemonActorType g_CTeleportDestClassInfo = {};
CDemonActorType g_CDemonActorType_02c83844 = {};
CDemonActorType g_CTentacleClassInfo = {};
CDemonActorType g_CTommyGunClassInfo = {};
CDemonActorType g_CTheHandClassInfo = {};
CDemonActorType g_CTrapClassInfo = {};
CDemonActorType g_CTrashClassInfo = {};
CDemonActorType g_CTriggerClassInfo = {};
CDemonActorType g_CTurretClassInfo = {};
CDemonActorType g_CTVBatClassInfo = {};
CDemonActorType g_CVampireBossClassInfo = {};
CDemonActorType g_CVehicleClassInfo = {};
CDemonActorType g_CCryptVesselClassInfo = {};

// CDirectSoundDevice
CDirectSoundDevice g_CDirectSoundDeviceInstance = {};

// CLever*
CLever* g_StrangerLeverHandle = {};

// COutStreamDebug
COutStreamDebug g_COutStreamDebugInstance = {};

// CSound
CSound g_CSoundInstance = {};

// CSoundDevice*
CSoundDevice* g_CSoundDevicePtr = {};
CSoundDevice* g_RecordingDeviceInterface = {};

// CSpotView
CSpotView g_CSpotView_02c83514 = {};

// CStrList
CStrList g_CStrListInstance = {};

// CTerrain
CTerrain g_CTerrainInstance = {};

// CTextureCache*
CTextureCache* g_TextureCacheInstance = {};

// CTextureList
CTextureList g_CTextureListInstance = {};

// CVector3f
CVector3f g_CVector3f_02c83354 = {};
CVector3f g_StrangerBoundsCenter = {};
CVector3f g_StrangerWeaponEulerPlusX = {};
CVector3f g_StrangerWeaponEulerMinusX = {};
CVector3f g_ZeroVector = {};

// CWater
CWater g_CWaterInstance = {};

// CWavInDevice
CWavInDevice g_CWavInDeviceInstance = {};

// CWavOutDevice
CWavOutDevice g_CWavOutDeviceInstance = {};

// HANDLE
HANDLE g_SoundMutex = {};
HANDLE g_HANDLE_02c8ae58 = {};

// HGLOBAL[20]
HGLOBAL g_WaveInHeaderHandles[20] = {};
HGLOBAL g_WaveInBufferHandles[20] = {};

// HGLOBAL[8]
HGLOBAL g_WaveOutHeaderHandles[8] = {};
HGLOBAL g_WaveOutBufferHandles[8] = {};

// HMODULE
HMODULE g_HMODULE_02c834b0 = {};

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
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[25] = {};

// IDirectSoundBuffer*[31]
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[31] = {};

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
SMRGLTextureBasic g_SMRGLTextureBasic_02c8a630 = {};

// SMRGLTextureModel
SMRGLTextureModel g_SMRGLTextureModel_02c8acc4 = {};

// SRecordingDeviceInfo[8]
SRecordingDeviceInfo g_RecordingDevices[8] = {};

// SReverbSettings
SReverbSettings g_CachedReverb = {};
SReverbSettings g_SoundReverb = {};

// STrainNoise[10]
STrainNoise g_TrainNoiseArray[10] = {};

// byte
byte g_BYTE_02c807f4 = {};
byte g_BYTE_02c807f7 = {};
byte g_StrangerBoundsCenterInit = {};

// char[40]
char g_SoundAmbientSoundName[40] = {};

// char[40][40]
char g_SoundMatchedFilenames[40][40] = {};

// char[516]
char g_CHAR_ARRAY_02c8a688[516] = {};

// char[532]
char g_CHAR_ARRAY_02c8a89c[532] = {};
char g_CHAR_ARRAY_02c8aab0[532] = {};

// double[8]
double g_DOUBLE_ARRAY_02c80710[8] = {};
double g_DOUBLE_ARRAY_02c80750[8] = {};
double g_DOUBLE_ARRAY_02c80790[8] = {};

// float
float g_FLOAT_02c807dc = {};
float g_FLOAT_02c82a6c = {};
float g_FLOAT_02c82a70 = {};
float g_FLOAT_02c82a74 = {};
float g_FLOAT_02c82a78 = {};
float g_FLOAT_02c82a7c = {};
float g_FLOAT_02c82a80 = {};
float g_FLOAT_02c832a8 = {};
float g_TargetVolumeMultiplier = {};
float g_VolumeFadeTimeRemaining = {};
float g_FLOAT_02c83360 = {};
float g_FLOAT_02c83550 = {};
float g_FLOAT_02c83554 = {};
float g_FLOAT_02c83698 = {};
float g_FLOAT_02c8afc0 = {};
float g_FLOAT_02c8afc4 = {};
float g_FLOAT_02c8afc8 = {};
float g_FLOAT_02c8afcc = {};
float g_FLOAT_02c8afd0 = {};

// float*
float* g_TertiaryMixBuffer = {};
float* g_PrimaryMixBuffer = {};
float* g_SecondaryMixBuffer = {};

// float*[8]
float* g_ChannelTertiaryBuffers[8] = {};
float* g_ChannelPrimaryBuffers[8] = {};
float* g_ChannelSecondaryBuffersA[8] = {};
float* g_ChannelSecondaryBuffersB[8] = {};

// int
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
int g_INT_02c823dc = {};
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
int g_INT_02c83370 = {};
int g_INT_02c83374 = {};
int g_INT_02c8337c = {};
int g_FrameBufferTestResult = {};
int g_INT_02c83394 = {};
int g_INT_02c83400 = {};
int g_INT_02c83404 = {};
int g_INT_02c83434 = {};
int g_INT_02c8343c = {};
int g_INT_02c83474 = {};
int g_INT_02c83478 = {};
int g_INT_02c8347c = {};
int g_INT_02c83490 = {};
int g_LoadedExternalDLLRenderer = {};
int g_FogColorRed = {};
int g_FogColorGreen = {};
int g_FogColorBlue = {};
int g_INT_02c834c4 = {};
int g_INT_02c834c8 = {};
int g_INT_02c834cc = {};
int g_INT_02c834d0 = {};
int g_INT_02c834d4 = {};
int g_INT_02c8369c = {};
int g_INT_02c836b0 = {};
int g_INT_02c836b4 = {};
int g_INT_02c836c0 = {};
int g_INT_02c836c8 = {};
int g_INT_02c8a67c = {};
int g_INT_02c8a684 = {};
int g_INT_02c8ad48 = {};
int g_INT_02c8ad4c = {};
int g_INT_02c8ad50 = {};
int g_INT_02c8ad54 = {};
int g_INT_02c8ae64 = {};
int g_WaterAnimationTimer = {};
int g_INT_02c8afd8 = {};
int g_VisibleWaterTileCount = {};

// int[19]
int g_SvetlanaBoneIndices[19] = {};

// int[20]
int g_WaveInBuffers[20] = {};

// int[23]
int g_INT_ARRAY_02c83600[23] = {};

// int[4096]
int g_VisibleWaterTilesX[4096] = {};
int g_VisibleWaterTilesY[4096] = {};

// int[4]
int g_TentacleIndices[4] = {};

// uchar[4]
uchar g_BroadcastIP[4] = {};
uchar g_AnyAddressIP[4] = {};

// uint
uint g_WindSoundHandle = {};
uint g_WaterSoundHandle = {};
uint g_TrainRailNoiseHandle = {};
uint g_TrainExteriorAmbientHandle = {};

// ulong
ulong g_ULONG_02c8a88c = {};

// void*
void* g_PTR_02c83388 = {};
void* g_APIDLL_kill = {};
void* g_APIDLL_toggle = {};
void* g_APIDLL_setVideoMode2 = {};
void* g_APIDLL_restoreVideoMode = {};
void* g_PTR_02c833a0 = {};
void* g_PTR_02c833a4 = {};
void* g_APIDLL_lockFrame = {};
void* g_PTR_02c833ac = {};
void* g_PTR_02c833b0 = {};
void* g_PTR_02c833b4 = {};
void* g_PTR_02c833b8 = {};
void* g_PTR_02c833bc = {};
void* g_PTR_02c833c0 = {};
void* g_APIDLL_drawPolygon = {};
void* g_APIDLL_drawPolygon2 = {};
void* g_APIDLL_drawPolyList = {};
void* g_APIDLL_drawPolyList2 = {};
void* g_APIDLL_drawPolyList3 = {};
void* g_PTR_02c833d8 = {};
void* g_PTR_02c833dc = {};
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
void* g_PTR_02c8341c = {};
void* g_PTR_02c83420 = {};
void* g_PTR_02c83424 = {};
void* g_PTR_02c83428 = {};
void* g_PTR_02c8342c = {};
void* g_PTR_02c83430 = {};
void* g_PTR_02c83438 = {};
void* g_PTR_02c83440 = {};
void* g_PTR_02c83444 = {};
void* g_PTR_02c83448 = {};
void* g_PTR_02c8344c = {};
void* g_PTR_02c83450 = {};
void* g_PTR_02c83454 = {};
void* g_PTR_02c83458 = {};
void* g_PTR_02c8345c = {};
void* g_PTR_02c83460 = {};
void* g_PTR_02c83464 = {};
void* g_PTR_02c83468 = {};
void* g_PTR_02c8346c = {};
void* g_PTR_02c83470 = {};
void* g_PTR_02c83480 = {};
void* g_PTR_02c83484 = {};
void* g_PTR_02c83488 = {};
void* g_PTR_02c8348c = {};
void* g_PTR_02c83494 = {};
void* g_PTR_02c83498 = {};
void* g_PTR_02c8349c = {};
void* g_PTR_02c834a0 = {};
void* g_PTR_02c834a4 = {};
void* g_PTR_02c834a8 = {};
void* g_PTR_02c8ae5c = {};
void* g_PTR_02c8ae60 = {};

