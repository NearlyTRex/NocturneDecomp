// Name: core_sound.cpp_FUN_00560be0
// Address: 00560be0
// Address Range: [[00560be0, 00560bfc]]
// Convention: unknown
// Signature: undefined4 core_sound_cpp_FUN_00560be0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_sound_cpp_FUN_00560be0(void)

{
  int in_stack_00000008;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < 0x1b)) {
    return *(uint *)(in_stack_00000008 * 0x10 + 0x6045fc);
  }
  return 0x5d5376;
}
