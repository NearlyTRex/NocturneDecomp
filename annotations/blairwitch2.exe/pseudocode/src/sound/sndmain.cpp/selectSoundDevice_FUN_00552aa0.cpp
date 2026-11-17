// Name: sound_sndmain.cpp_selectSoundDevice_FUN_00552aa0
// Address: 00552aa0
// Address Range: [[00552aa0, 00552b00]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_00552aa0(int device_id)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_00552aa0(int device_id)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_00552b10();
  if (uVar1 != 0) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x156b;
    core_main_c_displayErrorAndQuit_FUN_004e4500("selectSoundDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = g_CurrentSoundDevice;
  }
  iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890();
  if ((device_id < iVar2) && (-1 < device_id)) {
    g_CurrentSoundDevice = device_id;
    return;
  }
  g_CurrentSoundDevice = sound_sndmain_cpp_findBestSoundDevice_FUN_00552980();
  return;
}
