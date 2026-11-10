// Name: sound_sndmain.cpp_FUN_00573760
// Address: 00573760
// Address Range: [[00573760, 005737c5]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00573760(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00573760(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  byte bVar1;
  CSfxSlot *pCVar2;
  
  pCVar2 = sound_sndmain_cpp_FUN_0056fa10(param_1,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)&(pCVar2->options).field_0x1c = 0;
  *(uint *)&(pCVar2->options).field_0x4 = param_2;
  *(uint *)&(pCVar2->options).field_0x8 = param_3;
  *(uint *)&(pCVar2->options).field_0xc = param_4;
  *(uint *)&(pCVar2->options).field_0x10 = param_5;
  *(uint *)&(pCVar2->options).field_0x14 = param_6;
  *(uint *)&(pCVar2->options).field_0x18 = param_7;
  bVar1 = pCVar2->field_0x118;
  *(uint *)&(pCVar2->options).field_0x20 = 0;
  pCVar2->field_0x118 = bVar1 | 2;
  sound_sndmain_cpp_FUN_00573e70();
  return 1;
}
