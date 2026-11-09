// Name: sound_sndmain.cpp_FUN_00550da0
// Address: 00550da0
// Address Range: [[00550da0, 00550ddb]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00550da0(uint param_1,undefined4 param_2)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00550da0(uint param_1,uint param_2)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_FUN_0054d3a0(param_1,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)&pCVar1->field_0x1c = param_2;
  *(uint *)&pCVar1->field_0x20 = 1;
  pCVar1->field_0x118 = pCVar1->field_0x118 | 2;
  sound_sndmain_cpp_FUN_00551440();
  return 1;
}
