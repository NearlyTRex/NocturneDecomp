// Name: sound_sndmain.cpp_FUN_00550d30
// Address: 00550d30
// Address Range: [[00550d30, 00550d95]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00550d30(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00550d30(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  uint uVar1;
  CSfxSlot *pCVar2;
  
  pCVar2 = sound_sndmain_cpp_FUN_0054d3a0(param_1,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar2->options).position_source_ptr = (void *)0x0;
  *(uint *)&(pCVar2->options).position.x = param_2;
  *(uint *)((int)&(pCVar2->options).position.x + 4) = param_3;
  *(uint *)&(pCVar2->options).position.y = param_4;
  *(uint *)((int)&(pCVar2->options).position.y + 4) = param_5;
  *(uint *)&(pCVar2->options).position.z = param_6;
  *(uint *)((int)&(pCVar2->options).position.z + 4) = param_7;
  uVar1 = pCVar2->changed_flags;
  (pCVar2->options).position_format = 0;
  *(byte *)&pCVar2->changed_flags = (byte)uVar1 | 2;
  sound_sndmain_cpp_FUN_00551440();
  return 1;
}
