// Name: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0
// Address: 005282c0
// Address Range: [[005282c0, 0052831c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230();
  if ((param_1 < 0) || (iVar1 <= param_1)) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x11d1;
    FUN_004c8440("getSoundDeviceInfo - invalid index");
  }
  puVar2 = (uint *)(param_1 * 0x118 + 0x2dc7a58);
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
  }
  return;
}
