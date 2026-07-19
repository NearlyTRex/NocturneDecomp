// Name: sound_sndmain.cpp_killAllSfx_FUN_005a9cc0
// Address: 005a9cc0
// Address Range: [[005a9cc0, 005a9cec]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005a9cc0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005a9cc0(void)

{
  CSfxSlot *slot;
  
  slot = g_SfxSlots;
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  do {
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(slot);
    slot = slot + 1;
  } while (slot != g_SfxSlots + sizeof(g_SfxSlots) / sizeof(g_SfxSlots[0]));
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}
