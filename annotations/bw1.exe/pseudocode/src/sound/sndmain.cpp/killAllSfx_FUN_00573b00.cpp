// Name: sound_sndmain.cpp_killAllSfx_FUN_00573b00
// Address: 00573b00
// Address Range: [[00573b00, 00573b2c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killAllSfx_FUN_00573b00(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killAllSfx_FUN_00573b00(void)

{
  CSfxSlot *this_ptr;
  
  this_ptr = (CSfxSlot *)0x2c745ec;
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  do {
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSlot *)&DAT_02c78cec);
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return;
}
