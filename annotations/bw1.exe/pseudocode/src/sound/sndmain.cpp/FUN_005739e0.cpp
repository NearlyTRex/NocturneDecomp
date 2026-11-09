// Name: sound_sndmain.cpp_FUN_005739e0
// Address: 005739e0
// Address Range: [[005739e0, 00573a41]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_005739e0(uint param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_005739e0(uint param_1,int param_2,uint param_3)

{
  CSfxSlot *pCVar1;
  
  if ((param_2 < 0) || (1 < param_2)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x10c4;
    core_main_c_FUN_005030e0("setSfxUserData - invalid user data index: %d",param_2);
  }
  pCVar1 = sound_sndmain_cpp_FUN_0056fa10(param_1,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)(&pCVar1->field_0x44 + param_2 * 4) = param_3;
  sound_sndmain_cpp_FUN_00573e70();
  return 1;
}
