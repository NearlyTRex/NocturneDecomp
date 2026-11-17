// Name: sound_sndmain.cpp_selectSoundDevice_FUN_00558640
// Address: 00558640
// Address Range: [[00558640, 005586a0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_00558640(int device_id)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_00558640(int device_id)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_005586b0();
  if (uVar1 != 0) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0x1575;
    core_main_c_displayErrorAndQuit_FUN_004e4330("selectSoundDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = g_CurrentSoundDevice;
  }
  iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430();
  if ((device_id < iVar2) && (-1 < device_id)) {
    g_CurrentSoundDevice = device_id;
    return;
  }
  g_CurrentSoundDevice = sound_sndmain_cpp_findBestSoundDevice_FUN_00558520();
  return;
}
