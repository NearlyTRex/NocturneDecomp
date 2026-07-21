// Name: sound_sndmain.cpp_killSfx_FUN_00527230
// Address: 00527230
// Address Range: [[00527230, 00527257]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_killSfx_FUN_00527230(undefined4 param_1)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_killSfx_FUN_00527230(uint param_1)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(iVar1);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
