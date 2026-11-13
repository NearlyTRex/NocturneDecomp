// Name: sound_sndmain.cpp_setSfxUserData_FUN_00550fb0
// Address: 00550fb0
// Address Range: [[00550fb0, 00551011]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxUserData_FUN_00550fb0(uint sfx_handle,int index,void *value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSfxUserData_FUN_00550fb0(uint sfx_handle,int index,void *value)

{
  CSfxSlot *pCVar1;
  
  if ((index < 0) || (1 < index)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x10cd;
    core_main_c_FUN_004e4500("setSfxUserData - invalid user data index: %d",index);
  }
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0054d3a0(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar1->options).userdata[index] = value;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 1;
}
