// Name: sound_sndmain.cpp_killSfx_FUN_00551050
// Address: 00551050
// Address Range: [[00551050, 00551077]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSfx_FUN_00551050(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_killSfx_FUN_00551050(uint sfx_handle)

{
  CSfxSlot *this_ptr;
  
  this_ptr = sound_sndmain_cpp_FUN_0054d3a0(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
  sound_sndmain_cpp_FUN_00551440();
  return 1;
}
