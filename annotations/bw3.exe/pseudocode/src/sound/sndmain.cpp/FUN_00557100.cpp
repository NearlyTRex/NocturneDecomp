// Name: sound_sndmain.cpp_FUN_00557100
// Address: 00557100
// Address Range: [[00557100, 00557136]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00557100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00557100(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar1 = _DAT_02cf28b8;
  *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2858) = param_1;
  *(uint *)(iVar1 * 4 + 0x2cf2860) = param_2;
  *(uint *)(iVar1 * 4 + 0x2cf2868) = param_3;
  DAT_02cf3424 = DAT_02cf3424 | 4;
  sound_sndmain_cpp_FUN_00556fd0();
  return;
}
