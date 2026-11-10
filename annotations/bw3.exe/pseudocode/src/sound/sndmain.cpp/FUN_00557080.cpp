// Name: sound_sndmain.cpp_FUN_00557080
// Address: 00557080
// Address Range: [[00557080, 005570f8]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00557080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00557080(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar1 = _DAT_02cf28b8;
  *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2870) = param_1;
  *(uint *)(iVar1 * 4 + 0x2cf2878) = param_2;
  *(uint *)(iVar1 * 4 + 0x2cf2880) = param_3;
  *(uint *)(iVar1 * 4 + 0x2cf2888) = param_4;
  *(uint *)(iVar1 * 4 + 0x2cf2890) = param_5;
  *(uint *)(iVar1 * 4 + 0x2cf2898) = param_6;
  *(uint *)(iVar1 * 4 + 0x2cf28a0) = param_7;
  *(uint *)(iVar1 * 4 + 0x2cf28a8) = param_8;
  *(uint *)(iVar1 * 4 + 0x2cf28b0) = param_9;
  DAT_02cf3427 = DAT_02cf3427 | 0x20;
  sound_sndmain_cpp_FUN_00556fd0();
  return;
}
