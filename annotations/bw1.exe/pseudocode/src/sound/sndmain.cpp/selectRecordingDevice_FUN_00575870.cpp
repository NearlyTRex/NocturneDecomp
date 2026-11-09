// Name: sound_sndmain.cpp_selectRecordingDevice_FUN_00575870
// Address: 00575870
// Address Range: [[00575870, 005758d0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_00575870(int device_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_00575870(int device_id)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_00575980();
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1681;
    core_main_c_FUN_005030e0("selectRecordingDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = DAT_0062331c;
  }
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730();
  if ((device_id < iVar1) && (-1 < device_id)) {
    DAT_0062331c = device_id;
    return;
  }
  DAT_0062331c = sound_sndmain_cpp_findBestRecordingDevice_FUN_005757f0();
  return;
}
