// Name: sound_sndmain.cpp_setNextSfxUserData_FUN_00555e30
// Address: 00555e30
// Address Range: [[00555e30, 00555e82]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_00555e30(int index,void *userdata)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_00555e30(int index,void *userdata)

{
  if ((index < 0) || (1 < index)) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0xe6e;
    core_main_c_displayErrorAndQuit_FUN_004e4330("setNextSfxUserData - invalid user data index: %d");
  }
  *(void **)(g_SfxLastSlot * 0x60 + 0x2ceb964 + index * 4) = userdata;
  return;
}
