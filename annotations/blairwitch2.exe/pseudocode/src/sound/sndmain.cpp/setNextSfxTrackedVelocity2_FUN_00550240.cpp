// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity2_FUN_00550240
// Address: 00550240
// Address Range: [[00550240, 00550266]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00550240(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00550240(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641654) = 2;
  *(uint *)(iVar1 + 0x2641650) = param_1;
  return;
}
