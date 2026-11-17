// Name: sound_sndmain.cpp_setNextSfxUserData_FUN_00572920
// Address: 00572920
// Address Range: [[00572920, 00572972]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_00572920(int index,void *userdata)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_00572920(int index,void *userdata)

{
  if ((index < 0) || (1 < index)) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
    g_INT_01d1d404 = 0xe6b;
    core_main_c_displayErrorAndQuit_FUN_005030e0("setNextSfxUserData - invalid user data index: %d");
  }
  *(void **)(g_INT_02c78cec * 0x60 + 0x2c78d34 + index * 4) = userdata;
  return;
}
