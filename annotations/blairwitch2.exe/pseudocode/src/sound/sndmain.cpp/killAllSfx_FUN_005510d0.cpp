// Name: sound_sndmain.cpp_killAllSfx_FUN_005510d0
// Address: 005510d0
// Address Range: [[005510d0, 005510fc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005510d0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005510d0(void)

{
  CSfxSlot *this_ptr;
  
  this_ptr = (CSfxSlot *)0x263cf1c;
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  do {
    sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSlot *)&DAT_0264161c);
  sound_sndmain_cpp_FUN_00551440();
  return;
}
