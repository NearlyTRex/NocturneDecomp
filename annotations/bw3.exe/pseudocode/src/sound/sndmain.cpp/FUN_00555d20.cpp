// Name: sound_sndmain.cpp_FUN_00555d20
// Address: 00555d20
// Address Range: [[00555d20, 00555d46]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00555d20(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00555d20(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(uint *)(iVar1 + 0x2ceb940) = 2;
  *(uint *)(iVar1 + 0x2ceb93c) = param_1;
  return;
}
