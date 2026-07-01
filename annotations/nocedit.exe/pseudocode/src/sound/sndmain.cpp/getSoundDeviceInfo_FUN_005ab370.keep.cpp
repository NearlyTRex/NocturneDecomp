// Name: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
// Address: 005ab370
// MANUAL RECONSTRUCTION
// Address Range: [[005ab370, 005ab3cc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(int device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(int device_id,SSoundDeviceInfo *device_info)

{
  int iVar1;

  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
  if ((device_id < 0) || (iVar1 <= device_id)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 4853;
    core_main_c_displayErrorAndQuit_FUN_00506f10("getSoundDeviceInfo - invalid index");
  }
  memcpy(device_info,&g_SoundDevices[device_id],sizeof(SSoundDeviceInfo));
  return;
}
