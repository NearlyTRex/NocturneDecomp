// Name: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
// Address: 00525fc0
// Address Range: [[00525fc0, 00525fed]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74 * 0x6c;
  *(uint *)(iVar1 + 0x2dc1b98) = 1;
  *(uint *)(iVar1 + 0x2dc1b94) = param_1;
  return;
}
