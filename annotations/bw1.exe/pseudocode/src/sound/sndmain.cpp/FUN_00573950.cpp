// Name: sound_sndmain.cpp_FUN_00573950
// Address: 00573950
// Address Range: [[00573950, 0057397c]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00573950(uint param_1,undefined4 param_2)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00573950(uint param_1,uint param_2)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_FUN_0056fa10(param_1,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)&(pCVar1->options).field_0x38 = param_2;
  pCVar1->field_0x118 = pCVar1->field_0x118 | 8;
  sound_sndmain_cpp_FUN_00573e70();
  return 1;
}
