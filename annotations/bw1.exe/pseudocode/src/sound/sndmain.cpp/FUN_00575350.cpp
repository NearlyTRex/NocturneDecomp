// Name: sound_sndmain.cpp_FUN_00575350
// Address: 00575350
// Address Range: [[00575350, 005753ac]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00575350(int device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00575350(int device_id,SSoundDeviceInfo *device_info)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0();
  if ((device_id < 0) || (iVar1 <= device_id)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1510;
    core_main_c_FUN_005030e0("getSoundDeviceInfo - invalid index");
  }
  puVar2 = (uint *)(device_id * 0x118 + 0x2c7fd90);
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)device_info = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    device_info = device_info + (uint)bVar3 * -8 + 4;
  }
  return;
}
