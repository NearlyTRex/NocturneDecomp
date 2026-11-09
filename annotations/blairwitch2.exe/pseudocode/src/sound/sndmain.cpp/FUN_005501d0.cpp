// Name: sound_sndmain.cpp_FUN_005501d0
// Address: 005501d0
// Address Range: [[005501d0, 0055020e]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005501d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_005501d0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641644) = param_1;
  *(uint *)(iVar1 + 0x2641648) = param_2;
  *(uint *)(iVar1 + 0x264164c) = param_3;
  *(uint *)(iVar1 + 0x2641650) = 0;
  *(uint *)(iVar1 + 0x2641654) = 0;
  return;
}
