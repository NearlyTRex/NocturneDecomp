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
CDirectSoundDevice g_CDirectSoundDevice_02cf5468 = {};

// COutStreamDebug
COutStreamDebug g_COutStreamDebugInstance = {};

// CSound
CSound g_CSound_02cf5680 = {};

// CSoundDevice*
CSoundDevice* g_CSoundDevice_PTR_02cf3280 = {};
CSoundDevice* g_CSoundDevice_PTR_02cf3c68 = {};

// CSpotView
CSpotView g_CSpotView_02cf6170 = {};

// CStrList
CStrList g_CStrListInstance = {};

// CTerrain
CTerrain g_CTerrain_02cfd8b8 = {};

// CTextureCache*
CTextureCache* g_CTextureCache_PTR_02cfd0d0 = {};

// CTextureList
CTextureList g_CTextureListInstance = {};

// CVector3d
CVector3d g_CVector3d_02cf2858 = {};

// CVector3f
CVector3f g_CVector3f_02cf5f74 = {};
CVector3f g_CVector3f_02cfd900 = {};

// CWater
CWater g_CWaterInstance = {};

// CWavInDevice
CWavInDevice g_CWavInDevice_02cf567c = {};

// CWavOutDevice
CWavOutDevice g_CWavOutDevice_02cf5678 = {};

// HANDLE
HANDLE g_HANDLE_02cf3418 = {};
HANDLE g_HANDLE_02cfd8a8 = {};

// HGLOBAL[20]
HGLOBAL g_HGLOBAL_ARRAY_02cf5508[20] = {};
HGLOBAL g_HGLOBAL_ARRAY_02cf55a8[20] = {};

// HGLOBAL[8]
HGLOBAL g_HGLOBAL_ARRAY_02cf5470[8] = {};
HGLOBAL g_HGLOBAL_ARRAY_02cf54b0[8] = {};

// HMODULE
HMODULE g_HMODULE_02cf610c = {};

// HWND
HWND g_HWND_02cf611c = {};

// IDirectSound*
IDirectSound* g_IDirectSound_PTR_02cf49c4 = {};

// IDirectSound3DListener*
IDirectSound3DListener* g_IDirectSound3DListener_PTR_02cf49d0 = {};

// IDirectSoundBuffer*
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_02cf49c8 = {};
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_02cf49cc = {};

// IDirectSoundBuffer*[25]
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[25] = {};

// IDirectSoundBuffer*[31]
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_02cf500c[31] = {};

// IKsPropertySet*
IKsPropertySet* g_IKsPropertySet_PTR_02cf49d4 = {};

// LPVOID[8]
LPVOID g_LPVOID_ARRAY_02cf54d0[8] = {};

// LPWAVEHDR[20]
LPWAVEHDR g_LPWAVEHDR_ARRAY_02cf5558[20] = {};

// LPWAVEHDR[8]
LPWAVEHDR g_LPWAVEHDR_ARRAY_02cf5490[8] = {};

// SDirectSoundDeviceInfo[8]
SDirectSoundDeviceInfo g_SDirectSoundDeviceInfo_ARRAY_02cf3c74[8] = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_SMRGLTextureBasic_02cfd080 = {};

// SMRGLTextureModel
SMRGLTextureModel g_SMRGLTextureModel_02cfd714 = {};

// SRecordingDeviceInfo[8]
SRecordingDeviceInfo g_SRecordingDeviceInfo_ARRAY_02cf3428[8] = {};

// SReverbSettings
SReverbSettings g_CachedReverb = {};
SReverbSettings g_SoundReverb = {};

// SSoundDeviceInfo[8]
SSoundDeviceInfo g_SSoundDeviceInfo_ARRAY_02cf29c0[8] = {};

// STrainNoise[10]
STrainNoise g_STrainNoise_ARRAY_02cf5ed4[10] = {};

// byte
byte g_BYTE_02cf3424 = {};
byte g_BYTE_02cf3427 = {};

// char[40]
char g_CHAR_ARRAY_02cf5e98[40] = {};

// char[40][40]
char g_CHAR_ARRAY_ARRAY_02cf5858[40][40] = {};

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
double g_DOUBLE_ARRAY_02cf3340[8] = {};
double g_DOUBLE_ARRAY_02cf3380[8] = {};
double g_DOUBLE_ARRAY_02cf33c0[8] = {};

// float
float g_FLOAT_02cf340c = {};
float g_FLOAT_02cf568c = {};
float g_FLOAT_02cf5690 = {};
float g_FLOAT_02cf5694 = {};
float g_FLOAT_02cf5698 = {};
float g_FLOAT_02cf569c = {};
float g_FLOAT_02cf56a0 = {};
float g_FLOAT_02cf5ec8 = {};
float g_FLOAT_02cf5ecc = {};
float g_FLOAT_02cf5ed0 = {};
float g_FLOAT_02cf5f80 = {};
float g_FLOAT_02cf61ac = {};
float g_FLOAT_02cf61b0 = {};
float g_FLOAT_02cfd960 = {};
float g_FLOAT_02cfd964 = {};
float g_FLOAT_02cfd968 = {};
float g_FLOAT_02cfd96c = {};
float g_FLOAT_02cfd970 = {};

// float*
float* g_FLOAT_PTR_02cf32a4 = {};
float* g_FLOAT_PTR_02cf32c8 = {};
float* g_FLOAT_PTR_02cf32ec = {};

// float*[8]
float* g_FLOAT_PTR_ARRAY_02cf32a8[8] = {};
float* g_FLOAT_PTR_ARRAY_02cf32cc[8] = {};
float* g_FLOAT_PTR_ARRAY_02cf32f0[8] = {};
float* g_FLOAT_PTR_ARRAY_02cf3310[8] = {};

