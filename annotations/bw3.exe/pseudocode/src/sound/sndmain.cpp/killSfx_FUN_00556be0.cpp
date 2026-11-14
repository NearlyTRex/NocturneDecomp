// Name: sound_sndmain.cpp_killSfx_FUN_00556be0
// Address: 00556be0
// Address Range: [[00556be0, 00556c07]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSfx_FUN_00556be0(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_killSfx_FUN_00556be0(uint sfx_handle)

{
  CSfxSlot *this_ptr;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_00552f10(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return 1;
}
