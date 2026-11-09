// Name: sound_sndmain.cpp_FUN_005738d0
// Address: 005738d0
// Address Range: [[005738d0, 0057390b]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_005738d0(uint param_1,undefined4 param_2)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_005738d0(uint param_1,uint param_2)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_FUN_0056fa10(param_1,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)&pCVar1->field_0x30 = param_2;
  *(uint *)&pCVar1->field_0x34 = 1;
  pCVar1->field_0x118 = pCVar1->field_0x118 | 4;
  sound_sndmain_cpp_FUN_00573e70();
  return 1;
}
