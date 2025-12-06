// Name: sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0
// Address: 005ab3d0
// Address Range: [[005ab3d0, 005ab4b9]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_005ab3d0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar2;
  SSoundDeviceInfo device_info2;
  SSoundDeviceInfo device_info3;
  SSoundDeviceInfo device_info1;
  int iStack_1c;
  
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&device_info1);
      if (device_info1.device_value1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&device_info2);
      if (((device_info2.api_type == 1) && (device_info2.device_guid != 0)) &&
         (device_info2.device_value2 == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,(SSoundDeviceInfo *)&stack0xfffffee4);
      if ((iStack_1c == 1) && (unaff_ESI == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&device_info3);
      if (device_info3.device_id == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}
