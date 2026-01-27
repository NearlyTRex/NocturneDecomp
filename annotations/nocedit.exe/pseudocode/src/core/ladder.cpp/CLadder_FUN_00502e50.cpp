// Name: core_ladder.cpp_CLadder_FUN_00502e50
// Address: 00502e50
// Address Range: [[00502e50, 00502e8b]]
// Convention: __cdecl
// Signature: void core_ladder.cpp_CLadder_FUN_00502e50(CLadder * this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_FUN_00502e50(CLadder *this_ptr)

{
  int iVar1;
  int x_pos;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size ladder.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}
