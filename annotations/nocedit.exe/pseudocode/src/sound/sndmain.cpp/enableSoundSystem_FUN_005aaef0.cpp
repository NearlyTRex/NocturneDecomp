// Name: sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
// Address: 005aaef0
// Address Range: [[005aaef0, 005ab124]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uStack0000006c;
  
  uVar2 = sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
  if (iVar3 != 0) {
    iVar3 = sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    return iVar3;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar3 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar3 = sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170
                    (g_AudioBitsPerSample,g_AudioChannelCount,g_AudioSampleRate);
  if (iVar3 != 0) {
    if ((0 < g_NumMixBuffers) && (iVar3 = 0, 0 < g_AudioChannelCount)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)((int)g_ChannelPrimaryBuffers + iVar4);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        crt_memory_c_memset_FUN_005fde40((void *)*puVar1,0,g_MixBufferSize * g_NumMixBuffers * 4);
      } while (iVar3 < g_AudioChannelCount);
    }
    g_MixBufferReadIndex = 0;
    g_MixBufferWriteIndex = 0;
    (*g_CSoundDevicePtr->vtable->set3DListenerPos)
              (g_CSoundDevicePtr,
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerPos.x._4_4_,g_Cached3DListenerPos.x._0_4_),
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerPos.y._4_4_,g_Cached3DListenerPos.y._0_4_),
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerPos.z._4_4_,g_Cached3DListenerPos.z._0_4_));
    (*g_CSoundDevicePtr->vtable->set3DListenerOrient)
              (g_CSoundDevicePtr,
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerOrientFront.x._4_4_,
                                g_Cached3DListenerOrientFront.x._0_4_),
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerOrientFront.y._4_4_,
                                g_Cached3DListenerOrientFront.y._0_4_),
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerOrientFront.z._4_4_,
                                g_Cached3DListenerOrientFront.z._0_4_),
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerOrientUp.x._4_4_,
                                g_Cached3DListenerOrientUp.x._0_4_),
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerOrientUp.y._4_4_,
                                g_Cached3DListenerOrientUp.y._0_4_),
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerOrientUp.z._4_4_,
                                g_Cached3DListenerOrientUp.z._0_4_));
    (*g_CSoundDevicePtr->vtable->set3DListenerVelocity)
              (g_CSoundDevicePtr,
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerVelocity.x._4_4_,
                                g_Cached3DListenerVelocity.x._0_4_),
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerVelocity.y._4_4_,
                                g_Cached3DListenerVelocity.y._0_4_),
               (double)CONCAT44 /* combine 2-byte values */(g_Cached3DListenerVelocity.z._4_4_,
                                g_Cached3DListenerVelocity.z._0_4_));
    (*g_CSoundDevicePtr->vtable->set3DListenerDistanceFactor)
              (g_CSoundDevicePtr,(double)CONCAT44 /* combine 2-byte values */(DOUBLE_00681b30._4_4_,DOUBLE_00681b30._0_4_));
    (*g_CSoundDevicePtr->vtable->commitDeferredSettings)(g_CSoundDevicePtr);
    g_SoundStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar3 = (*g_CSoundDevicePtr->vtable->start)(g_CSoundDevicePtr);
    if (iVar3 != 0) {
      g_SoundBusyFlag = 1;
      uStack0000006c = 0x5ab112;
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return 1;
    }
  }
  uStack0000006c = 0x5ab11e;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 0;
}
