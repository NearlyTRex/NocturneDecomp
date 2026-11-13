// Name: core_sound.cpp_FUN_0055b060
// Address: 0055b060
// Address Range: [[0055b060, 0055b07c]]
// Convention: unknown
// Signature: undefined4 core_sound_cpp_FUN_0055b060(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_sound_cpp_FUN_0055b060(void)

{
  int in_stack_00000008;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < 0x1b)) {
    return *(uint *)(in_stack_00000008 * 0x10 + 0x61c06c);
  }
  return 0x5ea922;
}
