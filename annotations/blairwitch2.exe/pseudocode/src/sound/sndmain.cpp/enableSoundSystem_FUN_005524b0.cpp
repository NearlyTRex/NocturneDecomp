// Name: sound_sndmain.cpp_enableSoundSystem_FUN_005524b0
// Address: 005524b0
// Address Range: [[005524b0, 005526a2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_005524b0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_005524b0(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uStack0000005c;
  
  uVar2 = sound_sndmain_cpp_isSoundSystemActive_FUN_00552b10();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
  if (iVar3 != 0) {
    iVar3 = sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
    return iVar3;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_00552b20();
  if (iVar3 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar3 = sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0
                    (g_AudioBitsPerSample,g_AudioChannelCount,g_AudioSampleRate);
  if (iVar3 != 0) {
    if ((0 < g_NumMixBuffers) && (iVar3 = 0, 0 < g_AudioChannelCount)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)((int)g_ChannelPrimaryBuffers + iVar4);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        memset((void *)*puVar1,0,g_MixBufferSize * g_NumMixBuffers * 4);
      } while (iVar3 < g_AudioChannelCount);
    }
    g_MixBufferReadIndex = 0;
    g_MixBufferWriteIndex = 0;
    (*g_CSoundDevicePtr->vtable->set3DListenerPos)
              (g_CSoundDevicePtr,
               __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&g_DOUBLE_02648428 + g_INT_026484b8 * 8 + 4),
                                *(uint *)(&g_DOUBLE_02648428 + g_INT_026484b8))),
               __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&g_DOUBLE_02648438 + g_INT_026484b8 * 8 + 4),
                                *(uint *)(&g_DOUBLE_02648438 + g_INT_026484b8))),
               __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&g_DOUBLE_02648448 + g_INT_026484b8 * 8 + 4),
                                *(uint *)(&g_DOUBLE_02648448 + g_INT_026484b8))));
    (*g_CSoundDevicePtr->vtable->set3DListenerOrient)
              (g_CSoundDevicePtr,*(float *)(g_INT_026484b8 * 4 + 0x2648470),
               *(float *)(g_INT_026484b8 * 4 + 0x2648478),*(float *)(g_INT_026484b8 * 4 + 0x2648480)
               ,*(float *)(g_INT_026484b8 * 4 + 0x2648488),
               *(float *)(g_INT_026484b8 * 4 + 0x2648490),*(float *)(g_INT_026484b8 * 4 + 0x2648498)
               ,*(float *)(g_INT_026484b8 * 4 + 0x26484a0),
               *(float *)(g_INT_026484b8 * 4 + 0x26484a8),*(float *)(g_INT_026484b8 * 4 + 0x26484b0)
              );
    (*g_CSoundDevicePtr->vtable->set3DListenerVelocity)
              (g_CSoundDevicePtr,*(float *)((int)&g_CVector3d_02648458.x + g_INT_026484b8 * 4),
               *(float *)((int)&g_CVector3d_02648458.y + g_INT_026484b8 * 4),
               *(float *)((int)&g_CVector3d_02648458.z + g_INT_026484b8 * 4));
    (*g_CSoundDevicePtr->vtable->set3DListenerDistanceFactor)(g_CSoundDevicePtr,g_FLOAT_0061bcb4);
    (*g_CSoundDevicePtr->vtable->setReverb)
              (g_CSoundDevicePtr,g_CachedReverb.volume,g_CachedReverb.decay_time,
               g_CachedReverb.damping);
    g_SoundStartTime = wincore_winrun_cpp_getTime_FUN_0058e9e0();
    iVar3 = (*g_CSoundDevicePtr->vtable->start)(g_CSoundDevicePtr);
    if (iVar3 != 0) {
      g_SoundBusyFlag = 1;
      uStack0000005c = 0x55268d;
      sound_sndmain_cpp_unlockSound_FUN_00551440();
      return 1;
    }
  }
  uStack0000005c = 0x55269c;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 0;
}
