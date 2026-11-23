// Name: sound_sndmain.cpp_selectRecordingDevice_FUN_00575870
// Address: 00575870
// Address Range: [[00575870, 005758d0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_00575870(int device_id)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_00575870(int device_id)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_00575980();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 5761;
    core_main_c_displayErrorAndQuit_FUN_005030e0("selectRecordingDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = g_CurrentRecordingDevice;
  }
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730();
  if ((device_id < iVar1) && (-1 < device_id)) {
    g_CurrentRecordingDevice = device_id;
    return;
  }
  g_CurrentRecordingDevice = sound_sndmain_cpp_findBestRecordingDevice_FUN_005757f0();
  return;
}
