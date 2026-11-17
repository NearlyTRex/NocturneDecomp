// Name: core_sound.cpp_CSound_init_FUN_0055fd30
// Address: 0055fd30
// Address Range: [[0055fd30, 0055fedb]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_init_FUN_0055fd30(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_init_FUN_0055fd30(CSound *this_ptr)

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
  g_FLOAT_02cf5698 = 0.0;
  g_FLOAT_02cf569c = 0.0;
  g_FLOAT_02cf56a0 = 0.0;
  g_FLOAT_02cf568c = 1e+10;
  g_FLOAT_02cf5690 = 1e+10;
  g_FLOAT_02cf5694 = 1e+10;
  sound_sndmain_cpp_set3DListenerVelocity_FUN_00557100(0.0,0.0,0.0);
  core_sound_cpp_updateListeners_FUN_0055e8b0();
  g_FLOAT_02cf569c = 0.0;
  sound_sndmain_cpp_setReverb_FUN_00558860
            (g_SoundReverb.volume,g_SoundReverb.decay_time,g_SoundReverb.damping);
  sound_sndmain_cpp_enableSoundSystem_FUN_00558050();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005586c0();
  if (iVar1 == 0) {
    return;
  }
  g_FLOAT_02cf5ec8 = 1.0;
  g_FLOAT_02cf5ecc = 1.0;
  g_FLOAT_02cf5ed0 = 0.0;
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(0);
  if (iVar1 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(3,1);
    local_8 = sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(3,local_8 * g_FLOAT_02cf5ec8);
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
  sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(3);
  g_INT_02cf5ec0 =
       core_sound_cpp_CSound_playSound_FUN_005609b0(this_ptr,g_CDemonSetPtr,g_CHAR_ARRAY_02cf5e98);
  sound_sndmain_cpp_popSfxOptions_FUN_00556050();
  if (g_CDemonSetPtr->player_on_train != 0) {
    local_14 = -(g_CDemonSetPtr->active_fog).scroll.x;
    local_10 = -(g_CDemonSetPtr->active_fog).scroll.y;
    local_c = -(g_CDemonSetPtr->active_fog).scroll.z;
    local_20 = local_14;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (&stack0x00000000 != g_CSpawnerClassInfo.class_name + 4) {
      g_CVector3f_02cf5f74.x = local_20;
      g_CVector3f_02cf5f74.y = local_1c;
      g_CVector3f_02cf5f74.z = local_18;
    }
    g_INT_02cf5f84 = -1;
  }
  core_event_cpp_CEventList_restartSfxEntries_FUN_004953d0(g_CEventList_PTR_005fba60);
  g_INT_02cf5ec4 = 1;
  return;
}
