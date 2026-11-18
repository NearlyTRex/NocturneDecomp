// Name: sound_sndmain.cpp_enableSoundSystem_FUN_00527e40
// Address: 00527e40
// Address Range: [[00527e40, 00528074]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00527e40(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00527e40(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uStack00000084;
  
  uVar2 = sound_sndmain_cpp_isSoundSystemActive_FUN_00528480();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00526ca0();
  if (iVar3 != 0) {
    iVar3 = sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
    return iVar3;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
  if (iVar3 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_00528800();
  iVar3 = sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0
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
              (g_CSoundDevicePtr,__BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc78e0._4_4_,g_DOUBLE_02dc78e0._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc78e8._4_4_,g_DOUBLE_02dc78e8._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc78f0._4_4_,g_DOUBLE_02dc78f0._0_4_)));
    (*g_CSoundDevicePtr->vtable->set3DListenerOrient)
              (g_CSoundDevicePtr,__BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc7910._4_4_,g_DOUBLE_02dc7910._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc7918._4_4_,g_DOUBLE_02dc7918._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc7920._4_4_,g_DOUBLE_02dc7920._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_Cached3DListenerOrientUp.x._4_4_,
                                g_Cached3DListenerOrientUp.x._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_Cached3DListenerOrientUp.y._4_4_,
                                g_Cached3DListenerOrientUp.y._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_Cached3DListenerOrientUp.z._4_4_,
                                g_Cached3DListenerOrientUp.z._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_Cached3DListenerOrientRight.x._4_4_,
                                g_Cached3DListenerOrientRight.x._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_Cached3DListenerOrientRight.y._4_4_,
                                g_Cached3DListenerOrientRight.y._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_Cached3DListenerOrientRight.z._4_4_,
                                g_Cached3DListenerOrientRight.z._0_4_)));
    (*g_CSoundDevicePtr->vtable->set3DListenerVelocity)
              (g_CSoundDevicePtr,__BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc78f8._4_4_,g_DOUBLE_02dc78f8._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc7900._4_4_,g_DOUBLE_02dc7900._0_4_)),
               __BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc7908._4_4_,g_DOUBLE_02dc7908._0_4_)));
    (*g_CSoundDevicePtr->vtable->set3DListenerDistanceFactor)
              (g_CSoundDevicePtr,
               __BITCAST_DOUBLE(CONCAT44(g_Cached3DDistanceFactor._4_4_,g_Cached3DDistanceFactor._0_4_)));
    (*g_CSoundDevicePtr->vtable->commitDeferredSettings)(g_CSoundDevicePtr);
    g_SoundStartTime = wincore_winrun_cpp_getTime_FUN_00558a30();
    iVar3 = (*g_CSoundDevicePtr->vtable->start)(g_CSoundDevicePtr);
    if (iVar3 != 0) {
      g_SoundBusyFlag = 1;
      uStack00000084 = 0x528062;
      sound_sndmain_cpp_unlockSound_FUN_00528890();
      return 1;
    }
  }
  uStack00000084 = 0x52806e;
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 0;
}
