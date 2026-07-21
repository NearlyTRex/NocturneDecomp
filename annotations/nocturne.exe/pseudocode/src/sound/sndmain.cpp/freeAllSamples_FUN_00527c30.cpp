// Name: sound_sndmain.cpp_freeAllSamples_FUN_00527c30
// Address: 00527c30
// Address Range: [[00527c30, 00527c61]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_00527c30(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_00527c30(void)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  iVar1 = 0x2dc1edc;
  sound_sndmain_cpp_killAllSfx_FUN_005272b0();
  do {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(iVar1);
    iVar1 = iVar1 + 0x168;
  } while (iVar1 != 0x2dc78dc);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
