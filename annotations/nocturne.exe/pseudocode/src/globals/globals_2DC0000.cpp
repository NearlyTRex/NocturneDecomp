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
CDemonActorType g_CSpikeActorType_02dc9e28 = {};
CDemonActorType g_CStairsActorType_02dc9ea8 = {};
CDemonActorType g_CTempleStoneActorType_02dc9ee4 = {};
CDemonActorType g_CStrangerActorType_02dc9fac = {};
CDemonActorType g_CSuccubusActorType_02dca01c = {};
CDemonActorType g_CSvetlanaActorType_02dca0a4 = {};
CDemonActorType g_CBassPlayerActorType_02dca0e0 = {};
CDemonActorType g_CDrummerActorType_02dca11c = {};
CDemonActorType g_CTeleportDestActorType_02dca158 = {};
CDemonActorType g_CTeleportActorType_02dca194 = {};
CDemonActorType g_CTentacleActorType_02dca1e0 = {};

// CDirectSoundDevice
CDirectSoundDevice g_CDirectSoundDevice_02dc93a0 = {};

// CLever*
CLever* g_CLever_PTR_02dc9f2c = {};

// CSfxOptions[8]
CSfxOptions g_CSfxOptions_ARRAY_02dc1b78[8] = {};

// CSfxSample[64]
CSfxSample g_SfxSamples[64] = {};

// CSound
CSound g_CSound_02dc9450 = {};

// CSoundDevice*
CSoundDevice* g_CSoundDevice_PTR_02dc8318 = {};

// CSpotView
CSpotView g_CSpotView_02dc9e64 = {};

// CStrList
CStrList g_CStrList_02dc9610 = {};

// CTextureList
CTextureList g_CTextureListInstance = {};

// CVector3d
CVector3d g_CVector3d_02dc7928 = {};
CVector3d g_CVector3d_02dc7940 = {};

// CVector3f
CVector3f g_CVector3f_02dc9d44 = {};
CVector3f g_CVector3f_02dc9f20 = {};
CVector3f CVector3f_02dc9f34 = {};
CVector3f CVector3f_02dc9f40 = {};

// CWavOutDevice
CWavOutDevice g_CWavOutDevice_02dc9440 = {};

// HANDLE
HANDLE g_HANDLE_02dc84b8 = {};

// HGLOBAL[8]
HGLOBAL g_HGLOBAL_ARRAY_02dc93e8[8] = {};
HGLOBAL g_HGLOBAL_ARRAY_02dc9408[8] = {};

// HMODULE
HMODULE g_RendererDLLHandle = {};

// HWAVEOUT
HWAVEOUT g_HWAVEOUT_02dc93a4 = {};

// HWND
HWND g_StoredWindowHandle = {};

// IDirectSound*
IDirectSound* g_IDirectSound_PTR_02dc9214 = {};

// IDirectSound3DListener*
IDirectSound3DListener* g_IDirectSound3DListener_PTR_02dc9220 = {};

// IDirectSoundBuffer*
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_02dc9218 = {};
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_02dc921c = {};

// IDirectSoundBuffer*[25]
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_02dc9244[25] = {};

// IDirectSoundBuffer*[31]
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[31] = {};

// IKsPropertySet*
IKsPropertySet* g_IKsPropertySet_PTR_02dc9224 = {};

// LPVOID[8]
LPVOID g_LPVOID_ARRAY_02dc93c8[8] = {};

// LPWAVEHDR[8]
LPWAVEHDR g_LPWAVEHDR_ARRAY_02dc93a8[8] = {};

// SDirectSoundDeviceInfo[8]
SDirectSoundDeviceInfo g_SDirectSoundDeviceInfo_ARRAY_02dc84c4[8] = {};

// SReverbSettings
SReverbSettings g_SReverbSettings_02dc8498 = {};
SReverbSettings g_SReverbSettings_02dc9474 = {};

