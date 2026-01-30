// Name: core_game.cpp_FUN_004dc370
// Address: 004dc370
// Address Range: [[004dc370, 004dc3d3]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004dc370(void)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004dc370(void)

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
