// Name: core_ladder.cpp_CLadder_showEditorHelp_FUN_00502e50
// Address: 00502e50
// Address Range: [[00502e50, 00502e8b]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_showEditorHelp_FUN_00502e50(CLadder *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_showEditorHelp_FUN_00502e50(CLadder *this_ptr,int *y_pos)

{
  int iVar1;
  int x_pos;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  x_pos = g_ClipLeft;
  iVar1 = *y_pos;
  *y_pos = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("With CTRL held down, use slew keys to size ladder.",x_pos,iVar1 + 0xb);
  *y_pos = *y_pos + 0xb;
  return;
}
