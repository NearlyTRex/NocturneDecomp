// Name: sound_sndmain.cpp_FUN_00556ab0
// Address: 00556ab0
// Address Range: [[00556ab0, 00556adc]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00556ab0(uint param_1,float param_2)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00556ab0(uint param_1,float param_2)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_FUN_00552f10(param_1,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar1->options).current_volume = param_2;
  *(byte *)&pCVar1->changed_flags = (byte)pCVar1->changed_flags | 8;
  sound_sndmain_cpp_FUN_00556fd0();
  return 1;
}
