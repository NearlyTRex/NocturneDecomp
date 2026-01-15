// Name: sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0
// Address: 005a9ba0
// Address Range: [[005a9ba0, 005a9c01]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0(uint sfx_handle, int index, void * value)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxUserData_FUN_005a9ba0(uint sfx_handle,int index,void *value)

{
  CSfxSlot *pCVar1;
  
  if ((index < 0) || (1 < index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xf40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setSfxUserData - invalid user data index: %d",index);
  }
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar1->options).userdata[index] = value;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}
