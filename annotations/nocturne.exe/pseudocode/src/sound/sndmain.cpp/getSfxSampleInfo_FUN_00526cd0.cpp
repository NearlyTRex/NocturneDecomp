// Name: sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0
// Address: 00526cd0
// Address Range: [[00526cd0, 00526d00]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0(uint param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  puVar3 = *(uint **)(iVar1 + 0x74);
  for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    param_2 = param_2 + (uint)bVar4 * -2 + 1;
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
