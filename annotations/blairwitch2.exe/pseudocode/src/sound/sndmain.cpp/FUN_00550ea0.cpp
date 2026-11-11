// Name: sound_sndmain.cpp_FUN_00550ea0
// Address: 00550ea0
// Address Range: [[00550ea0, 00550edb]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00550ea0(uint param_1,void *param_2)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00550ea0(uint param_1,void *param_2)

{
  uint uVar1;
  CSfxSlot *pCVar2;
  
  pCVar2 = sound_sndmain_cpp_FUN_0054d3a0(param_1,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar2->options).velocity_source_ptr = param_2;
  uVar1 = pCVar2->changed_flags;
  (pCVar2->options).velocity_format = 1;
  *(byte *)&pCVar2->changed_flags = (byte)uVar1 | 4;
  sound_sndmain_cpp_FUN_00551440();
  return 1;
}
