// Name: core_sound.cpp_FUN_0057cc00
// Address: 0057cc00
// Address Range: [[0057cc00, 0057cdab]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0057cc00(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_FUN_0057cc00(CSound *this_ptr)

{
  int iVar1;
  byte bVar2;
  float afStackY_1008 [1013];
  float local_20;
  uint local_1c;
  uint local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  bVar2 = 0;
  _DAT_02c82a78 = 0;
  _DAT_02c82a7c = 0;
  _DAT_02c82a80 = 0;
  _DAT_02c82a6c = 0x501502f9;
  _DAT_02c82a70 = 0x501502f9;
  _DAT_02c82a74 = 0x501502f9;
  sound_sndmain_cpp_set3DListenerVelocity_FUN_00573fa0(0.0,0.0,0.0);
  core_sound_cpp_updateListeners_FUN_0057b780();
  _DAT_02c82a7c = 0;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_005756f0(_DAT_02c82a84,_DAT_02c82a88,_DAT_02c82a8c)
  ;
  sound_sndmain_cpp_enableSoundSystem_FUN_00574ee0();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00575550();
  if (iVar1 == 0) {
    return;
  }
  _DAT_02c832a8 = 1.0;
  _DAT_02c832ac = 0x3f800000;
  _DAT_02c832b0 = 0;
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(0);
  if (iVar1 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(3,1);
    local_8 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(3,local_8 * _DAT_02c832a8);
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
  sound_sndmain_cpp_setNextSfxChannel_FUN_00572980(3);
  _DAT_02c832a0 =
       core_sound_cpp_CSound_playSound_FUN_0057d880(this_ptr,g_CDemonSetPtr,&DAT_02c83278);
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
    if (&stack0x00000000 != &DAT_02c83374) {
      _DAT_02c83354 = local_20;
      _DAT_02c83358 = local_1c;
      _DAT_02c8335c = local_18;
    }
    _DAT_02c83364 = 0xffffffff;
  }
  core_event_cpp_CEventList_restartSfxEntries_FUN_004aa550(0x01C51D80);
  _DAT_02c832a4 = 1;
  return;
}
