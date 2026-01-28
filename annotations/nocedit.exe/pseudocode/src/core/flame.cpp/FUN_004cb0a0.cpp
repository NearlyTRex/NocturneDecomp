// Name: core_flame.cpp_FUN_004cb0a0
// Address: 004cb0a0
// Address Range: [[004cb0a0, 004cb0df]]
// Convention: unknown
// Signature: void core_flame_cpp_FUN_004cb0a0(void)

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004cb0a0(uint param_1, uint param_2)
    */

void core_flame_cpp_FUN_004cb0a0(void)

{
  int iVar1;
  int x_pos;
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size flame.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}
