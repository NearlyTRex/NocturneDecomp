// Name: sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
// Address: 00527380
// Address Range: [[00527380, 005273c7]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(int param_1)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x20)) {
    return *(uint *)(param_1 * 4 + 0x2dc7958);
  }
  PTR_01cc4800 = "..\\sound\\sndmain.cpp";
  INT_01cc4804 = 0xf47;
  core_main_c_FUN_004c8440("getSfxChannelVol - invalid channel index: %d",param_1);
  return *(uint *)(param_1 * 4 + 0x2dc7958);
}
