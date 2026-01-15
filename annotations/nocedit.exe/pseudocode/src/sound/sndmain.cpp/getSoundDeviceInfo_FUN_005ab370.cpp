// Name: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
// Address: 005ab370
// Address Range: [[005ab370, 005ab3cc]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(int device_id,SSoundDeviceInfo *device_info)

{
  int iVar1;
  SSoundDeviceInfo *pSVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
  if ((device_id < 0) || (iVar1 <= device_id)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x12f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("getSoundDeviceInfo - invalid index");
  }
  pSVar2 = g_SoundDevices + device_id;
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)device_info->device_name = *(uint *)pSVar2->device_name;
    pSVar2 = (SSoundDeviceInfo *)((int)pSVar2 + ((uint)bVar3 * -2 + 1) * 4);
    device_info = (SSoundDeviceInfo *)((int)device_info + (uint)bVar3 * -8 + 4);
  }
  return;
}
