// Name: core_sound.cpp_FUN_0055a1d0
// Address: 0055a1d0
// Address Range: [[0055a1d0, 0055a35f]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0055a1d0(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_FUN_0055a1d0(CSound *this_ptr)

{
  int iVar1;
  byte bVar2;
  float afStackY_100c [1015];
  float local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  float local_14;
  float local_10;
  uint local_c;
  
  bVar2 = 0;
  _DAT_0264b2a8 = 0;
  _DAT_0264b2ac = 0;
  _DAT_0264b2b0 = 0;
  _DAT_0264b29c = 0x501502f9;
  _DAT_0264b2a0 = 0x501502f9;
  _DAT_0264b2a4 = 0x501502f9;
  sound_sndmain_cpp_FUN_00551570();
  core_sound_cpp_updateListeners_FUN_00558d50();
  _DAT_0264b2ac = 0;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_00552cc0();
  sound_sndmain_cpp_enableSoundSystem_FUN_005524b0();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00552b20();
  if (iVar1 == 0) {
    return;
  }
  _DAT_0264bad8 = 0x3f800000;
  _DAT_0264badc = 0x3f800000;
  _DAT_0264bae0 = 0;
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(0);
  if (iVar1 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00551220(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00551220(3,1);
    local_c = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190();
    sound_sndmain_cpp_setSfxChannelVol_FUN_00551100();
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
      _DAT_0264bb84 = local_24;
      _DAT_0264bb88 = local_20;
      _DAT_0264bb8c = local_1c;
    }
    _DAT_0264bb94 = 0xffffffff;
  }
  core_event_cpp_CEventList_restartSfxEntries_FUN_00491be0(0x01C38BC0);
  _DAT_0264bad4 = 1;
  return;
}
