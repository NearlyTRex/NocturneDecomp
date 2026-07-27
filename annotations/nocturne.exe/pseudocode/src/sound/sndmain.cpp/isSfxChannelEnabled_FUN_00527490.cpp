// Name: sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490
// Address: 00527490
// Address Range: [[00527490, 005274d3]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(int param_1)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x20)) {
    return *(uint *)(param_1 * 4 + 0x2dc79d8);
  }
  PTR_01cc4800 = "..\\sound\\sndmain.cpp";
  INT_01cc4804 = 0xf61;
  core_main_c_FUN_004c8440("isSfxChannelEnabled - invalid channel index: %d",param_1);
  return *(uint *)(param_1 * 4 + 0x2dc79d8);
}