// float[32]
float g_FLOAT_ARRAY_02cf28c0[32] = {};

// int
int g_INT_02cf28b8 = {};
int g_INT_02cf28bc = {};
int g_INT_02cf3284 = {};
int g_INT_02cf3288 = {};
int g_INT_02cf328c = {};
int g_INT_02cf3290 = {};
int g_INT_02cf3294 = {};
int g_INT_02cf3298 = {};
int g_INT_02cf329c = {};
int g_INT_02cf32a0 = {};
int g_INT_02cf3338 = {};
int g_INT_02cf3410 = {};
int g_INT_02cf3414 = {};
int g_INT_02cf341c = {};
int g_INT_02cf3420 = {};
int g_INT_02cf3c6c = {};
int g_INT_02cf3c70 = {};
int g_INT_02cf49d8 = {};
int g_INT_02cf49dc = {};
int g_INT_02cf49e0 = {};
int g_INT_02cf49e4 = {};
int g_INT_02cf49e8 = {};
int g_INT_02cf49ec = {};
int g_INT_02cf49f0 = {};
int g_INT_02cf546c = {};
int g_INT_02cf54f0 = {};
int g_INT_02cf54f4 = {};
int g_INT_02cf54f8 = {};
int g_INT_02cf54fc = {};
int g_INT_02cf5500 = {};
int g_INT_02cf5504 = {};
int g_INT_02cf5648 = {};
int g_INT_02cf564c = {};
int g_INT_02cf5650 = {};
int g_INT_02cf5654 = {};
int g_INT_02cf5658 = {};
int g_INT_02cf565c = {};
int g_INT_02cf5660 = {};
int g_INT_02cf5664 = {};
int g_INT_02cf5668 = {};
int g_INT_02cf566c = {};
int g_INT_02cf5670 = {};
int g_INT_02cf5674 = {};
int g_INT_02cf5850 = {};
int g_INT_02cf5ec0 = {};
int g_INT_02cf5ec4 = {};
int g_INT_02cf5f84 = {};
int g_INT_02cf5fcc = {};
int g_INT_02cf5fd0 = {};
int g_INT_02cf5fd4 = {};
int g_INT_02cf5fd8 = {};
int g_INT_02cf5fdc = {};
int g_INT_02cf6108 = {};
int g_INT_02cf6110 = {};
int g_INT_02cf6114 = {};
int g_INT_02cf6118 = {};
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
int g_INT_02cfd974 = {};
int g_INT_02cfd978 = {};
int g_INT_02cfd97c = {};

// int[20]
int g_INT_ARRAY_02cf55f8[20] = {};

// int[32]
int g_INT_ARRAY_02cf2940[32] = {};

// int[4096]
int g_INT_ARRAY_02cfd980[4096] = {};

// uchar[4]
uchar g_UCHAR_ARRAY_02cfd898[4] = {};
uchar g_UCHAR_ARRAY_02cfd89c[4] = {};

// uint
uint g_UINT_02cf5684 = {};
uint g_UINT_02cf5688 = {};
uint g_UINT_02cf5f88 = {};
uint g_UINT_02cf5f8c = {};

// ulong
ulong g_ULONG_02cfd2dc = {};

// void*
void* g_PTR_02cf5fe4 = {};
void* g_PTR_02cf5fe8 = {};
void* g_PTR_02cf5fec = {};
void* g_PTR_02cf5ff4 = {};
void* g_PTR_02cf5ff8 = {};
void* g_PTR_02cf5ffc = {};
void* g_PTR_02cf6000 = {};
void* g_PTR_02cf6004 = {};
void* g_PTR_02cf6008 = {};
void* g_PTR_02cf600c = {};
void* g_PTR_02cf6010 = {};
void* g_PTR_02cf6014 = {};
void* g_PTR_02cf6018 = {};
void* g_PTR_02cf601c = {};
void* g_PTR_02cf6020 = {};
void* g_PTR_02cf6024 = {};
void* g_PTR_02cf6028 = {};
void* g_PTR_02cf602c = {};
void* g_PTR_02cf6030 = {};
void* g_PTR_02cf6034 = {};
void* g_PTR_02cf6038 = {};
void* g_PTR_02cf603c = {};
void* g_PTR_02cf6040 = {};
void* g_PTR_02cf6044 = {};
void* g_PTR_02cf6048 = {};
void* g_PTR_02cf604c = {};
void* g_PTR_02cf6050 = {};
void* g_PTR_02cf6054 = {};
void* g_PTR_02cf6058 = {};
void* g_PTR_02cf6064 = {};
void* g_PTR_02cf6068 = {};
void* g_PTR_02cf606c = {};
void* g_PTR_02cf6070 = {};
void* g_PTR_02cf6074 = {};
void* g_PTR_02cf6078 = {};
void* g_PTR_02cf607c = {};
void* g_PTR_02cf6080 = {};
void* g_PTR_02cf6084 = {};
void* g_PTR_02cf6088 = {};
void* g_PTR_02cf608c = {};
void* g_PTR_02cf6094 = {};
void* g_PTR_02cf609c = {};
void* g_PTR_02cf60a0 = {};
void* g_PTR_02cf60a4 = {};
void* g_PTR_02cf60a8 = {};
void* g_PTR_02cf60ac = {};
void* g_PTR_02cf60b0 = {};
void* g_PTR_02cf60b4 = {};
void* g_PTR_02cf60b8 = {};
void* g_PTR_02cf60bc = {};
void* g_PTR_02cf60c0 = {};
void* g_PTR_02cf60c4 = {};
void* g_PTR_02cf60c8 = {};
void* g_PTR_02cf60cc = {};
void* g_PTR_02cf60dc = {};
void* g_PTR_02cf60e0 = {};
void* g_PTR_02cf60e4 = {};
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

