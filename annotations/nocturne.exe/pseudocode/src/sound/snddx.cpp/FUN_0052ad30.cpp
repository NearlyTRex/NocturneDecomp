// Name: sound_snddx.cpp_FUN_0052ad30
// Address: 0052ad30
// Address Range: [[0052ad30, 0052ad4f]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_0052ad30(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sound_snddx_cpp_FUN_0052ad30(void)

{
  int in_stack_00000004;
  
  if (((0 < in_stack_00000004) && (in_stack_00000004 < 0x19)) &&
     (*(int *)(&DAT_02dc9244 + in_stack_00000004 * 4) != 0)) {
    return 1;
  }
  return 0;
}
