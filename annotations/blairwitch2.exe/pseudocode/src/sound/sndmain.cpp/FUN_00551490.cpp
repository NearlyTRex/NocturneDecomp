// Name: sound_sndmain.cpp_FUN_00551490
// Address: 00551490
// Address Range: [[00551490, 005514e7]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00551490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00551490(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar1 = _DAT_026484b8;
  *(uint *)(&DAT_02648428 + _DAT_026484b8 * 8) = param_1;
  *(uint *)(iVar1 * 8 + 0x264842c) = param_2;
  *(uint *)(&DAT_02648438 + iVar1 * 8) = param_3;
  *(uint *)(iVar1 * 8 + 0x264843c) = param_4;
  *(uint *)(&DAT_02648448 + iVar1 * 8) = param_5;
  *(uint *)(iVar1 * 8 + 0x264844c) = param_6;
  DAT_02649024 = DAT_02649024 | 2;
  sound_sndmain_cpp_FUN_00551440();
  return;
}
