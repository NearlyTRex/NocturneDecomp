// Name: core_grave.cpp_FUN_004eead0
// Address: 004eead0
// Address Range: [[004eead0, 004eeb0b]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004eead0()

#include "nocturne.h"

/* Signature: byte actors_other_grave.cpp_FUN_004eead0(uint param_1, uint param_2)
    */

void core_grave_cpp_FUN_004eead0(void)

{
  int iVar1;
  int x_pos;
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("Hold down CTRL to view grave animation on the very last frame.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}
