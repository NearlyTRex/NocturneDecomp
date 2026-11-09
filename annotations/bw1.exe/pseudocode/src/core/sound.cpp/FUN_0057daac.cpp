// Name: core_sound.cpp_FUN_0057daac
// Address: 0057daac
// Address Range: [[0057daac, 0057dacc]]
// Convention: unknown
// Signature: undefined4 core_sound_cpp_FUN_0057daac(undefined4 param_1,int param_2)

#include "nocturne.h"

uint core_sound_cpp_FUN_0057daac(uint param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x1b)) {
    return *(uint *)(param_2 * 0x10 + 0x6236bc);
  }
  return 0x5f5b26;
}
