// Name: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00552d60
// Address: 00552d60
// Address Range: [[00552d60, 00552db5]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00552d60(int index,SRecordingDeviceInfo *device_info)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00552d60(int index,SRecordingDeviceInfo *device_info)

{
  int iVar1;
  SRecordingDeviceInfo *pSVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_00552d00();
  if ((index < 0) || (iVar1 <= index)) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x165e;
    core_main_c_displayErrorAndQuit_FUN_004e4500("getRecordingDeviceInfo - invalid index");
  }
  pSVar2 = g_SRecordingDeviceInfo_ARRAY_02649028 + index;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)device_info->device_name = *(uint *)pSVar2->device_name;
    pSVar2 = (SRecordingDeviceInfo *)((int)pSVar2 + ((uint)bVar3 * -2 + 1) * 4);
    device_info = (SRecordingDeviceInfo *)((int)device_info + (uint)bVar3 * -8 + 4);
  }
  return;
}
