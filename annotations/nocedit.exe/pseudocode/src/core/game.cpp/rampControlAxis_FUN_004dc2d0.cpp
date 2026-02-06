// Name: core_game.cpp_rampControlAxis_FUN_004dc2d0
// Address: 004dc2d0
// Address Range: [[004dc2d0, 004dc364]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_rampControlAxis_FUN_004dc2d0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_rampControlAxis_FUN_004dc2d0(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  
  if (g_KeyboardState[in_stack_00000004] == '\0') {
    if (((g_KeyboardState[in_stack_00000008] != '\0') && (*in_stack_0000000c < in_stack_00000014))
       && (fVar1 = (g_CGamePtr->delta_time_float * in_stack_00000014) / in_stack_00000010 +
                   *in_stack_0000000c, *in_stack_0000000c = fVar1, in_stack_00000014 < fVar1)) {
      *in_stack_0000000c = in_stack_00000014;
      return;
    }
  }
  else {
    fVar1 = -in_stack_00000014;
    if ((fVar1 < *in_stack_0000000c) &&
       (fVar2 = *in_stack_0000000c -
                (g_CGamePtr->delta_time_float * in_stack_00000014) / in_stack_00000010,
       *in_stack_0000000c = fVar2, fVar2 < fVar1)) {
      *in_stack_0000000c = fVar1;
      return;
    }
  }
  return;
}
