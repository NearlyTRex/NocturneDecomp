// Name: sound_sndmain.cpp_killSfx_FUN_00527230
// Address: 00527230
// Address Range: [[00527230, 00527257]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSfx_FUN_00527230(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_killSfx_FUN_00527230(uint sfx_handle)

{
  CSfxSlot *slot;
  
  slot = (CSfxSlot *)sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (slot == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(slot);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
