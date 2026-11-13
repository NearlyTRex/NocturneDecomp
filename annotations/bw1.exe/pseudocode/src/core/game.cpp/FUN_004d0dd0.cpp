// Name: core_game.cpp_FUN_004d0dd0
// Address: 004d0dd0
// Address Range: [[004d0dd0, 004d0e64]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004d0dd0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_game_cpp_FUN_004d0dd0(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  
  if ((&DAT_01c50950)[in_stack_00000004] == '\0') {
    if ((((&DAT_01c50950)[in_stack_00000008] != '\0') && (*in_stack_0000000c < in_stack_00000014))
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
