// Name: sound_sndmain.cpp_FUN_00556a30
// Address: 00556a30
// Address Range: [[00556a30, 00556a6b]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00556a30(uint param_1,undefined4 param_2)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00556a30(uint param_1,uint param_2)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_FUN_00552f10(param_1,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)&pCVar1->field_0x30 = param_2;
  *(uint *)&pCVar1->field_0x34 = 1;
  pCVar1->field_0x118 = pCVar1->field_0x118 | 4;
  sound_sndmain_cpp_FUN_00556fd0();
  return 1;
}
