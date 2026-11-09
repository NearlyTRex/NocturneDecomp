// Name: sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0
// Address: 005589e0
// Address Range: [[005589e0, 00558a40]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_005589e0(int device_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_005589e0(int device_id)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_00558af0();
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1694;
    core_main_c_FUN_004e4330("selectRecordingDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = DAT_00604258;
  }
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005588a0();
  if ((device_id < iVar1) && (-1 < device_id)) {
    DAT_00604258 = device_id;
    return;
  }
  DAT_00604258 = sound_sndmain_cpp_findBestRecordingDevice_FUN_00558960();
  return;
}
