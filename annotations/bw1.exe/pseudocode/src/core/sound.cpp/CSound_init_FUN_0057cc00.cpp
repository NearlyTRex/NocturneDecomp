// Name: core_sound.cpp_CSound_init_FUN_0057cc00
// Address: 0057cc00
// Address Range: [[0057cc00, 0057cdab]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_init_FUN_0057cc00(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_init_FUN_0057cc00(CSound *this_ptr)

{
  int iVar1;
  byte bVar2;
  float afStackY_1008 [1013];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  bVar2 = 0;
  g_FLOAT_02c82a78 = 0.0;
  g_FLOAT_02c82a7c = 0.0;
  g_FLOAT_02c82a80 = 0.0;
  g_FLOAT_02c82a6c = 1e+10;
  g_FLOAT_02c82a70 = 1e+10;
  g_FLOAT_02c82a74 = 1e+10;
  sound_sndmain_cpp_set3DListenerVelocity_FUN_00573fa0(0.0,0.0,0.0);
  core_sound_cpp_updateListeners_FUN_0057b780();
  g_FLOAT_02c82a7c = 0.0;
  sound_sndmain_cpp_setReverb_FUN_005756f0
            (g_SoundReverb.volume,g_SoundReverb.decay_time,g_SoundReverb.damping);
  sound_sndmain_cpp_enableSoundSystem_FUN_00574ee0();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00575550();
  if (iVar1 == 0) {
    return;
  }
  g_FLOAT_02c832a8 = 1.0;
  g_FLOAT_02c832ac = 1.0;
  g_FLOAT_02c832b0 = 0.0;
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(0);
  if (iVar1 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(3,1);
    local_8 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(3,local_8 * g_FLOAT_02c832a8);
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
  sound_sndmain_cpp_setNextSfxChannel_FUN_00572980(3);
  g_INT_02c832a0 =
       core_sound_cpp_CSound_playSound_FUN_0057d880(this_ptr,g_CDemonSetPtr,g_CHAR_ARRAY_02c83278);
  sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  if (g_CDemonSetPtr->player_on_train != 0) {
    local_14 = -(g_CDemonSetPtr->active_fog).scroll.x;
    local_10 = -(g_CDemonSetPtr->active_fog).scroll.y;
    local_c = -(g_CDemonSetPtr->active_fog).scroll.z;
    local_20 = local_14;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if ((int *)&stack0x00000000 != &g_INT_02c83374) {
      g_CVector3f_02c83354.x = local_20;
      g_CVector3f_02c83354.y = local_1c;
      g_CVector3f_02c83354.z = local_18;
    }
    g_INT_02c83364 = -1;
  }
  core_event_cpp_CEventList_restartSfxEntries_FUN_004aa550(g_CEventList_PTR_0061b4d0);
  g_INT_02c832a4 = 1;
  return;
}
