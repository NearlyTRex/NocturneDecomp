// Name: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790
// Address: 00575790
// Address Range: [[00575790, 005757e5]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00575790(int index,SRecordingDeviceInfo *device_info)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00575790(int index,SRecordingDeviceInfo *device_info)

{
  int iVar1;
  SRecordingDeviceInfo *pSVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730();
  if ((index < 0) || (iVar1 <= index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 5717;
    core_main_c_displayErrorAndQuit_FUN_005030e0("getRecordingDeviceInfo - invalid index");
  }
  pSVar2 = g_RecordingDevices + index;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)device_info->device_name = *(uint *)pSVar2->device_name;
    pSVar2 = (SRecordingDeviceInfo *)((int)pSVar2 + ((uint)bVar3 * -2 + 1) * 4);
    device_info = (SRecordingDeviceInfo *)((int)device_info + (uint)bVar3 * -8 + 4);
  }
  return;
}
