// Name: core_grave.cpp_CGrave_showEditorHelp_FUN_004eead0
// Address: 004eead0
// Address Range: [[004eead0, 004eeb0b]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_showEditorHelp_FUN_004eead0(CGrave *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_showEditorHelp_FUN_004eead0(CGrave *this_ptr,int *y_pos)

{
  int iVar1;
  int x_pos;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  x_pos = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("Hold down CTRL to view grave animation on the very last frame.",x_pos,iVar1 + 0xb);
  *y_pos = *y_pos + 0xb;
  return;
}
