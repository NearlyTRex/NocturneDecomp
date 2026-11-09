// Name: sound_sndmain.cpp_selectSoundDevice_FUN_005754d0
// Address: 005754d0
// Address Range: [[005754d0, 00575530]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_005754d0(int device_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_005754d0(int device_id)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = sound_sndmain_cpp_FUN_00575540();
  if (uVar1 != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1562;
    core_main_c_FUN_005030e0("selectSoundDevice - device already open.");
  }
  if (device_id < 0) {
    device_id = DAT_006232fc;
  }
  iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0();
  if ((device_id < iVar2) && (-1 < device_id)) {
    DAT_006232fc = device_id;
    return;
  }
  DAT_006232fc = sound_sndmain_cpp_FUN_005753b0();
  return;
}
