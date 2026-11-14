// Name: sound_sndmain.cpp_setSfxUserData_FUN_005739e0
// Address: 005739e0
// Address Range: [[005739e0, 00573a41]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxUserData_FUN_005739e0(uint sfx_handle,int index,void *value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSfxUserData_FUN_005739e0(uint sfx_handle,int index,void *value)

{
  CSfxSlot *pCVar1;
  
  if ((index < 0) || (1 < index)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x10c4;
    core_main_c_FUN_005030e0("setSfxUserData - invalid user data index: %d",index);
  }
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar1->options).userdata[index] = value;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 1;
}
