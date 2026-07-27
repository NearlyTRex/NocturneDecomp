// Name: sound_sndmain.cpp_selectSoundDevice_FUN_00528410
// Address: 00528410
// Address Range: [[00528410, 00528470]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_00528410(int param_1)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_00528410(int param_1)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_00528480();
  if (iVar1 != 0) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x1211;
    core_main_c_FUN_004c8440("selectSoundDevice - device already open.");
  }
  if (param_1 < 0) {
    param_1 = DAT_005bea74;
  }
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230();
  if ((param_1 < iVar1) && (-1 < param_1)) {
    DAT_005bea74 = param_1;
    return;
  }
  DAT_005bea74 = sound_sndmain_cpp_findBestSoundDevice_FUN_00528320();
  return;
}
