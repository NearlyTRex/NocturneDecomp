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
CDirectSoundDevice g_CDirectSoundDevice_0264b06c = {};

// CLever*
CLever* g_CLever_PTR_0264be0c = {};

// CSfxOptions[8]
CSfxOptions g_CSfxOptions_ARRAY_02641620[8] = {};

// CSfxSample[64]
CSfxSample g_SfxSamples[64] = {};

// CSound
CSound g_CSound_0264b290 = {};

// CSoundDevice*
CSoundDevice* g_CSoundDevice_PTR_02648e80 = {};
CSoundDevice* g_CSoundDevice_PTR_02649868 = {};

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
CVector3f g_CVector3f_0264be14 = {};
CVector3f g_CVector3f_0264be20 = {};

// CWavInDevice
CWavInDevice g_CWavInDevice_0264b280 = {};

// CWavOutDevice
CWavOutDevice g_CWavOutDevice_0264b27c = {};

// HANDLE
HANDLE g_HANDLE_02649018 = {};

// HGLOBAL[20]
HGLOBAL g_HGLOBAL_ARRAY_0264b10c[20] = {};
HGLOBAL g_HGLOBAL_ARRAY_0264b1ac[20] = {};

// HGLOBAL[8]
HGLOBAL g_HGLOBAL_ARRAY_0264b074[8] = {};
HGLOBAL g_HGLOBAL_ARRAY_0264b0b4[8] = {};

// HMODULE
HMODULE g_HMODULE_0264bce0 = {};

// HWND
HWND g_HWND_0264bcf0 = {};

// IDirectSound*
IDirectSound* g_IDirectSound_PTR_0264a5c4 = {};

// IDirectSound3DListener*
IDirectSound3DListener* g_IDirectSound3DListener_PTR_0264a5d0 = {};

// IDirectSoundBuffer*
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_0264a5c8 = {};
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_0264a5cc = {};

// IDirectSoundBuffer*[25]
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4[25] = {};

// IDirectSoundBuffer*[31]
IDirectSoundBuffer* g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[31] = {};

// IKsPropertySet*
IKsPropertySet* g_IKsPropertySet_PTR_0264a5d4 = {};

// LPVOID[8]
LPVOID g_LPVOID_ARRAY_0264b0d4[8] = {};

// LPWAVEHDR[20]
LPWAVEHDR g_LPWAVEHDR_ARRAY_0264b15c[20] = {};

// LPWAVEHDR[8]
LPWAVEHDR g_LPWAVEHDR_ARRAY_0264b094[8] = {};

// SDirectSoundDeviceInfo[8]
SDirectSoundDeviceInfo g_SDirectSoundDeviceInfo_ARRAY_02649874[8] = {};

// SRecordingDeviceInfo[8]
SRecordingDeviceInfo g_SRecordingDeviceInfo_ARRAY_02649028[8] = {};

// SReverbSettings
SReverbSettings g_CachedReverb = {};
SReverbSettings g_SoundReverb = {};

// SSoundDeviceInfo[8]
SSoundDeviceInfo g_SSoundDeviceInfo_ARRAY_026485c0[8] = {};

// STrainNoise[10]
STrainNoise g_STrainNoise_ARRAY_0264bae4[10] = {};

// byte
byte g_BYTE_02649024 = {};
byte g_BYTE_02649027 = {};
byte g_BYTE_0264be10 = {};

// char[40]
char g_CHAR_ARRAY_0264baa8[40] = {};

// char[40][40]
char g_CHAR_ARRAY_ARRAY_0264b468[40][40] = {};

// double
double g_DOUBLE_02648428 = {};
double g_DOUBLE_02648430 = {};
double g_DOUBLE_02648438 = {};
double g_DOUBLE_02648440 = {};
double g_DOUBLE_02648448 = {};
double g_DOUBLE_02648450 = {};

// double[8]
double g_DOUBLE_ARRAY_02648f40[8] = {};
double g_DOUBLE_ARRAY_02648f80[8] = {};
double g_DOUBLE_ARRAY_02648fc0[8] = {};

// float
float g_FLOAT_0264900c = {};
float g_FLOAT_0264b29c = {};
float g_FLOAT_0264b2a0 = {};
float g_FLOAT_0264b2a4 = {};
float g_FLOAT_0264b2a8 = {};
float g_FLOAT_0264b2ac = {};
float g_FLOAT_0264b2b0 = {};
float g_FLOAT_0264bad8 = {};
float g_FLOAT_0264badc = {};
float g_FLOAT_0264bae0 = {};
float g_FLOAT_0264bb90 = {};
float g_FLOAT_0264bd80 = {};
float g_FLOAT_0264bd84 = {};
float g_FLOAT_0264bec8 = {};

// float*
float* g_FLOAT_PTR_02648ea0 = {};
float* g_FLOAT_PTR_02648ec4 = {};
float* g_FLOAT_PTR_02648ee8 = {};

