// Name: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900
// Address: 00558900
// Address Range: [[00558900, 00558955]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00558900(int index,SRecordingDeviceInfo *device_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00558900(int index,SRecordingDeviceInfo *device_info)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005588a0();
  if ((index < 0) || (iVar1 <= index)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1668;
    core_main_c_FUN_004e4330("getRecordingDeviceInfo - invalid index");
  }
  puVar2 = (uint *)(index * 0x108 + 0x2cf3428);
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)device_info->device_name = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    device_info = (SRecordingDeviceInfo *)((int)device_info + (uint)bVar3 * -8 + 4);
  }
  return;
}
