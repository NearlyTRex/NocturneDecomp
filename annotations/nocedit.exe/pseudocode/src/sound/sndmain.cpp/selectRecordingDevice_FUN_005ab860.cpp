// Name: sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
// Address: 005ab860
// Address Range: [[005ab860, 005ab8c0]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860(int device_id)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_005ab860(int device_id)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_005ab970();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1447;
    core_main_c_displayErrorAndQuit_FUN_00506f10("selectRecordingDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = g_CurrentRecordingDevice;
  }
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720();
  if ((device_id < iVar1) && (-1 < device_id)) {
    g_CurrentRecordingDevice = device_id;
    return;
  }
  g_CurrentRecordingDevice = sound_sndmain_cpp_findBestRecordingDevice_FUN_005ab7e0();
  return;
}
