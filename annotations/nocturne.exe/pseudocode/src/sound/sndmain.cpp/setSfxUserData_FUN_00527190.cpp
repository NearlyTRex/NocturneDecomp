// Name: sound_sndmain.cpp_setSfxUserData_FUN_00527190
// Address: 00527190
// Address Range: [[00527190, 005271f1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxUserData_FUN_00527190(uint sfx_handle,int index,void *value)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxUserData_FUN_00527190(uint sfx_handle,int index,void *value)

{
  CSfxSlot *pCVar1;
  
  if ((index < 0) || (1 < index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 3825;
    core_main_c_displayErrorAndQuit_FUN_004c8440("setSfxUserData - invalid user data index: %d",index);
  }
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar1->options).userdata[index] = value;
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
