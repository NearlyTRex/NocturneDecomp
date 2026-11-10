// Name: sound_sndmain.cpp_setSfxUserData_FUN_00550fb0
// Address: 00550fb0
// Address Range: [[00550fb0, 00551011]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_setSfxUserData_FUN_00550fb0(uint param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_setSfxUserData_FUN_00550fb0(uint param_1,int param_2,uint param_3)

{
  CSfxSlot *pCVar1;
  
  if ((param_2 < 0) || (1 < param_2)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x10cd;
    core_main_c_FUN_004e4500("setSfxUserData - invalid user data index: %d",param_2);
  }
  pCVar1 = sound_sndmain_cpp_FUN_0054d3a0(param_1,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)(&(pCVar1->options).field_0x44 + param_2 * 4) = param_3;
  sound_sndmain_cpp_FUN_00551440();
  return 1;
}