// SSoundDeviceInfo[8]
SSoundDeviceInfo g_SSoundDeviceInfo_ARRAY_02dc7a58[8] = {};

// STrainNoise[10]
STrainNoise g_STrainNoise_ARRAY_02dc9ca4[10] = {};

// byte
byte g_BYTE_02dc9f30 = {};

// char[40]
char g_CHAR_ARRAY_02dc9c68[40] = {};

// char[40][40]
char g_CHAR_ARRAY_ARRAY_02dc9628[40][40] = {};

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
double g_DOUBLE_02dc84a8 = {};

// double[8]
double g_DOUBLE_ARRAY_02dc83d8[8] = {};
double g_DOUBLE_ARRAY_02dc8418[8] = {};
double g_DOUBLE_ARRAY_02dc8458[8] = {};

// float
float g_FLOAT_02dc945c = {};
float g_FLOAT_02dc9460 = {};
float g_FLOAT_02dc9464 = {};
float g_FLOAT_02dc9468 = {};
float g_FLOAT_02dc946c = {};
float g_FLOAT_02dc9470 = {};
float g_FLOAT_02dc9c98 = {};
float g_FLOAT_02dc9c9c = {};
float g_FLOAT_02dc9ca0 = {};
float g_FLOAT_02dc9d50 = {};
float g_FLOAT_02dc9ea0 = {};
float g_FLOAT_02dc9ea4 = {};
float g_FLOAT_02dc9fe8 = {};

// float*
float* g_FLOAT_PTR_02dc8338 = {};
float* g_FLOAT_PTR_02dc835c = {};
float* g_FLOAT_PTR_02dc8380 = {};

// float*[8]
float* g_FLOAT_PTR_ARRAY_02dc833c[8] = {};
float* g_FLOAT_PTR_ARRAY_02dc8360[8] = {};
float* g_FLOAT_PTR_ARRAY_02dc8384[8] = {};
float* g_FLOAT_PTR_ARRAY_02dc83a4[8] = {};

// float[32]
float g_FLOAT_ARRAY_02dc7958[32] = {};

// int
int g_INT_02dc1b74 = {};
int g_INT_02dc1ed8 = {};
int g_INT_02dc831c = {};
int g_INT_02dc8320 = {};
int g_SoundMuted = {};
int g_INT_02dc8328 = {};
int g_INT_02dc832c = {};
int g_INT_02dc8330 = {};
int g_INT_02dc8334 = {};
int g_INT_02dc83d0 = {};
int g_INT_02dc84b0 = {};
int g_INT_02dc84b4 = {};
int g_INT_02dc84bc = {};
int g_INT_02dc84c0 = {};
int g_INT_02dc9228 = {};
int g_INT_02dc922c = {};
int g_INT_02dc9230 = {};
int g_INT_02dc9234 = {};
int g_INT_02dc9238 = {};
int g_INT_02dc923c = {};
int g_INT_02dc9240 = {};
int g_INT_02dc9428 = {};
int g_INT_02dc942c = {};
int g_INT_02dc9430 = {};
int g_INT_02dc9434 = {};
int g_INT_02dc9438 = {};
int g_INT_02dc943c = {};
int g_INT_02dc9620 = {};
int g_INT_02dc9c90 = {};
int g_INT_02dc9c94 = {};
int g_INT_02dc9d54 = {};
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
int g_INT_ARRAY_02dca058[19] = {};

// int[23]
int g_INT_ARRAY_02dc9f50[23] = {};

// int[25]
int g_INT_ARRAY_02dc9324[25] = {};

// int[32]
int g_INT_ARRAY_02dc79d8[32] = {};

// uint
uint g_UINT_02dc9454 = {};
uint g_UINT_02dc9458 = {};
uint g_UINT_02dc9d58 = {};
uint g_UINT_02dc9d5c = {};

// void*
void* g_FrameBufferPtr = {};

