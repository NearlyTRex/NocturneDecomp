// Name: sound_sndmain.cpp_FUN_005728b0
// Address: 005728b0
// Address Range: [[005728b0, 005728d6]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005728b0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_005728b0(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78d24) = 2;
  *(uint *)(iVar1 + 0x2c78d20) = param_1;
  return;
}
