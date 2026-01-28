// Name: core_teleport.cpp_CTeleport_FUN_005dadc0
// Address: 005dadc0
// Address Range: [[005dadc0, 005dae0e]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_FUN_005dadc0(CTeleport *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005dadc0(CTeleport *this_ptr)

{
  int iVar1;
  int x_pos;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,in_stack_00000008);
  x_pos = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size box.",x_pos,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0x16;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"T","Select my CTeleportDest actor.");
  return;
}
