// Name: sound_sndmain.cpp_killSfx_FUN_005a9c40
// Address: 005a9c40
// Address Range: [[005a9c40, 005a9c67]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSfx_FUN_005a9c40(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_killSfx_FUN_005a9c40(uint sfx_handle)

{
  CSfxSlot *this_ptr;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}
