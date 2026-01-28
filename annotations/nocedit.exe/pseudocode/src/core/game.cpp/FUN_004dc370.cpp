// Name: core_game.cpp_FUN_004dc370
// Address: 004dc370
// Address Range: [[004dc370, 004dc3d3]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004dc370(void)

#include "nocturne.h"

void core_game_cpp_FUN_004dc370(void)

{
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  in_stack_00000008 = (g_CGamePtr->delta_time_float * in_stack_0000000c) / in_stack_00000008;
  if (0.0 <= *in_stack_00000004) {
    *in_stack_00000004 = *in_stack_00000004 - in_stack_00000008;
    if (*in_stack_00000004 < 0.0) {
      *in_stack_00000004 = 0.0;
      return;
    }
  }
  else {
    *in_stack_00000004 = *in_stack_00000004 + in_stack_00000008;
    if (0.0 < *in_stack_00000004) {
      *in_stack_00000004 = 0.0;
      return;
    }
  }
  return;
}
