// Name: core_glass.cpp_CGlass_showEditorHelp_FUN_004eb600
// Address: 004eb600
// Address Range: [[004eb600, 004eb68f]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_showEditorHelp_FUN_004eb600(CGlass * this_ptr, int * y_pos)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_showEditorHelp_FUN_004eb600(CGlass *this_ptr,int *y_pos)

{
  int iVar1;
  int iVar2;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  iVar2 = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size glass:",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  Left/Right changes width (x-size)",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  Up/Down changes height (y-size)",iVar2,iVar1 + 0xb);
  iVar2 = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("  You cannot change the thickness (z-size)",iVar2,iVar1 + 0xb);
  *y_pos = *y_pos + 0xb;
  return;
}
