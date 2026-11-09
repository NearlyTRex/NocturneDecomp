// Name: sound_sndmain.cpp_FUN_005514f0
// Address: 005514f0
// Address Range: [[005514f0, 00551568]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005514f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_005514f0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar1 = _DAT_026484b8;
  *(uint *)(_DAT_026484b8 * 4 + 0x2648470) = param_1;
  *(uint *)(iVar1 * 4 + 0x2648478) = param_2;
  *(uint *)(iVar1 * 4 + 0x2648480) = param_3;
  *(uint *)(iVar1 * 4 + 0x2648488) = param_4;
  *(uint *)(iVar1 * 4 + 0x2648490) = param_5;
  *(uint *)(iVar1 * 4 + 0x2648498) = param_6;
  *(uint *)(iVar1 * 4 + 0x26484a0) = param_7;
  *(uint *)(iVar1 * 4 + 0x26484a8) = param_8;
  *(uint *)(iVar1 * 4 + 0x26484b0) = param_9;
  DAT_02649027 = DAT_02649027 | 0x20;
  sound_sndmain_cpp_FUN_00551440();
  return;
}
