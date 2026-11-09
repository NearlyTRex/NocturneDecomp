// Name: sound_sndmain.cpp_FUN_00572810
// Address: 00572810
// Address Range: [[00572810, 00572836]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00572810(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00572810(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78d10) = 2;
  *(uint *)(iVar1 + 0x2c78d0c) = param_1;
  return;
}
