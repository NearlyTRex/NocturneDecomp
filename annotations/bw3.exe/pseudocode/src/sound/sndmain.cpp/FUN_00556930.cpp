// Name: sound_sndmain.cpp_FUN_00556930
// Address: 00556930
// Address Range: [[00556930, 0055696b]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00556930(uint param_1,void *param_2)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00556930(uint param_1,void *param_2)

{
  uint uVar1;
  CSfxSlot *pCVar2;
  
  pCVar2 = sound_sndmain_cpp_FUN_00552f10(param_1,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar2->options).position_source_ptr = param_2;
  uVar1 = pCVar2->changed_flags;
  (pCVar2->options).position_format = 1;
  *(byte *)&pCVar2->changed_flags = (byte)uVar1 | 2;
  sound_sndmain_cpp_FUN_00556fd0();
  return 1;
}
