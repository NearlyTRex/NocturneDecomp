// Name: sound_sndmain.cpp_getSoundDeviceInfo_FUN_00552920
// Address: 00552920
// Address Range: [[00552920, 0055297c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_00552920(int device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_00552920(int device_id,SSoundDeviceInfo *device_info)

{
  int iVar1;
  SSoundDeviceInfo *pSVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890();
  if ((device_id < 0) || (iVar1 <= device_id)) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x1519;
    core_main_c_displayErrorAndQuit_FUN_004e4500("getSoundDeviceInfo - invalid index");
  }
  pSVar2 = g_SSoundDeviceInfo_ARRAY_026485c0 + device_id;
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)device_info->device_name = *(uint *)pSVar2->device_name;
    pSVar2 = (SSoundDeviceInfo *)((int)pSVar2 + ((uint)bVar3 * -2 + 1) * 4);
    device_info = (SSoundDeviceInfo *)((int)device_info + (uint)bVar3 * -8 + 4);
  }
  return;
}
