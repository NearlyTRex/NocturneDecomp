// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_00526210
// Address: 00526210
// Address Range: [[00526210, 0052623d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00526210(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00526210(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74 * 0x6c;
  *(uint *)(iVar1 + 0x2dc1bc4) = param_1;
  *(uint *)(iVar1 + 0x2dc1bc8) = param_2;
  return;
}
