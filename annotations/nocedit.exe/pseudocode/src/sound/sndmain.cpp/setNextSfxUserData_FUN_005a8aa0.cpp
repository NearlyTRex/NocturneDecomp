// Name: sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0
// Address: 005a8aa0
// Address Range: [[005a8aa0, 005a8aef]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0(int index, void * userdata)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_005a8aa0(int index,void *userdata)

{
  if ((index < 0) || (1 < index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xcf3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setNextSfxUserData - invalid user data index: %d",index);
  }
  *(void **)(g_SfxLastSlot * 0x70 + 0x3f624fc + index * 4) = userdata;
  return;
}
