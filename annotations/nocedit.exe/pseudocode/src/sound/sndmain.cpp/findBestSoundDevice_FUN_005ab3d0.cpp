// Name: sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0
// Address: 005ab3d0
// Address Range: [[005ab3d0, 005ab4b9]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_005ab3d0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_005ab3d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SSoundDeviceInfo SStack_468;
  SSoundDeviceInfo SStack_350;
  SSoundDeviceInfo SStack_238;
  SSoundDeviceInfo SStack_120;
  
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&SStack_238);
      if (SStack_238.has_hardware_mixing != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar3,&SStack_468);
      if (((SStack_468.api_type == 1) && (SStack_468.is_primary_device != 0)) &&
         (SStack_468.is_emulated == 0)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar3,&SStack_120);
      if ((SStack_120.api_type == 1) && (SStack_120.is_emulated == 0)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar3,&SStack_350);
      if (SStack_350.api_type == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}
