// Name: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005501a0
// Address: 005501a0
// Address Range: [[005501a0, 005501c6]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005501a0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005501a0(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641640) = 2;
  *(uint *)(iVar1 + 0x264163c) = param_1;
  return;
}
