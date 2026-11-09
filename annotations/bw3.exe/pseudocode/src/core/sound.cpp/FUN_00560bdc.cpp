// Name: core_sound.cpp_FUN_00560bdc
// Address: 00560bdc
// Address Range: [[00560bdc, 00560bfc]]
// Convention: unknown
// Signature: undefined4 core_sound_cpp_FUN_00560bdc(undefined4 param_1,int param_2)

#include "nocturne.h"

uint core_sound_cpp_FUN_00560bdc(uint param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x1b)) {
    return *(uint *)(param_2 * 0x10 + 0x6045fc);
  }
  return 0x5d5376;
}
