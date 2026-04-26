// Name: sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0
// Address: 005a8aa0
// MANUAL RECONSTRUCTION
// Address Range: [[005a8aa0, 005a8aef]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_005a8aa0(int index,void *userdata)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_005a8aa0(int index,void *userdata)

{
  if ((index < 0) || (1 < index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xcf3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setNextSfxUserData - invalid user data index: %d",index);
  }
  g_SfxOptions[g_SfxLastSlot].userdata[index] = userdata;
  return;
}
