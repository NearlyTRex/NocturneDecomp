// Name: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900
// Address: 00558900
// Address Range: [[00558900, 00558955]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00558900(int index,SRecordingDeviceInfo *device_info)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00558900(int index,SRecordingDeviceInfo *device_info)

{
  int iVar1;
  SRecordingDeviceInfo *pSVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005588a0();
  if ((index < 0) || (iVar1 <= index)) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0x1668;
    core_main_c_displayErrorAndQuit_FUN_004e4330("getRecordingDeviceInfo - invalid index");
  }
  pSVar2 = g_RecordingDevices + index;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)device_info->device_name = *(uint *)pSVar2->device_name;
    pSVar2 = (SRecordingDeviceInfo *)((int)pSVar2 + ((uint)bVar3 * -2 + 1) * 4);
    device_info = (SRecordingDeviceInfo *)((int)device_info + (uint)bVar3 * -8 + 4);
  }
  return;
}
