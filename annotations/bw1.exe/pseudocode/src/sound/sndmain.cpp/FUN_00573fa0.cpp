// Name: sound_sndmain.cpp_FUN_00573fa0
// Address: 00573fa0
// Address Range: [[00573fa0, 00573fd6]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00573fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00573fa0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar1 = _DAT_02c7fc88;
  *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc28) = param_1;
  *(uint *)(iVar1 * 4 + 0x2c7fc30) = param_2;
  *(uint *)(iVar1 * 4 + 0x2c7fc38) = param_3;
  DAT_02c807f4 = DAT_02c807f4 | 4;
  sound_sndmain_cpp_FUN_00573e70();
  return;
}
