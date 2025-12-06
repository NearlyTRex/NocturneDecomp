// Name: core_ladder.cpp_FUN_00502e50
// Address: 00502e50
// Address Range: [[00502e50, 00502e8b]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502e50()

#include "nocturne.h"

/* Signature: byte actors_other_ladder.cpp_FUN_00502e50(uint param_1, uint
   param_2) */

void core_ladder_cpp_FUN_00502e50(void)

{
  int iVar1;
  int x_pos;
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size ladder.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}