// float*[8]
float* g_FLOAT_PTR_ARRAY_02648ea4[8] = {};
float* g_FLOAT_PTR_ARRAY_02648ec8[8] = {};
float* g_FLOAT_PTR_ARRAY_02648eec[8] = {};
float* g_FLOAT_PTR_ARRAY_02648f0c[8] = {};

// float[32]
float g_FLOAT_ARRAY_026484c0[32] = {};

// int
int g_INT_0264161c = {};
int g_INT_02641920 = {};
int g_INT_026484b8 = {};
int g_INT_026484bc = {};
int g_INT_02648e84 = {};
int g_INT_02648e88 = {};
int g_INT_02648e8c = {};
int g_INT_02648e90 = {};
int g_INT_02648e94 = {};
int g_INT_02648e98 = {};
int g_INT_02648e9c = {};
int g_INT_02648f38 = {};
int g_INT_02649010 = {};
int g_INT_02649014 = {};
int g_INT_0264901c = {};
int g_INT_02649020 = {};
int g_INT_0264986c = {};
int g_INT_02649870 = {};
int g_INT_0264a5d8 = {};
int g_INT_0264a5dc = {};
int g_INT_0264a5e0 = {};
int g_INT_0264a5e4 = {};
int g_INT_0264a5e8 = {};
int g_INT_0264a5ec = {};
int g_INT_0264a5f0 = {};
int g_INT_0264ac0c = {};
int g_INT_0264b070 = {};
int g_INT_0264b0f4 = {};
int g_INT_0264b0f8 = {};
int g_INT_0264b0fc = {};
int g_INT_0264b100 = {};
int g_INT_0264b104 = {};
int g_INT_0264b108 = {};
int g_INT_0264b24c = {};
int g_INT_0264b250 = {};
int g_INT_0264b254 = {};
int g_INT_0264b258 = {};
int g_INT_0264b25c = {};
int g_INT_0264b260 = {};
int g_INT_0264b264 = {};
int g_INT_0264b268 = {};
int g_INT_0264b26c = {};
int g_INT_0264b270 = {};
int g_INT_0264b274 = {};
int g_INT_0264b278 = {};
int g_INT_0264b460 = {};
int g_INT_0264bad0 = {};
int g_INT_0264bad4 = {};
int g_INT_0264bb94 = {};
int g_INT_0264bba0 = {};
int g_INT_0264bba4 = {};
int g_INT_0264bbac = {};
int g_INT_0264bbb0 = {};
int g_INT_0264bbc4 = {};
int g_INT_0264bcdc = {};
int g_INT_0264bce4 = {};
int g_INT_0264bce8 = {};
int g_INT_0264bcec = {};
int g_INT_0264bcf4 = {};
int g_INT_0264bcf8 = {};
int g_INT_0264bcfc = {};
int g_INT_0264bd00 = {};
int g_INT_0264bd04 = {};
int g_INT_0264becc = {};
int g_INT_0264bee0 = {};
int g_INT_0264bee4 = {};
int g_INT_0264bef0 = {};
int g_INT_0264bef8 = {};

// int[19]
int g_INT_ARRAY_0264bf38[19] = {};

// int[20]
int g_INT_ARRAY_0264b1fc[20] = {};

// int[23]
int g_INT_ARRAY_0264be30[23] = {};

// int[32]
int g_INT_ARRAY_02648540[32] = {};

// int[4]
int g_INT_ARRAY_0264c0b0[4] = {};

// uint
uint g_UINT_0264b294 = {};
uint g_UINT_0264b298 = {};
uint g_UINT_0264bb98 = {};
uint g_UINT_0264bb9c = {};

// void*
void* g_PTR_0264bbb8 = {};
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
void* g_PTR_0264bc68 = {};
void* g_PTR_0264bc70 = {};
void* g_PTR_0264bc74 = {};
void* g_PTR_0264bc78 = {};
void* g_PTR_0264bc7c = {};
void* g_PTR_0264bc80 = {};
void* g_PTR_0264bc84 = {};
void* g_PTR_0264bc88 = {};
void* g_PTR_0264bc8c = {};
void* g_PTR_0264bc90 = {};
void* g_PTR_0264bc94 = {};
void* g_PTR_0264bc98 = {};
void* g_PTR_0264bc9c = {};
void* g_PTR_0264bca0 = {};
void* g_PTR_0264bcb0 = {};
void* g_PTR_0264bcb4 = {};
void* g_PTR_0264bcb8 = {};
void* g_PTR_0264bcbc = {};
void* g_PTR_0264bcc4 = {};
void* g_PTR_0264bcc8 = {};
void* g_PTR_0264bccc = {};
void* g_PTR_0264bcd0 = {};
void* g_PTR_0264bcd4 = {};
void* g_PTR_0264bcd8 = {};

