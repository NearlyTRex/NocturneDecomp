// Name: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
// Address: 005ab780
// MANUAL RECONSTRUCTION
// Address Range: [[005ab780, 005ab7d5]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_005ab780(int index,SRecordingDeviceInfo *device_info)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_005ab780(int index,SRecordingDeviceInfo *device_info)

{
  int iVar1;

  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720();
  if ((index < 0) || (iVar1 <= index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x141b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("getRecordingDeviceInfo - invalid index");
  }
  memcpy(device_info,&g_RecordingDevices[index],sizeof(SRecordingDeviceInfo));
  return;
}
