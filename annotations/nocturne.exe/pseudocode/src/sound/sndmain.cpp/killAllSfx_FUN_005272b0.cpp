// Name: sound_sndmain.cpp_killAllSfx_FUN_005272b0
// Address: 005272b0
// Address Range: [[005272b0, 005272dc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005272b0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005272b0(void)

{
  CSfxSlot *slot;
  
  slot = (CSfxSlot *)0x2dbd374;
  sound_sndmain_cpp_lockSound_FUN_00528800();
  do {
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(slot);
    slot = (CSfxSlot *)((int)&slot->prev_hardware_playback_pos + 4);
  } while (slot != (CSfxSlot *)&DAT_02dc1b74);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
