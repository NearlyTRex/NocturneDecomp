// Name: sound_sndmain.cpp_FUN_005753b0
// Address: 005753b0
// Address Range: [[005753b0, 005754c3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_005753b0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_005753b0(void)

{
  int iVar1;
  int iVar2;
  SSoundDeviceInfo aSStack_580 [264];
  int local_478;
  SSoundDeviceInfo local_468 [256];
  int local_368;
  int local_354;
  SSoundDeviceInfo local_350 [256];
  int local_250;
  SSoundDeviceInfo local_238 [264];
  int local_130;
  SSoundDeviceInfo local_120 [256];
  int local_20;
  int local_10;
  int local_c;
  
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_FUN_00575350(iVar2,aSStack_580);
      if (1 < local_478) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_FUN_00575350(iVar2,local_238);
      if (0 < local_130) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_FUN_00575350(iVar2,local_120);
      if (((local_20 == 1) && (local_10 != 0)) && (local_c == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_FUN_00575350(iVar2,local_468);
      if ((local_368 == 1) && (local_354 == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_FUN_00575350(iVar2,local_350);
      if (local_250 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}
