// Name: core_sound.cpp_CSound_init_FUN_0052ddf0
// Address: 0052ddf0
// Address Range: [[0052ddf0, 0052df86]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_init_FUN_0052ddf0(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_init_FUN_0052ddf0(CSound *this_ptr)

{
  int iVar1;
  float fVar2;
  
  _DAT_02dc9468 = 0;
  _DAT_02dc946c = 0;
  _DAT_02dc9470 = 0;
  _DAT_02dc945c = 0x501502f9;
  _DAT_02dc9460 = 0x501502f9;
  _DAT_02dc9464 = 0x501502f9;
  sound_sndmain_cpp_set3DListenerVelocity_FUN_005277b0(0.0,0.0,0.0);
  core_sound_cpp_updateListeners_FUN_0052c9d0();
  _DAT_02dc946c = 0;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(_DAT_02dc9474,_DAT_02dc9478,_DAT_02dc947c)
  ;
  sound_sndmain_cpp_enableSoundSystem_FUN_00527e40();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
  if (iVar1 == 0) {
    return;
  }
  _DAT_02dc9c98 = 1.0;
  _DAT_02dc9c9c = 0x3f800000;
  _DAT_02dc9ca0 = 0;
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
  if (iVar1 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(3,1);
    fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(3,fVar2 * _DAT_02dc9c98);
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(3);
  _DAT_02dc9c90 = core_sound_cpp_CSound_playSound_FUN_0052ea40(this_ptr,0x01E57284,&DAT_02dc9c68);
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  if (*(int *)((int)0x01E57284 + 0x15a8c0) != 0) {
    if (&stack0x00000000 != &DAT_02dc9d58) {
      _DAT_02dc9d44 = -*(float *)((int)0x01E57284 + 0x15a878);
      _DAT_02dc9d48 = -*(float *)((int)0x01E57284 + 0x15a87c);
      _DAT_02dc9d4c = -*(float *)((int)0x01E57284 + 0x15a880);
    }
    _DAT_02dc9d54 = 0xffffffff;
  }
  core_event_cpp_CEventList_restartSfxEntries_FUN_00480eb0(0x01C03A10);
  _DAT_02dc9c94 = 1;
  return;
}
