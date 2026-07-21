// Name: sound_sndmain.cpp_setSfxFade_FUN_00527260
// Address: 00527260
// Address Range: [[00527260, 005272ab]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_setSfxFade_FUN_00527260(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_setSfxFade_FUN_00527260(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x108) = param_2;
  *(uint *)(iVar1 + 0x10c) = param_3;
  *(float *)(iVar1 + 0x110) = (float)param_4;
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
