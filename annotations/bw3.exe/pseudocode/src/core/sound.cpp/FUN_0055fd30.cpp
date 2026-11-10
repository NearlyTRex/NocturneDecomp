// Name: core_sound.cpp_FUN_0055fd30
// Address: 0055fd30
// Address Range: [[0055fd30, 0055fedb]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0055fd30(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_FUN_0055fd30(CSound *this_ptr)

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
  uint local_8;
  
  bVar2 = 0;
  _DAT_02cf5698 = 0;
  _DAT_02cf569c = 0;
  _DAT_02cf56a0 = 0;
  _DAT_02cf568c = 0x501502f9;
  _DAT_02cf5690 = 0x501502f9;
  _DAT_02cf5694 = 0x501502f9;
  sound_sndmain_cpp_FUN_00557100();
  core_sound_cpp_updateListeners_FUN_0055e8b0();
  _DAT_02cf569c = 0;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_00558860(_DAT_02cf56a4,_DAT_02cf56a8,_DAT_02cf56ac)
  ;
  sound_sndmain_cpp_enableSoundSystem_FUN_00558050();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005586c0();
  if (iVar1 == 0) {
    return;
  }
  _DAT_02cf5ec8 = 0x3f800000;
  _DAT_02cf5ecc = 0x3f800000;
  _DAT_02cf5ed0 = 0;
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(0);
  if (iVar1 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(3,1);
    local_8 = sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20();
    sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90();
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
  sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(3);
  _DAT_02cf5ec0 =
       core_sound_cpp_CSound_playSound_FUN_005609b0(this_ptr,g_CDemonSetPtr,&DAT_02cf5e98);
  sound_sndmain_cpp_popSfxOptions_FUN_00556050();
  if (g_CDemonSetPtr->player_on_train != 0) {
    local_14 = -*(float *)&g_CDemonSetPtr->field_0x15ac70;
    local_10 = -*(float *)&g_CDemonSetPtr->field_0x15ac74;
    local_c = -*(float *)&g_CDemonSetPtr->field_0x15ac78;
    local_20 = -*(float *)&g_CDemonSetPtr->field_0x15ac70;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (&stack0x00000000 != g_CSpawnerClassInfo.class_name + 4) {
      _DAT_02cf5f74 = local_20;
      _DAT_02cf5f78 = local_1c;
      _DAT_02cf5f7c = local_18;
    }
    _DAT_02cf5f84 = 0xffffffff;
  }
  core_event_cpp_CEventList_restartSfxEntries_FUN_004953d0(0x01C6E360);
  _DAT_02cf5ec4 = 1;
  return;
}
