// Name: sound_sndmain.cpp_setNextSfxUserData_FUN_00526150
// Address: 00526150
// Address Range: [[00526150, 005261a9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_00526150(int index,void *userdata)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_00526150(int index,void *userdata)

{
  if ((index < 0) || (1 < index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 3271;
    core_main_c_displayErrorAndQuit_FUN_004c8440("setNextSfxUserData - invalid user data index: %d",index);
  }
  *(void **)(_DAT_02dc1b74 * 0x6c + 0x2dc1bcc + index * 4) = userdata;
  return;
}
