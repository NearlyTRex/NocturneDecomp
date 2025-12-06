// Name: core_tvbat.cpp_CTVBat_FUN_005e5400
// Address: 005e5400
// Address Range: [[005e5400, 005e543b]]
// Convention: __cdecl
// Signature: void core_tvbat.cpp_CTVBat_FUN_005e5400(CTVBat * this_ptr)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_FUN_005e5400(CTVBat *this_ptr)

{
  int iVar1;
  int x_pos;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150((CDemonActor *)this_ptr,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size cage.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}
