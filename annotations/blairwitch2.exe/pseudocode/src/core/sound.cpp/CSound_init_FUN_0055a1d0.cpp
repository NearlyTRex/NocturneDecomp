// Name: core_sound.cpp_CSound_init_FUN_0055a1d0
// Address: 0055a1d0
// Address Range: [[0055a1d0, 0055a35f]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_init_FUN_0055a1d0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_init_FUN_0055a1d0(CSound *this_ptr)

{
  int iVar1;
  byte bVar2;
  float afStackY_100c [1015];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  bVar2 = 0;
  g_FLOAT_0264b2a8 = 0.0;
  g_FLOAT_0264b2ac = 0.0;
  g_FLOAT_0264b2b0 = 0.0;
  g_FLOAT_0264b29c = 1e+10;
  g_FLOAT_0264b2a0 = 1e+10;
  g_FLOAT_0264b2a4 = 1e+10;
  sound_sndmain_cpp_set3DListenerVelocity_FUN_00551570(0.0,0.0,0.0);
  core_sound_cpp_updateListeners_FUN_00558d50();
  g_FLOAT_0264b2ac = 0.0;
  sound_sndmain_cpp_setReverb_FUN_00552cc0
            (g_SoundReverb.volume,g_SoundReverb.decay_time,g_SoundReverb.damping);
  sound_sndmain_cpp_enableSoundSystem_FUN_005524b0();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00552b20();
  if (iVar1 == 0) {
    return;
  }
  g_CurrentVolumeMultiplier = 1.0;
  g_TargetVolumeMultiplier = 1.0;
  g_VolumeFadeTimeRemaining = 0.0;
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(0);
  if (iVar1 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00551220(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00551220(3,1);
    local_c = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(3,local_c * g_CurrentVolumeMultiplier);
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  if (g_CDemonSetPtr->player_on_train != 0) {
    local_18 = -(g_CDemonSetPtr->active_fog).scroll.x;
    local_14 = -(g_CDemonSetPtr->active_fog).scroll.y;
    local_10 = -(g_CDemonSetPtr->active_fog).scroll.z;
    local_24 = local_18;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (&stack0x00000000 != (byte *)0x264bba8) {
      g_CVector3f_0264bb84.x = local_24;
      g_CVector3f_0264bb84.y = local_20;
      g_CVector3f_0264bb84.z = local_1c;
    }
    g_TrainLastCameraIndex = -1;
  }
  core_event_cpp_CEventList_restartSfxEntries_FUN_00491be0(g_CEventListPtr);
  g_SoundAudioInitialized = 1;
  return;
}
