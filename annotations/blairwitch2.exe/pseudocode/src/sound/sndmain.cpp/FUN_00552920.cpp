// Name: sound_sndmain.cpp_FUN_00552920
// Address: 00552920
// Address Range: [[00552920, 0055297c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00552920(int device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00552920(int device_id,SSoundDeviceInfo *device_info)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890();
  if ((device_id < 0) || (iVar1 <= device_id)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x1519;
    core_main_c_FUN_004e4500("getSoundDeviceInfo - invalid index");
  }
  puVar2 = (uint *)(device_id * 0x118 + 0x26485c0);
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)device_info = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    device_info = device_info + (uint)bVar3 * -8 + 4;
  }
  return;
}
