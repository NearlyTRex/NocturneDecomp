// Name: sound_sndmain.cpp_setSfxUserData_FUN_00550fb0
// Address: 00550fb0
// Address Range: [[00550fb0, 00551011]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxUserData_FUN_00550fb0(uint sfx_handle,int index,void *value)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxUserData_FUN_00550fb0(uint sfx_handle,int index,void *value)

{
  CSfxSlot *pCVar1;
  
  if ((index < 0) || (1 < index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 4301;
    core_main_c_displayErrorAndQuit_FUN_004e4500("setSfxUserData - invalid user data index: %d");
  }
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0054d3a0(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar1->options).userdata[index] = value;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 1;
}
