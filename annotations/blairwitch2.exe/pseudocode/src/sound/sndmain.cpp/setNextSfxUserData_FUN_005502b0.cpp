// Name: sound_sndmain.cpp_setNextSfxUserData_FUN_005502b0
// Address: 005502b0
// Address Range: [[005502b0, 00550302]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_005502b0(int index,void *userdata)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_005502b0(int index,void *userdata)

{
  if ((index < 0) || (1 < index)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xe6b;
    core_main_c_FUN_004e4500("setNextSfxUserData - invalid user data index: %d",index);
  }
  *(void **)(_DAT_0264161c * 0x60 + 0x2641664 + index * 4) = userdata;
  return;
}
