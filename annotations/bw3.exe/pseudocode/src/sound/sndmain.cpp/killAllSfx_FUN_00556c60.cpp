// Name: sound_sndmain.cpp_killAllSfx_FUN_00556c60
// Address: 00556c60
// Address Range: [[00556c60, 00556c8c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killAllSfx_FUN_00556c60(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killAllSfx_FUN_00556c60(void)

{
  CSfxSlot *this_ptr;
  
  this_ptr = (CSfxSlot *)0x2ce721c;
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  do {
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSlot *)&DAT_02ceb91c);
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return;
}
