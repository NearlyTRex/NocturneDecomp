// Name: sound_sndmain.cpp_FUN_00572920
// Address: 00572920
// Address Range: [[00572920, 00572972]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00572920(int index,void *userdata)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00572920(int index,void *userdata)

{
  if ((index < 0) || (1 < index)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xe6b;
    core_main_c_FUN_005030e0("setNextSfxUserData - invalid user data index: %d",index);
  }
  *(void **)(_DAT_02c78cec * 0x60 + 0x2c78d34 + index * 4) = userdata;
  return;
}
