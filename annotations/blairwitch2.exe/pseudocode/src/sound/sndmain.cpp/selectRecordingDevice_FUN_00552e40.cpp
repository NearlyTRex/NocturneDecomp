// Name: sound_sndmain.cpp_selectRecordingDevice_FUN_00552e40
// Address: 00552e40
// Address Range: [[00552e40, 00552ea0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_00552e40(int device_id)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_00552e40(int device_id)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_00552f50();
  if (iVar1 != 0) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x168a;
    core_main_c_displayErrorAndQuit_FUN_004e4500("selectRecordingDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = g_INT_0061bccc;
  }
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_00552d00();
  if ((device_id < iVar1) && (-1 < device_id)) {
    g_INT_0061bccc = device_id;
    return;
  }
  g_INT_0061bccc = sound_sndmain_cpp_findBestRecordingDevice_FUN_00552dc0();
  return;
}
