// Name: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0
// Address: 005282c0
// Address Range: [[005282c0, 0052831c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(int device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(int device_id,SSoundDeviceInfo *device_info)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230();
  if ((device_id < 0) || (iVar1 <= device_id)) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0x11d1;
    core_main_c_FUN_004c8440("getSoundDeviceInfo - invalid index");
  }
  puVar2 = (uint *)(device_id * 0x118 + 0x2dc7a58);
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)device_info->device_name = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    device_info = (SSoundDeviceInfo *)((int)device_info + (uint)bVar3 * -8 + 4);
  }
  return;
}
