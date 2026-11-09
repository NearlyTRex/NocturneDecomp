// Name: sound_sndmain.cpp_FUN_00572840
// Address: 00572840
// Address Range: [[00572840, 0057287e]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00572840(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00572840(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78d14) = param_1;
  *(uint *)(iVar1 + 0x2c78d18) = param_2;
  *(uint *)(iVar1 + 0x2c78d1c) = param_3;
  *(uint *)(iVar1 + 0x2c78d20) = 0;
  *(uint *)(iVar1 + 0x2c78d24) = 0;
  return;
}
