// Name: core_flame.cpp_CFlame_showEditorHelp_FUN_004cb0a0
// Address: 004cb0a0
// Address Range: [[004cb0a0, 004cb0df]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_showEditorHelp_FUN_004cb0a0(CFlame *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_showEditorHelp_FUN_004cb0a0(CFlame *this_ptr,int *y_pos)

{
  int iVar1;
  int x_pos;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  x_pos = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size flame.",x_pos,iVar1 + 0xb);
  *y_pos = *y_pos + 0xb;
  return;
}
