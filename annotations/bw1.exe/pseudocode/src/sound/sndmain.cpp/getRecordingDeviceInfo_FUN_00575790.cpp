// Name: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790
// Address: 00575790
// Address Range: [[00575790, 005757e5]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00575790(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00575790(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730();
  if ((param_1 < 0) || (iVar1 <= param_1)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1655;
    core_main_c_FUN_005030e0("getRecordingDeviceInfo - invalid index");
  }
  puVar2 = (uint *)(param_1 * 0x108 + 0x2c807f8);
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
  }
  return;
}
