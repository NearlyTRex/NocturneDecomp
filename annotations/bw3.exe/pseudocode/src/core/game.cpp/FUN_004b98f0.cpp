// Name: core_game.cpp_FUN_004b98f0
// Address: 004b98f0
// Address Range: [[004b98f0, 004b9953]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b98f0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_game_cpp_FUN_004b98f0(void)

{
  float fVar1;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar1 = (g_CGamePtr->delta_time_float * in_stack_0000000c) / in_stack_00000008;
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
