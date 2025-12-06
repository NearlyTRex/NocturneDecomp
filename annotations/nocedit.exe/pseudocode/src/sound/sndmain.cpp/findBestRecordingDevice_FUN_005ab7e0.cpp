// Name: sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0
// Address: 005ab7e0
// Address Range: [[005ab7e0, 005ab857]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_findBestRecordingDevice_FUN_005ab7e0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SRecordingDeviceInfo SStack_214;
  int iStack_c;
  
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getRecordingDeviceInfo_FUN_005ab780
                (iVar2,(SRecordingDeviceInfo *)&stack0xfffffef4);
      if (iStack_c == 1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getRecordingDeviceInfo_FUN_005ab780(iVar2,&SStack_214);
      if (SStack_214.device_id == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}
