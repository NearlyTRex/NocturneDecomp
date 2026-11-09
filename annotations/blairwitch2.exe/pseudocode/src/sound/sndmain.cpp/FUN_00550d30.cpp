// Name: sound_sndmain.cpp_FUN_00550d30
// Address: 00550d30
// Address Range: [[00550d30, 00550d95]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00550d30(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00550d30(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_FUN_0054d3a0(param_1,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)&pCVar1->field_0x1c = 0;
  *(uint *)&pCVar1->field_0x4 = param_2;
  *(uint *)&pCVar1->field_0x8 = param_3;
  *(uint *)&pCVar1->field_0xc = param_4;
  *(uint *)&pCVar1->field_0x10 = param_5;
  *(uint *)&pCVar1->field_0x14 = param_6;
  *(uint *)&pCVar1->field_0x18 = param_7;
  *(uint *)&pCVar1->field_0x20 = 0;
  pCVar1->field_0x118 = pCVar1->field_0x118 | 2;
  sound_sndmain_cpp_FUN_00551440();
  return 1;
}
