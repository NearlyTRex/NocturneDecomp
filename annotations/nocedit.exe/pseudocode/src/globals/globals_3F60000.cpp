#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F60000
// =============================================================================

CSfxOptions g_SfxOptions[8] = {};
CSfxSample g_SfxSamples[64] = {};
CVector3d g_Cached3DListenerPos;
CVector3d g_Cached3DListenerVelocity;
CVector3d g_Cached3DListenerOrientFront;
CVector3d g_Cached3DListenerOrientUp;
CVector3d g_Cached3DListenerOrientRight;
int g_SfxChannelEnabled[32] = {};
SSoundDeviceInfo g_SoundDevices[8] = {};
void* g_ChannelPrimaryBuffers[8] = {};
CVector3f g_DeferredOrientRight;
SRecordingDeviceInfo g_RecordingDevices[8] = {};
SDirectSoundDeviceInfo g_DirectSoundDevices[8] = {};
IDirectSoundBuffer* g_DirectSoundSampleBuffers[25] = {};
IDirectSoundBuffer* g_DirectSoundHardwareSfxBuffers[31] = {};
IDirectSound3DBuffer* g_DirectSound3DBufferInterfaces[31] = {};
IDirectSoundBufferMetadata g_DirectSoundBufferMetadata[25] = {};
CDirectSoundDevice g_CDirectSoundDeviceInstance;
HWAVEOUT g_WaveOutHandle;
HGLOBAL g_WaveOutHeaderHandles[8] = {};
LPWAVEHDR g_WaveOutHeaders[8] = {};
HGLOBAL g_WaveOutBufferHandles[8] = {};
LPVOID g_WaveOutBuffers[8] = {};
HWAVEIN g_WaveInHandle;
HGLOBAL g_WaveInHeaderHandles[20] = {};
LPWAVEHDR g_WaveInHeaders[20] = {};
HGLOBAL g_WaveInBufferHandles[20] = {};
LPVOID g_WaveInBuffers[20] = {};
CWavOutDevice g_CWavOutDeviceInstance;
CWavInDevice g_CWavInDeviceInstance;
CStrList g_MissingSoundsList;
CSound g_CSoundInstance;
CVector3f g_SoundListenerPrev;
CVector3f CVector3f_03f6af7c;
CVector3f g_SoundListenerOrient;
CStrList g_SoundFileList;
STrainNoise g_TrainNoiseArray[10] = {};
CVector3f g_TrainVelocityVector;
HMODULE g_RendererDLLHandle;
HWND g_StoredWindowHandle;
CDemonActorType g_CSpikeClassInfo;
CSpotView g_CSpotViewInstance;
CDemonActorType g_CStairsClassInfo;
CDemonActorType g_CTempleStoneClassInfo;
CDemonActorType g_CStrangerClassInfo;
CDemonActorType g_CSuccubusClassInfo;
CDemonActorType g_CSvetlanaClassInfo;
CDemonActorType g_CBassPlayerClassInfo;
CDemonActorType g_CDrummerClassInfo;
CDemonActorType g_CTeleportDestClassInfo;
CDemonActorType g_CTeleportClassInfo;
CDemonActorType g_CTentacleClassInfo;
CTextureList g_CTextureListInstance;

