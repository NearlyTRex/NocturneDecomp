// Name: sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
// Address: 005ab4c0
// Address Range: [[005ab4c0, 005ab520]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(int device_id)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(int device_id)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530();
  if (uVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 4917;
    core_main_c_displayErrorAndQuit_FUN_00506f10("selectSoundDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = g_CurrentSoundDevice;
  }
  iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
  if ((device_id < iVar2) && (-1 < device_id)) {
    g_CurrentSoundDevice = device_id;
    return;
  }
  g_CurrentSoundDevice = sound_sndmain_cpp_findBestSoundDevice_FUN_005ab3d0();
  return;
}
