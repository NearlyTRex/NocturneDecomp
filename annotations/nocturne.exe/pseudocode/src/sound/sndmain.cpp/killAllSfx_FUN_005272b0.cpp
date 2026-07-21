// Name: sound_sndmain.cpp_killAllSfx_FUN_005272b0
// Address: 005272b0
// Address Range: [[005272b0, 005272dc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005272b0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005272b0(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x2dbd374;
  sound_sndmain_cpp_lockSound_FUN_00528800();
  do {
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(puVar1);
    puVar1 = puVar1 + 0x120;
  } while (puVar1 != &DAT_02dc1b74);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
