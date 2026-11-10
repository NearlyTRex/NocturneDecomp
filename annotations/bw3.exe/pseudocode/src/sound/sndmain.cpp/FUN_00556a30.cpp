// Name: sound_sndmain.cpp_FUN_00556a30
// Address: 00556a30
// Address Range: [[00556a30, 00556a6b]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00556a30(uint param_1,undefined4 param_2)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00556a30(uint param_1,uint param_2)

{
  byte bVar1;
  CSfxSlot *pCVar2;
  
  pCVar2 = sound_sndmain_cpp_FUN_00552f10(param_1,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)&(pCVar2->options).field_0x30 = param_2;
  bVar1 = pCVar2->field_0x118;
  *(uint *)&(pCVar2->options).field_0x34 = 1;
  pCVar2->field_0x118 = bVar1 | 4;
  sound_sndmain_cpp_FUN_00556fd0();
  return 1;
}
