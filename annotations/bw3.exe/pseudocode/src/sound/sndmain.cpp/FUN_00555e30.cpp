// Name: sound_sndmain.cpp_FUN_00555e30
// Address: 00555e30
// Address Range: [[00555e30, 00555e82]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00555e30(int index,void *userdata)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00555e30(int index,void *userdata)

{
  if ((index < 0) || (1 < index)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xe6e;
    core_main_c_FUN_004e4330("setNextSfxUserData - invalid user data index: %d",index);
  }
  *(void **)(_DAT_02ceb91c * 0x60 + 0x2ceb964 + index * 4) = userdata;
  return;
}
