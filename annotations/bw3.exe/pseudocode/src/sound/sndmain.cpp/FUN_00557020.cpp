// Name: sound_sndmain.cpp_FUN_00557020
// Address: 00557020
// Address Range: [[00557020, 00557077]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00557020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00557020(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar1 = _DAT_02cf28b8;
  *(uint *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8) = param_1;
  *(uint *)(iVar1 * 8 + 0x2cf282c) = param_2;
  *(uint *)(&DAT_02cf2838 + iVar1 * 8) = param_3;
  *(uint *)(iVar1 * 8 + 0x2cf283c) = param_4;
  *(uint *)(&DAT_02cf2848 + iVar1 * 8) = param_5;
  *(uint *)(iVar1 * 8 + 0x2cf284c) = param_6;
  DAT_02cf3424 = DAT_02cf3424 | 2;
  sound_sndmain_cpp_FUN_00556fd0();
  return;
}
