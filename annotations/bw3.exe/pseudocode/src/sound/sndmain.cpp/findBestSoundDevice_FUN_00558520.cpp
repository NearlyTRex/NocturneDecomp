// Name: sound_sndmain.cpp_findBestSoundDevice_FUN_00558520
// Address: 00558520
// Address Range: [[00558520, 00558633]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_00558520(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_00558520(void)

{
  int iVar1;
  int iVar2;
  SSoundDeviceInfo SStack_580;
  SSoundDeviceInfo local_468;
  SSoundDeviceInfo local_350;
  SSoundDeviceInfo local_238;
  SSoundDeviceInfo local_120;
  
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(iVar2,&SStack_580);
      if (1 < (int)SStack_580.has_hardware_mixing) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(iVar2,&local_238);
      if (0 < (int)local_238.has_hardware_mixing) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(iVar2,&local_120);
      if (((local_120.api_type == 1) && (local_120.is_primary_device != 0)) &&
         (local_120.is_emulated == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(iVar2,&local_468);
      if ((local_468.api_type == 1) && (local_468.is_emulated == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(iVar2,&local_350);
      if (local_350.api_type == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}
