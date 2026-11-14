// Name: sound_sndmain.cpp_killSfx_FUN_00573a80
// Address: 00573a80
// Address Range: [[00573a80, 00573aa7]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSfx_FUN_00573a80(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_killSfx_FUN_00573a80(uint sfx_handle)

{
  CSfxSlot *this_ptr;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr);
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 1;
}
