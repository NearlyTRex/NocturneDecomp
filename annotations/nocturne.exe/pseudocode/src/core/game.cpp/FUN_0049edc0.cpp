// Name: core_game.cpp_FUN_0049edc0
// Address: 0049edc0
// Address Range: [[0049edc0, 0049ee23]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_0049edc0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_game_cpp_FUN_0049edc0(void)

{
  float fVar1;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar1 = (*(float *)(0x01C775EC + 0x264) * in_stack_0000000c) / in_stack_00000008;
  if (0.0 <= *in_stack_00000004) {
    *in_stack_00000004 = *in_stack_00000004 - fVar1;
    if (*in_stack_00000004 < 0.0) {
      *in_stack_00000004 = 0.0;
      return;
    }
  }
  else {
    *in_stack_00000004 = *in_stack_00000004 + fVar1;
    if (0.0 < *in_stack_00000004) {
      *in_stack_00000004 = 0.0;
      return;
    }
  }
  return;
}
