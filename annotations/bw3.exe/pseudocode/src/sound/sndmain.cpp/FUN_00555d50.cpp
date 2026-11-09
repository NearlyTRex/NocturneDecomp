// Name: sound_sndmain.cpp_FUN_00555d50
// Address: 00555d50
// Address Range: [[00555d50, 00555d8e]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00555d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00555d50(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(uint *)(iVar1 + 0x2ceb944) = param_1;
  *(uint *)(iVar1 + 0x2ceb948) = param_2;
  *(uint *)(iVar1 + 0x2ceb94c) = param_3;
  *(uint *)(iVar1 + 0x2ceb950) = 0;
  *(uint *)(iVar1 + 0x2ceb954) = 0;
  return;
}
