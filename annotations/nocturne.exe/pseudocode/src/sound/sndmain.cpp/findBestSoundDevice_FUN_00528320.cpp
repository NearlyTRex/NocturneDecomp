// Name: sound_sndmain.cpp_findBestSoundDevice_FUN_00528320
// Address: 00528320
// Address Range: [[00528320, 00528409]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_00528320(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_00528320(void)

{
  int iVar1;
  int iVar2;
  SSoundDeviceInfo SStack_468;
  SSoundDeviceInfo local_350;
  SSoundDeviceInfo local_238;
  SSoundDeviceInfo local_120;
  
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar2,&local_238);
      if (local_238.has_hardware_mixing != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar2,&SStack_468);
      if (((SStack_468.api_type == 1) && (SStack_468.is_primary_device != 0)) &&
         (SStack_468.is_emulated == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar2,&local_120);
      if ((local_120.api_type == 1) && (local_120.is_emulated == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar2,&local_350);
      if (local_350.api_type == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}
