// Name: core_teleport.cpp_CTeleport_showEditorHelp_FUN_005dadc0
// Address: 005dadc0
// Address Range: [[005dadc0, 005dae0e]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_showEditorHelp_FUN_005dadc0(CTeleport *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_showEditorHelp_FUN_005dadc0(CTeleport *this_ptr,int *y_pos)

{
  int iVar1;
  int x;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  x = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size box.",x,iVar1 + 0xb);
  *y_pos = *y_pos + 0x16;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (y_pos,"T","Select my CTeleportDest actor.");
  return;
}
