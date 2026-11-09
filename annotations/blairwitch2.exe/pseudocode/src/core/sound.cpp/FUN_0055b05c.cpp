// Name: core_sound.cpp_FUN_0055b05c
// Address: 0055b05c
// Address Range: [[0055b05c, 0055b07c]]
// Convention: unknown
// Signature: undefined4 core_sound_cpp_FUN_0055b05c(undefined4 param_1,int param_2)

#include "nocturne.h"

uint core_sound_cpp_FUN_0055b05c(uint param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x1b)) {
    return *(uint *)(param_2 * 0x10 + 0x61c06c);
  }
  return 0x5ea922;
}
