// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_00551190
// Address: 00551190
// Address Range: [[00551190, 005511d7]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x20)) {
    return *(uint *)(param_1 * 4 + 0x26484c0);
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0x1123;
  core_main_c_FUN_004e4500("getSfxChannelVol - invalid channel index: %d",param_1);
  return *(uint *)(param_1 * 4 + 0x26484c0);
}
