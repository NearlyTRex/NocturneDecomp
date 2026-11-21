// Name: sound_sndmain.cpp_setNextSfxUserData_FUN_00572920
// Address: 00572920
// Address Range: [[00572920, 00572972]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_00572920(int index,void *userdata)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_00572920(int index,void *userdata)

{
  if ((index < 0) || (1 < index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 3691;
    core_main_c_displayErrorAndQuit_FUN_005030e0("setNextSfxUserData - invalid user data index: %d");
  }
  *(void **)(g_SfxLastSlot * 0x60 + 0x2c78d34 + index * 4) = userdata;
  return;
}
