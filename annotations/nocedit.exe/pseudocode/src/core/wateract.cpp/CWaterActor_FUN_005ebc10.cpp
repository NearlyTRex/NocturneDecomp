// Name: core_wateract.cpp_CWaterActor_FUN_005ebc10
// Address: 005ebc10
// Address Range: [[005ebc10, 005ebc4f]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005ebc10(CWaterActor * this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005ebc10(CWaterActor *this_ptr)

{
  int iVar1;
  int x_pos;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size water plane.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}
