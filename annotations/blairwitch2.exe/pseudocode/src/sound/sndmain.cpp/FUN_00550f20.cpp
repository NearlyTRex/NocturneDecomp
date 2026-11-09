// Name: sound_sndmain.cpp_FUN_00550f20
// Address: 00550f20
// Address Range: [[00550f20, 00550f4c]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00550f20(uint param_1,undefined4 param_2)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00550f20(uint param_1,uint param_2)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_FUN_0054d3a0(param_1,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)&pCVar1->field_0x38 = param_2;
  pCVar1->field_0x118 = pCVar1->field_0x118 | 8;
  sound_sndmain_cpp_FUN_00551440();
  return 1;
}
