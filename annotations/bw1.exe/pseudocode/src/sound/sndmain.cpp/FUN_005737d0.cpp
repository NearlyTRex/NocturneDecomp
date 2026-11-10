// Name: sound_sndmain.cpp_FUN_005737d0
// Address: 005737d0
// Address Range: [[005737d0, 0057380b]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_005737d0(uint param_1,undefined4 param_2)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_005737d0(uint param_1,uint param_2)

{
  byte bVar1;
  CSfxSlot *pCVar2;
  
  pCVar2 = sound_sndmain_cpp_FUN_0056fa10(param_1,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)&(pCVar2->options).field_0x1c = param_2;
  bVar1 = pCVar2->field_0x118;
  *(uint *)&(pCVar2->options).field_0x20 = 1;
  pCVar2->field_0x118 = bVar1 | 2;
  sound_sndmain_cpp_FUN_00573e70();
  return 1;
}
