// Name: sound_sndmain.cpp_setSfxUserData_FUN_00556b40
// Address: 00556b40
// Address Range: [[00556b40, 00556ba1]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_setSfxUserData_FUN_00556b40(uint param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_setSfxUserData_FUN_00556b40(uint param_1,int param_2,uint param_3)

{
  CSfxSlot *pCVar1;
  
  if ((param_2 < 0) || (1 < param_2)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x10d5;
    core_main_c_FUN_004e4330("setSfxUserData - invalid user data index: %d",param_2);
  }
  pCVar1 = sound_sndmain_cpp_FUN_00552f10(param_1,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(uint *)(&(pCVar1->options).field_0x44 + param_2 * 4) = param_3;
  sound_sndmain_cpp_FUN_00556fd0();
  return 1;
}
