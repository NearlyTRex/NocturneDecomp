// Name: sound_sndmain.cpp_findBestRecordingDevice_FUN_005757f0
// Address: 005757f0
// Address Range: [[005757f0, 00575867]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_findBestRecordingDevice_FUN_005757f0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_findBestRecordingDevice_FUN_005757f0(void)

{
  int iVar1;
  int iVar2;
  SRecordingDeviceInfo SStack_218;
  SRecordingDeviceInfo local_110;
  
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00575790(iVar2,&local_110);
      if (local_110.api_type == 1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00575790(iVar2,&SStack_218);
      if (SStack_218.api_type == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}
